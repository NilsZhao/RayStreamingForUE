// Fill out your copyright notice in the Description page of Project Settings.


#include "RayStreamingComponent.h"

#include "RayConnector.h"
#include "RayInputDevice.h"
#include "RayStreamingForUEModule.h"
#include "RayStreamingSettings.h"


// Sets default values for this component's properties
URayStreamingComponent::URayStreamingComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	const URayStreamingSettings* RayStreamingSettings = GetDefault<URayStreamingSettings>();
	if(RayStreamingSettings)
	{
		bReconnectOnFailed = RayStreamingSettings->bEnableAutoReconnect;
	}
}

URayStreamingComponent::~URayStreamingComponent()
{
	if(RayConnector)
		RayConnector.Get()->UnregisterRayStreamingComponent(this);
}


// Called when the game starts
void URayStreamingComponent::BeginPlay()
{
	Super::BeginPlay();

	FRayStreamingForUEModule RayModule = FModuleManager::Get().GetModuleChecked<FRayStreamingForUEModule>("RayStreamingForUE");
	RayConnector = RayModule.GetRayConnectorPtr();
	RegisterRayStreamingComponent(this);
}


// Called every frame
void URayStreamingComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                           FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void URayStreamingComponent::ConnectTo3dcat()
{
	RayConnector.Get()->ConnectTo3dcat();
}

void URayStreamingComponent::ConnectToUrl(FString NewUrl)
{
	RayConnector.Get()->ConnectToUrl(NewUrl);
}

bool URayStreamingComponent::SendMessage(const FString& Message)
{
	return RayConnector.Get()->SendMessage(Message);
}

bool URayStreamingComponent::SendData(const TArray<uint8>& Data, bool bIsBinary)
{
	return RayConnector.Get()->SendData(Data, bIsBinary);
}

void URayStreamingComponent::Disconnect()
{
	RayConnector.Get()->Disconnect();
}

void URayStreamingComponent::SimulateInputMessage(const FString& Message)
{
	RayConnector.Get()->GetInputDevicePtr().Get()->OnMessage(Message);
}

void URayStreamingComponent::RegisterConsoleCommand(const FString& CommandName)
{
	RayConnector.Get()->RegisterConsoleCommand(CommandName);
}

void URayStreamingComponent::UnregisterConsoleCommand(const FString& CommandName)
{
	RayConnector.Get()->UnregisterConsoleCommand(CommandName);
}

bool URayStreamingComponent::IsRayStreamingComponentRegistered(URayStreamingComponent* RayComp) const
{
	return RayConnector.Get()->IsRayStreamingComponentRegistered(RayComp);
}

void URayStreamingComponent::RegisterRayStreamingComponent(URayStreamingComponent* RayComp)
{
	RayConnector.Get()->RegisterRayStreamingComponent(RayComp);
}

void URayStreamingComponent::UnregisterRayStreamingComponent(URayStreamingComponent* RayComp)
{
	RayConnector.Get()->UnregisterRayStreamingComponent(RayComp);
}

TArray<URayStreamingComponent*> URayStreamingComponent::GetRegisteredStreamingComponent() const
{
	return RayConnector.Get()->GetRegisteredStreamingComponent();
}

