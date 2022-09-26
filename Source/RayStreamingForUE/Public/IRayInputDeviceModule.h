// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IInputDeviceModule.h"


class IRayInputDeviceModule : public IInputDeviceModule
{
 
public:
	static inline IInputDeviceModule& Get()
	{
		return FModuleManager::LoadModuleChecked<IInputDeviceModule>("RayStreamingForUE");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("RayStreamingForUE");
	}
	
	virtual class FRayInputDevice& GetInputDevice() = 0;
	//virtual void SendCommand(const FString& Descriptor) = 0;

	virtual bool IsPlayerInitialized() const = 0;
};
