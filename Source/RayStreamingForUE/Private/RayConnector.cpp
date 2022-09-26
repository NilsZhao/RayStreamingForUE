#include "RayConnector.h"

#include "Misc/CommandLine.h"
#include "IWebSocket.h"
#include "RayInputDevice.h"
#include "WebSocketsModule.h"
#include "RayStreamingComponent.h"
#include "RayStreamingSettings.h"
#include "Engine/World.h"
#include "Kismet/KismetSystemLibrary.h"


FRayConnector::FRayConnector()
{
	FModuleManager::Get().LoadModuleChecked("WebSockets");

	const URayStreamingSettings* RayStreamingSettings = GetDefault<URayStreamingSettings>();
	if (RayStreamingSettings)
	{
		bEnableAutoReconnect = RayStreamingSettings->bEnableAutoReconnect;
		RegisteredCommands = RayStreamingSettings->PermittedConsoleCommands;
	}

}

FRayConnector::~FRayConnector()
{
	Disconnect();
}

void FRayConnector::BindEvents()
{
	if(Socket)
	{
		OnConnectHandle = Socket->OnConnected().AddLambda([&]()->void
		{
			for(URayStreamingComponent* RayComp : StreamingComponents)
				if(RayComp)
					RayComp->OnConnected.Broadcast();
			UE_LOG(LogTemp, Log, TEXT("WebSocket connected."));
		});

		OnConnectErrorHandle = Socket->OnConnectionError().AddLambda([&](const FString& Error)->void
		{
			for(URayStreamingComponent* RayComp : StreamingComponents)
				if(RayComp)
					RayComp->OnConnectionError.Broadcast(Error);
			
			UE_LOG(LogTemp, Warning, TEXT("WebSocket connect error: %s"), *Error);

			//设置重连计时器.
			ReconnectTimer = ReconnectInterval;
			
		});

		OnMessageHandle = Socket->OnMessage().AddLambda([&](const FString & Message)
		{
			UE_LOG(LogTemp, Error, TEXT("Message received: %s"), *Message);

			//将RayInput转发到InputDevice中进行后续处理.
			if(Message.StartsWith("RayInput_"))
				InputDevice.Get()->OnMessage(Message);
				//TOTO OnInputMessage.Broadcast(Message);

			//控制台指令, 如: RayCommand:r.setRes 1920x1080w
			else if(Message.StartsWith("RayCommand"))
			{
				RunConsoleCommand(Message);
			}
			
			//其他消息正常广播.
			else
				for(URayStreamingComponent* RayComp : StreamingComponents)
					if(RayComp)
						RayComp->OnMessage.Broadcast(Message);
		});

		OnRawMessageHandle = Socket->OnRawMessage().AddLambda([&](const void* Data, SIZE_T Size, SIZE_T BytesRemaining)
		{
			TArray<uint8> DataArr;
			DataArr.Append((uint8*)Data, Size);
			for(URayStreamingComponent* RayComp : StreamingComponents)
				if(RayComp)
					RayComp->OnRawMessage.Broadcast(DataArr);
		});

		OnMessageSentHandle = Socket->OnMessageSent().AddLambda([&](const FString& Message)
		{
			for(URayStreamingComponent* RayComp : StreamingComponents)
				if(RayComp)
					RayComp->OnMessageSent.Broadcast(Message);
			
			UE_LOG(LogTemp, Log, TEXT("Message sent: %s"), *Message);
		});

		OnCloseHandle = Socket->OnClosed().AddLambda([&](int32 StatusCode, const FString& Reason, bool bWasClean)
		{
			for(URayStreamingComponent* RayComp : StreamingComponents)
				if(RayComp)
					RayComp->OnClosed.Broadcast(StatusCode, Reason, bWasClean);
			UE_LOG(LogTemp, Log, TEXT("WebSocket closed: %s"), *Reason);
		});
	}
}

void FRayConnector::UnbindEvents() const
{
	if(Socket)
	{
		Socket->OnConnected().Remove(OnConnectHandle);
		Socket->OnConnectionError().Remove(OnConnectErrorHandle);
		Socket->OnClosed().Remove(OnCloseHandle);
		Socket->OnMessage().Remove(OnMessageHandle);
		Socket->OnRawMessage().Remove(OnRawMessageHandle);
		Socket->OnMessageSent().Remove(OnMessageSentHandle);
	}
}

void FRayConnector::BeginPlay()
{
	const URayStreamingSettings* RayStreamingSettings = GetDefault<URayStreamingSettings>();
	if(RayStreamingSettings)
	{
		if(RayStreamingSettings->bAutoConnect)
		{
			AutoConnect();
		}

		ReconnectInterval = RayStreamingSettings->ReconnectInterval;
		bEnableAutoReconnect = RayStreamingSettings->bEnableAutoReconnect;
		bEnableLocalTest = RayStreamingSettings->bEnableLocalTest;
	}
}

void FRayConnector::Tick(float DeltaTime)
{
#if WITH_EDITOR
	bool bPlayInEditor = false;
	for(FWorldContext Context : GEngine->GetWorldContexts())
	{
		if(Context.World() && Context.World()->IsPlayInEditor())
		{
			//只有在PIE模式下才会进行重连.
			bPlayInEditor = true;
		}
	}

	//非编辑器状态下或未启用本地测试, 不进行重连倒计时和
	if(!bPlayInEditor || !bEnableLocalTest) return;
#endif
	
	//进行重连倒计时;
	if(bEnableAutoReconnect)
	{
		if(ReconnectTimer > 0)
		{
			if(ReconnectTimer - DeltaTime <= 0 && ShouldReconnect())
			{
				AutoConnect();
			}
			
			ReconnectTimer -= DeltaTime;
		}
	}
}

void FRayConnector::AutoConnect()
{
	FScopeLock ScopeLock(&Mutex);
#if WITH_EDITOR
		const URayStreamingSettings* RaySettings = GetDefault<URayStreamingSettings>();
		if(RaySettings)
		{
			ConnectToUrl(RaySettings->TestUrl);
		}
#else
		ConnectTo3dcat();
#endif

	ScopeLock.Unlock();
}

void FRayConnector::ConnectTo3dcat()
{
	const FString CommandLineParam(FCommandLine::Get());
	UE_LOG(LogTemp, Log, TEXT("Command line params: %s"), *CommandLineParam);

	TArray<FString> ParamArray;
	CommandLineParam.ParseIntoArray(ParamArray,*FString(" "));

	//当命令行有参数时, 使用命令行端口进行连接
	if(ParamArray.Num() > 0 && ParamArray.Last().IsNumeric())
	{
		const FString Url = "ws://127.0.0.1:"+ ParamArray.Last() + "/";
		ConnectToUrl(Url);
	}else
	{
		UE_LOG(LogTemp, Error, TEXT("Unable to connect to 3dcat, command param doesn't end with socket port."));
	}
}

bool FRayConnector::IsConnected() const
{
	return Socket ? Socket->IsConnected() : false;
}

void FRayConnector::ConnectToUrl(FString NewUrl)
{
	if(Socket && Socket->IsConnected())
	{
		Disconnect();
	}
	UE_LOG(LogTemp, Log, TEXT("Trying to connect to url: %s"), *NewUrl);
	
	const FString ServerProtocol = TEXT("ws");
	Socket = FWebSocketsModule::Get().CreateWebSocket(NewUrl, ServerProtocol);
	BindEvents();
	Socket->Connect();

	bDesiredConnectState = true;
}

bool FRayConnector::SendMessage(const FString& Message) const
{
	if(Socket && Socket.IsValid() && Socket->IsConnected())
	{
		Socket->Send(Message);
		return true;
	}

	return false;
}

bool FRayConnector::SendData(const TArray<uint8>& Data, bool bIsBinary) const
{
	if(Socket && Socket.IsValid() && Socket->IsConnected())
	{
		Socket->Send(Data.GetData(), Data.Num() * sizeof(uint8), bIsBinary);
		return true;
	}

	return false;
}

void FRayConnector::Disconnect()
{
	bDesiredConnectState = false;
	
	UnbindEvents();
	if(Socket)
	{
		Socket->Close();
		Socket = nullptr;
	}
}

void FRayConnector::RegisterConsoleCommand(FString CommandName)
{
	RegisteredCommands.AddUnique(CommandName);
}

void FRayConnector::UnregisterConsoleCommand(FString CommandName)
{
	RegisteredCommands.Remove(CommandName);
}

bool FRayConnector::IsCommandRegistered(FString Command) const
{
	for(auto CommandHead : RegisteredCommands)
	{
		if(Command.StartsWith(CommandHead))
		{
			return true;
		}
	}

	return false;
}

TSharedPtr<FRayInputDevice> FRayConnector::GetInputDevicePtr() const
{
	return InputDevice;
}

void FRayConnector::SetInputDevice(TSharedPtr<FRayInputDevice> NewInputDevice)
{
	InputDevice = NewInputDevice;
}

bool FRayConnector::IsRayStreamingComponentRegistered(URayStreamingComponent* RayComp) const
{
	return StreamingComponents.Contains(RayComp);
}

void FRayConnector::RegisterRayStreamingComponent(URayStreamingComponent* RayComp)
{
	StreamingComponents.AddUnique(RayComp);
}

void FRayConnector::UnregisterRayStreamingComponent(URayStreamingComponent* RayComp)
{
	StreamingComponents.Remove(RayComp);
}

TArray<URayStreamingComponent*> FRayConnector::GetRegisteredStreamingComponent() const
{
	return StreamingComponents;
}

bool FRayConnector::ShouldReconnect() const
{
	return bDesiredConnectState && !IsConnected();
	
}

void FRayConnector::RunConsoleCommand(const FString& CommandMessage)
{
	FString Left, Right;
	const bool bSplit = CommandMessage.Split(":", &Left, &Right);
	if(bSplit)
	{
		Right.TrimStartAndEndInline();
		if(IsCommandRegistered(Right))
		{
			
			UKismetSystemLibrary::ExecuteConsoleCommand(GWorld, Right);
		}
	}else
	{
		UE_LOG(LogTemp, Warning, TEXT("Unable to convert console command: %s"), *CommandMessage);
	}
}
