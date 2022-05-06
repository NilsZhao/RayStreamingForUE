// Fill out your copyright notice in the Description page of Project Settings.


#include "RayUtils.h"
#include "Engine.h"

EInputEvent URayUtils::MakeInputEvent(const FString& EventStr)
{
	if(EventStr == "IE_Pressed") return EInputEvent::IE_Pressed;
	if(EventStr == "IE_Released") return EInputEvent::IE_Released;
	if(EventStr == "IE_Repeat") return EInputEvent::IE_Repeat;
	if(EventStr == "IE_DoubleClick") return EInputEvent::IE_DoubleClick;
	if(EventStr == "IE_Axis") return EInputEvent::IE_Axis;

	return EInputEvent::IE_MAX;
}

ETouchType::Type URayUtils::MakeTouchType(const FString& TypeStr)
{
	if(TypeStr == "Began") return ETouchType::Type::Began;
	if(TypeStr == "Moved") return ETouchType::Type::Moved;
	if(TypeStr == "Stationary") return ETouchType::Type::Stationary;
	if(TypeStr == "ForceChanged") return ETouchType::Type::ForceChanged;
	if(TypeStr == "FirstMove") return ETouchType::Type::FirstMove;
	if(TypeStr == "Ended") return ETouchType::Type::Ended;

	return ETouchType::Type::NumTypes;
}

FVector2D URayUtils::GetWindowPosition()
{
	if(GEngine &&  GEngine->GameViewport && GEngine->GameViewport->GetWindow())
		return GEngine->GameViewport->GetWindow()->GetPositionInScreen();
	return {};
}

FVector2D URayUtils::GetPositionInScreen()
{
	if(GEngine &&  GEngine->GameViewport && GEngine->GameViewport->GetWindow())
		return GEngine->GameViewport->GetWindow()->GetPositionInScreen();
	return {};
}

FVector2D URayUtils::GetSizeInScreen()
{
	if(GEngine &&  GEngine->GameViewport && GEngine->GameViewport->GetWindow())
		return GEngine->GameViewport->GetWindow()->GetSizeInScreen();
	return {};
}

FVector2D URayUtils::GetClientSizeInScreen()
{
	if(GEngine &&  GEngine->GameViewport && GEngine->GameViewport->GetWindow())
		return GEngine->GameViewport->GetWindow()->GetClientSizeInScreen();
	return {};
}

void URayUtils::GetClientRectInScreen(float& Left, float& Right, float& Top, float& Bottom)
{
	if(GEngine &&  GEngine->GameViewport && GEngine->GameViewport->GetWindow())
	{
		FSlateRect Rect = GEngine->GameViewport->GetWindow()->GetClientRectInScreen();
		Left = Rect.Left;
		Right = Rect.Right;
		Top = Rect.Top;
		Bottom = Rect.Bottom;
	}
}

FVector2D URayUtils::GetViewportSize()
{
	if(GEngine && GEngine->GameViewport)
	{
		FVector2D Size;
		GEngine->GameViewport->GetViewportSize(Size);
		return Size;
	}
	return {};
}

