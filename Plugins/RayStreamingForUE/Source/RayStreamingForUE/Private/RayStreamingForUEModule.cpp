﻿#include "RayStreamingForUEModule.h"
#include "InputDevice.h"
#include "CoreMinimal.h"
#include "Windows/WindowsHWrapper.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "RayConnector.h"
#include "RayInputDevice.h"
#include "RayStreamingSettings.h"

void FRayStreamingForUEModule::StartupModule()
{
	IRayInputDeviceModule::StartupModule();

	RayConnector = MakeShareable(new FRayConnector());
	RayConnector.Get()->StartReconnectTask();
	
	const URayStreamingSettings* RayStreamingSettings = GetDefault<URayStreamingSettings>();
	if(RayStreamingSettings)
	{
		if(RayStreamingSettings->bAutoConnect)
		{
			RayConnector.Get()->AutoConnect();
		}
	}
	// FWorldDelegates::OnPostWorldInitialization.AddLambda([&](UWorld* TheWorld, const UWorld::InitializationValues IVS)
	// {
	// });
}

void FRayStreamingForUEModule::ShutdownModule()
{
	IRayInputDeviceModule::ShutdownModule();

	if(RayConnector)
	{
		delete RayConnector.Get();
		RayConnector = nullptr;
	}
}

TSharedPtr<IInputDevice> FRayStreamingForUEModule::CreateInputDevice(const TSharedRef<FGenericApplicationMessageHandler>& InMessageHandler)
{
 	InputDevice = MakeShareable(new FRayInputDevice(InMessageHandler));
	return InputDevice;
}

void FRayStreamingForUEModule::Tick(float DeltaTime)
{
	
}

FRayInputDevice& FRayStreamingForUEModule::GetInputDevice()
{
	return *InputDevice;
}

TSharedPtr<FRayInputDevice> FRayStreamingForUEModule::GetInputDevicePtr() const
{
	return InputDevice;
}

bool FRayStreamingForUEModule::IsTickableWhenPaused() const
{
	return true;
}

bool FRayStreamingForUEModule::IsTickableInEditor() const
{
	return true;
}

TStatId FRayStreamingForUEModule::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(FRayStreamingForUEModule, STATGROUP_Tickables);
}

TSharedPtr<FRayConnector> FRayStreamingForUEModule::GetRayConnectorPtr() const
{
	return RayConnector;
}

IMPLEMENT_MODULE(FRayStreamingForUEModule, RayStreamingForUE)
