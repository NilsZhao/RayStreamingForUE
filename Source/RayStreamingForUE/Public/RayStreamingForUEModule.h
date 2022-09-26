#pragma once
#include "IRayInputDeviceModule.h"
#include "Tickable.h"
class FRayConnector;

//class FTickableGameObject;
class FRayStreamingForUEModule : public IRayInputDeviceModule, public FTickableGameObject
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual TSharedPtr<IInputDevice> CreateInputDevice(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler) override;
	virtual void Tick(float DeltaTime) override;
	virtual FRayInputDevice& GetInputDevice() override;
	TSharedPtr<FRayInputDevice> GetInputDevicePtr() const;

	virtual bool IsTickableWhenPaused() const override;
	virtual bool IsTickableInEditor() const override;
	virtual TStatId GetStatId() const override;
	
	virtual bool IsPlayerInitialized() const override
	{
		return bPlayerInitialized;
	}

	TSharedPtr<FRayConnector> GetRayConnectorPtr() const;
	
private:
	TSharedPtr<FRayInputDevice> InputDevice;
	TSharedPtr<FRayConnector> RayConnector;
	bool bPlayerInitialized = false;

};
