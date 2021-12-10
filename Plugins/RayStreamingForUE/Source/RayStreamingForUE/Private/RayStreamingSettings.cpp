// Copyright Epic Games, Inc. All Rights Reserved.

#include "RayStreamingSettings.h"
//#include "PixelStreamingPrivate.h"

URayStreamingSettings::URayStreamingSettings(const FObjectInitializer& ObjectInitlaizer)
	: Super(ObjectInitlaizer)
{

}

FName URayStreamingSettings::GetCategoryName() const
{
	return TEXT("Plugins");
}

#if WITH_EDITOR
FText URayStreamingSettings::GetSectionText() const
{
	return NSLOCTEXT("RayStreamingPlugin", "RayStreamingSettingsSection", "RayStreaming");
}
#endif

#if WITH_EDITOR
void URayStreamingSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif


