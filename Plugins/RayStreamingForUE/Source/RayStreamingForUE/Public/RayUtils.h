// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RayUtils.generated.h"

/**
 * 
 */
UCLASS()
class RAYSTREAMINGFORUE_API URayUtils : public UObject
{
	GENERATED_BODY()


public:
	UFUNCTION(BlueprintPure, Category="RayUtils")
	static EInputEvent MakeInputEvent(const FString& EventStr);
	UFUNCTION(BlueprintPure, Category="RayUtils")
	static ETouchType::Type MakeTouchType(const FString& TypeStr);
};
