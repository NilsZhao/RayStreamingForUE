#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RayTypes.generated.h"

UENUM(BlueprintType)
enum class ERayTouchType : uint8 {
	TouchStart,
	TouchMove,
	TouchEnd,
};


USTRUCT(BlueprintType)
struct FRayKeyInput
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	uint8 KeyCode;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	bool bKeyDown;
	
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


USTRUCT(BlueprintType)
struct FRayMouseMoveInput
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	float PositionX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	float PositionY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	float DeltaX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	float DeltaY;
};


USTRUCT(BlueprintType)
struct FRayMouseKeyInput
{
	
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	uint8 KeyCode;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	float PositionX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	float PositionY;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	bool bKeyDown;
};


USTRUCT(BlueprintType)
struct FRayMouseWheelInput
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	float Delta;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	float PosX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	float PosY;
};


USTRUCT(BlueprintType)
struct FRayTouchInput
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	uint8 TouchType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	uint8 TouchIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	float PosX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	float PosY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Input")
	uint8 Force;
};


UCLASS()
class RAYSTREAMINGFORUE_API URayTypes : public UObject
{
	GENERATED_BODY()

	UFUNCTION(BlueprintPure,Category="RayStreaming")
	static uint8 TouchTypeToCode(ERayTouchType Type);

	UFUNCTION(BlueprintPure,Category="RayStreaming")
	static ERayTouchType TouchCodeToType(uint8 TouchCode);
};

inline uint8 URayTypes::TouchTypeToCode(ERayTouchType Type)
{
	return (uint8) Type;
}

inline ERayTouchType URayTypes::TouchCodeToType(uint8 TouchCode)
{
	return (ERayTouchType) TouchCode;
}
