// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"

#include "RayStreamingSettings.generated.h"

UCLASS(config = RayStreaming, defaultconfig, meta = (DisplayName = "RayStreaming"))
class RAYSTREAMINGFORUE_API URayStreamingSettings : public UDeveloperSettings
{
	GENERATED_UCLASS_BODY()

public:
	
	UPROPERTY(Config, EditAnywhere, Category="RayStreaming")
	bool bAutoConnect = true;

	
	UPROPERTY(Config, EditAnywhere, Category="RayStreaming")
	bool bEnableLocalTest = false;

	
	UPROPERTY(Config, EditAnywhere, Category="RayStreaming")
	FString TestUrl = "ws://127.0.0.1:10000/";
	
	
	UPROPERTY(Config, EditAnywhere, Category="RayStreaming")
	bool bEnableAutoReconnect = true;
	
	
	UPROPERTY(Config, EditAnywhere, Category="RayStreaming")
	float ReconnectInterval = 1.f;
	
	
	UPROPERTY(Config, EditAnywhere, Category="RayStreaming")
	bool bUseRayStreamingInput = false;

	
	UPROPERTY(Config, EditAnywhere, Category="RayStreaming")
	bool bEnableWebCommand = true;

	
	UPROPERTY(Config, EditAnywhere, Category="RayStreaming", meta=(EditCondition = "bEnableWebCommand"))
	TArray<FString> PermittedConsoleCommands = {"r.setRes"};
	
	
	virtual FName GetCategoryName() const override;
#if WITH_EDITOR
	virtual FText GetSectionText() const override;
#endif
	

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
};