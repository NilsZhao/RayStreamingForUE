#pragma once

#include "IInputDevice.h"
#include "Containers/Queue.h"

class FRayStreamingForUEModule;


class FRayInputDevice : public IInputDevice
{
public:
	
	
	FRayInputDevice(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler);

	
	virtual void Tick(float DeltaTime) override;

	
	virtual void SendControllerEvents() override;

	
	virtual void SetMessageHandler(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler) override;

	
	virtual bool Exec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar) override;

	
	virtual void SetChannelValue(int32 ControllerId, FForceFeedbackChannelType ChannelType, float Value) override;

	virtual void SetChannelValues(int32 ControllerId, const FForceFeedbackValues &values) override;

	void OnMessage(const FString& Message);

	
	void ParseEventMessage(const FString& InputMessage);

private:

	
	TSharedPtr<class GenericApplication> Application;

	
	TSharedRef<FGenericApplicationMessageHandler> MessageHandler;

	
	TQueue<FString> EventsQueue;


	
	FVector2D FocusedPos;

	
	static const FVector2D UnfocusedPos;

	
	FRayStreamingForUEModule* RayStreamingModule;
};