// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/Classes/Engine/EngineBaseTypes.h"
#include "InputCoreTypes.h"
#include "RayUtils.generated.h"


UCLASS()

class RAYSTREAMINGFORUE_API URayUtils : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category="RayUtils")
	static EInputEvent MakeInputEvent(const FString& EventStr);
	UFUNCTION(BlueprintPure, Category="RayUtils")
	static ETouchType::Type MakeTouchType(const FString& TypeStr);
	
	UFUNCTION(BlueprintPure, Category="RayUtils")
	static FVector2D GetWindowPosition();
	UFUNCTION(BlueprintPure, Category="RayUtils")
	static FVector2D GetPositionInScreen();
	UFUNCTION(BlueprintPure, Category="RayUtils")
	static FVector2D GetSizeInScreen();

	UFUNCTION(BlueprintPure, Category="RayUtils")
	static FVector2D GetClientSizeInScreen();

	UFUNCTION(BlueprintPure, Category="RayUtils")
	static void GetClientRectInScreen(float& Left, float& Right, float& Top, float& Bottom);
	UFUNCTION(BlueprintPure, Category="RayUtils")
	static FVector2D GetViewportSize();
};
