#pragma once
#include "CoreMinimal.h"

class FReconnectTask;
class URayStreamer;
class FRayInputDevice;
class IWebSocket;
class URayStreamingComponent;

class FRayConnector
{
public:
	FRayConnector();
	~FRayConnector();
	
	void BindEvents();
	void UnbindEvents() const;

	void BeginPlay();

	void Tick(float DeltaTime);

	
	void AutoConnect();
	

	void ConnectTo3dcat();


	bool IsConnected() const;
	

	void ConnectToUrl(FString NewUrl);


	bool SendMessage(const FString& Message) const;


	bool SendData(const TArray<uint8>& Data, bool bIsBinary = false) const;


	void Disconnect();
	
	
	void RegisterConsoleCommand(FString CommandName);

	
	void UnregisterConsoleCommand(FString CommandName);

	
	bool IsCommandRegistered(FString Command) const;

	TSharedPtr<FRayInputDevice> GetInputDevicePtr() const;
	
	void SetInputDevice(TSharedPtr<FRayInputDevice> NewInputDevice);

	bool IsRayStreamingComponentRegistered(URayStreamingComponent* RayComp) const;
	void RegisterRayStreamingComponent(URayStreamingComponent* RayComp);
	void UnregisterRayStreamingComponent(URayStreamingComponent* RayComp);
	TArray<URayStreamingComponent*> GetRegisteredStreamingComponent() const;

	bool ShouldReconnect() const;

private:
	TSharedPtr<FRayInputDevice> InputDevice = nullptr;
	TSharedPtr<IWebSocket> Socket = nullptr;

	TArray<URayStreamingComponent*> StreamingComponents;
	
	FDelegateHandle OnConnectHandle;
	FDelegateHandle OnConnectErrorHandle;
	FDelegateHandle OnMessageHandle;
	FDelegateHandle OnRawMessageHandle;
	FDelegateHandle OnMessageSentHandle;
	FDelegateHandle OnCloseHandle;

	
	bool bEnableAutoReconnect = true;
	
	float ReconnectInterval = 1;
	
	float ReconnectTimer = 0;
	
	bool bEnableLocalTest = true;
	
	
	bool bDesiredConnectState = false;

	//FAsyncTask<FReconnectTask>* ReconnectTask = nullptr;

	FCriticalSection Mutex;

	TArray<FString> RegisteredCommands;

	void RunConsoleCommand(const FString& CommandMessage);
};

