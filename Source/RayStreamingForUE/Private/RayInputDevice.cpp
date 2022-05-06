#include "RayInputDevice.h"

#include "JavaScriptKeyCodes.inl"
#include "JsonObjectConverter.h"
#include "ProtocolDefs.h"
#include "Engine/Engine.h"
#include "Engine/GameViewportClient.h"
#include "Framework/Application/SlateApplication.h"
#include "Slate/SceneViewport.h"
#include "Widgets/SWindow.h"
#include "RayStreamingForUEModule.h"
#include "RayTypes.h"


const FVector2D FRayInputDevice::UnfocusedPos(-1.0f, -1.0f);

FRayInputDevice::FRayInputDevice(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler)
	: Application(FSlateApplication::Get().GetPlatformApplication()), MessageHandler(InMessageHandler),
	  FocusedPos(UnfocusedPos),
	  RayStreamingModule(FModuleManager::Get().GetModulePtr<FRayStreamingForUEModule>("RayStreamingForUE"))
{
}

// XY positions are the ratio (0.0..1.0) along a viewport axis, quantized
// into an uint16 (0..65536). This allows the browser viewport and player
// viewport to have a different size.
/*
void QuantizeAndNormalize(const FVector2D& InPos, uint16& OutX, uint16& OutY)
{
	FIntPoint SizeXY = GEngine->GameViewport->Viewport->GetSizeXY();
	OutX = InPos.X / SizeXY.X * 65536.0f;
	OutY = InPos.Y / SizeXY.Y * 65536.0f;
}
*/

void FRayInputDevice::Tick(float DeltaTime)
{
	//每帧都会清理一次队列中累计的输入消息;
	FString Message;
	while (EventsQueue.Dequeue(Message))
	{
		ParseEventMessage(Message);
	}
}

void FRayInputDevice::SendControllerEvents()
{
}

void FRayInputDevice::SetMessageHandler(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler)
{
	MessageHandler = InMessageHandler;
}

bool FRayInputDevice::Exec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar)
{
	return true;
}

void FRayInputDevice::SetChannelValue(int32 ControllerId, FForceFeedbackChannelType ChannelType, float Value)
{
}

void FRayInputDevice::SetChannelValues(int32 ControllerId, const FForceFeedbackValues& values)
{
}

void FRayInputDevice::OnMessage(const FString& Message)
{
	EventsQueue.Enqueue(Message);
}

void FRayInputDevice::ParseEventMessage(const FString& InputMessage)
{
	const FString Head = InputMessage.Left(InputMessage.Find(":"));
	const FString Body = InputMessage.Right(InputMessage.Len() - InputMessage.Find("{"));
	if (Head == "RayInput_Key")
	{
		FRayKeyInput KeyInput;
		FJsonObjectConverter::JsonObjectStringToUStruct(Body, &KeyInput, 0, 0);

		const FKey* AgnosticKey = JavaScriptKeyCodeToFKey[KeyInput.KeyCode];
		const uint32* KeyCodePtr;
		const uint32* CharacterCodePtr;
		FInputKeyManager::Get().GetCodesFromKey(*AgnosticKey, KeyCodePtr, CharacterCodePtr);
		//uint32 KeyCode = KeyCodePtr ? *KeyCodePtr : 0;
		const uint32 CharacterCode = CharacterCodePtr ? *CharacterCodePtr : 0;

		if (KeyInput.bKeyDown)
			MessageHandler->OnKeyDown(KeyInput.KeyCode, CharacterCode, KeyInput.bRepeat);
		else
			MessageHandler->OnKeyUp(KeyInput.KeyCode, CharacterCode, KeyInput.bRepeat);
	}

	else if (Head == "RayInput_Char")
	{
		FRayCharInput CharInput;
		FJsonObjectConverter::JsonObjectStringToUStruct(Body, &CharInput, 0, 0);
		TArray<TCHAR> CharArray = CharInput.Char.GetCharArray();
		if(CharArray.Num() > 0)
			MessageHandler->OnKeyChar(CharArray[0], CharInput.bRepeat);
		else
			UE_LOG(LogTemp, Warning, TEXT("Char input is ignored, char is null, message: %s"), *InputMessage);
	}

	else if (Head == "RayInput_MouseEnter")
	{
		//FSlateApplication::Get().OverridePlatformApplication(RayStreamerApplicationWrapper);
		FSlateApplication::Get().OnCursorSet();

		// Make sure the viewport is active.
		FSlateApplication::Get().ProcessApplicationActivationEvent(true);
	}

	else if (Head == "RayInput_MouseLeave")
	{
		//FSlateApplication::Get().OverridePlatformApplication(RayStreamerApplicationWrapper->WrappedApplication);
	}

	else if (Head == "RayInput_MouseMove")
	{
		FRayMouseMoveInput MouseMoveInput;
		const bool bParseResult = FJsonObjectConverter::JsonObjectStringToUStruct(Body, &MouseMoveInput, 0, 0);
		if(bParseResult)
		{
			//RayStreamerApplicationWrapper->Cursor->SetPosition(0,0);
		//	RayStreamerApplicationWrapper->Cursor->SetPosition(MouseMoveInput.PositionX+MouseMoveInput.DeltaX, MouseMoveInput.PositionY + MouseMoveInput.DeltaY);
			//TODO 刚改完这里!!!
			Application->Cursor->SetPosition(MouseMoveInput.PositionX+MouseMoveInput.PositionY, MouseMoveInput.PositionY + MouseMoveInput.DeltaY);
			MessageHandler->OnRawMouseMove(MouseMoveInput.DeltaX, MouseMoveInput.DeltaY);
		}
	}

	else if (Head == "RayInput_MouseKey")
	{
		if (!FSlateApplication::Get().IsActive())
		{
			FSlateApplication::Get().ProcessApplicationActivationEvent(true);
		}

		FRayMouseKeyInput MouseKeyInput;
		FJsonObjectConverter::JsonObjectStringToUStruct(Body, &MouseKeyInput, 0, 0);
		Application->Cursor->SetPosition(MouseKeyInput.PositionX, MouseKeyInput.PositionY);
		if (MouseKeyInput.bKeyDown)
			MessageHandler->OnMouseDown(GEngine->GameViewport->GetWindow()->GetNativeWindow(), StaticCast<EMouseButtons::Type>(MouseKeyInput.KeyCode), FVector2D(MouseKeyInput.PositionX, MouseKeyInput.PositionY));
		else
			MessageHandler->OnMouseUp(StaticCast<EMouseButtons::Type>(MouseKeyInput.KeyCode));
	}

	else if (Head == "RayInput_MouseWheel")
	{
		FRayMouseWheelInput WheelInput;
		FJsonObjectConverter::JsonObjectStringToUStruct(Body, &WheelInput, 0, 0);
		const float SpinFactor = 1 / 120.0f;
		FVector2D CursorPos = GEngine->GameViewport->GetWindow()->GetPositionInScreen() + FVector2D(
			WheelInput.PosX, WheelInput.PosY);
		MessageHandler->OnMouseWheel(WheelInput.Delta * SpinFactor, CursorPos);
	}

	else if (Head == "RayInput_Touch")
	{
		FRayTouchInput TouchInput;
		FJsonObjectConverter::JsonObjectStringToUStruct(Body, &TouchInput, 0, 0);
		if(GEngine &&  GEngine->GameViewport && GEngine->GameViewport->GetWindow())
		{
			FVector2D CursorPos = GEngine->GameViewport->GetWindow()->GetPositionInScreen() + FVector2D(
				TouchInput.PosX, TouchInput.PosY);
			if (TouchInput.TouchType == 0)
				MessageHandler->OnTouchStarted(GEngine->GameViewport->GetWindow()->GetNativeWindow(), CursorPos,
				                               TouchInput.Force / 255.0f, TouchInput.TouchIndex, 0);
			else if (TouchInput.TouchType == 1)
				MessageHandler->OnTouchMoved(CursorPos, TouchInput.Force / 255.0f, TouchInput.TouchIndex, 0);
			else if (TouchInput.TouchType == 2)
				MessageHandler->OnTouchEnded(CursorPos, TouchInput.TouchIndex, 0);
		}
	}

	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Unable to parse input message to input event: %s"), *InputMessage);
	}
}