#pragma once

#include "IInputDevice.h"
#include "Containers/Queue.h"

class FRayStreamingForUEModule;


class FRayInputDevice : public IInputDevice
{
public:
	
	/**
	 * RayInputDevice会将接受到的输入事件转发到MessageHandler中进行最终处理.
	 * @param InMessageHandler - 指定的消息处理器
	 */
	FRayInputDevice(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler);

	/** Tick the interface (e.g. check for new controllers) */
	virtual void Tick(float DeltaTime) override;

	/** Poll for controller state and send events if needed */
	virtual void SendControllerEvents() override;

	/** Set which MessageHandler will get the events from SendControllerEvents. */
	virtual void SetMessageHandler(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler) override;

	/** Exec handler to allow console commands to be passed through for debugging */
	virtual bool Exec(UWorld* InWorld, const TCHAR* Cmd, FOutputDevice& Ar) override;

	/**
	* IForceFeedbackSystem pass through functions
	*/
	virtual void SetChannelValue(int32 ControllerId, FForceFeedbackChannelType ChannelType, float Value) override;

	virtual void SetChannelValues(int32 ControllerId, const FForceFeedbackValues &values) override;

	void OnMessage(const FString& Message);

	/**
	 *将WebInput消息转化为一个输入事件, WebInput的通用格式应该是:
	 *"RayInput_XXX":{DataBody}
	 */
	void ParseEventMessage(const FString& InputMessage);

private:

	/**
	 * Touch only. If the user touches the UI and focuses an editable widget
	 * then we need to tell the browser to allow it to display an on-screen
	 * keyboard.
	 */
	/*void FindFocusedWidget();*/
	
	/**
	 * A special wrapper over the GenericApplication layer which allows us to
	 * override certain behavior.
	 */
	TSharedPtr<class GenericApplication> Application;

	/** Reference to the message handler which events should be passed to. */
	TSharedRef<FGenericApplicationMessageHandler> MessageHandler;

	/** The queue of events which are awaiting processing. */
	TQueue<FString> EventsQueue;


	/**
	 * Touch only. Location of the focused UI widget. If no UI widget is focused
	 * then this has the UnfocusedPos value.
	 */
	FVector2D FocusedPos;

	/**
	 * Touch only. A special position which indicates that no UI widget is
	 * focused.
	 */
	static const FVector2D UnfocusedPos;

	/** For convenience we keep a reference to the RayStreaming plugin. */
	FRayStreamingForUEModule* RayStreamingModule;
};