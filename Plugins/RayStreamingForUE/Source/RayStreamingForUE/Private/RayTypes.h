// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RayTypes.generated.h"

//键盘按键输入.
USTRUCT(BlueprintType)
struct FRayKeyInput
{
	GENERATED_BODY()
public:
	//按键对应的统一编码; 详情请参照: https://www.cambiaresearch.com/articles/15/javascript-char-codes-key-codes
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	uint8 KeyCode;
	//是否为按下, 否则为弹起;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	bool bKeyDown;
	//是否重复;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	bool bRepeat;
};
USTRUCT(BlueprintType)
struct FRayCharInput
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	FString Char;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	bool bRepeat;
};
//鼠标移动输入;
USTRUCT(BlueprintType)
struct FRayMouseMoveInput
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	int32 PositionX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	int32 PositionY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	int32 DeltaX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	int32 DeltaY;
};
//鼠标按键输入;
USTRUCT(BlueprintType)
struct FRayMouseKeyInput
{
	/*Left = 0,	Middle=1,	Right=2,	Thumb01=3,	Thumb02=4,	Invalid=5,
	*/
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	uint8 KeyCode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	int32 PositionX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	int32 PositionY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	bool bKeyDown;
};
//鼠标滚轮输入.
USTRUCT(BlueprintType)
struct FRayMouseWheelInput
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	int32 Delta;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	int32 PosX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	int32 PosY;
};
//触摸输入.
USTRUCT(BlueprintType)
struct FRayTouchInput
{
	GENERATED_BODY()
	//触摸输入类型, TouchStart=0, TouchMove=1,TouchEnd=2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	uint8 TouchType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	uint8 TouchIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	int32 PosX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	int32 PosY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	uint8 Force;
};
/**
 * 
 */
UCLASS()
class RAYSTREAMINGFORUE_API URayTypes : public UObject
{
	GENERATED_BODY()
};
