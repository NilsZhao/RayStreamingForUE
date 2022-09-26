// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RayStreamingComponent.generated.h"


class URayStreamingSettings;
class FRayConnector;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnConnectedSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConnectionErrorSignature, const FString&, Error);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnClosedSignature, int32, StatusCode, const FString&, Reason, bool, bWasClean);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMessageSignature, const FString&, Message);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRawMessageSignature, TArray<uint8>, Data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMessageSentSignature, const FString&, MessageString);


UCLASS(BlueprintType, Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class RAYSTREAMINGFORUE_API URayStreamingComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	
	URayStreamingComponent();

	~URayStreamingComponent();

protected:
	
	virtual void BeginPlay() override;

public:
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

public:
	
	UPROPERTY( BlueprintAssignable, Category="RayStreaming") FOnConnectedSignature OnConnected;
	UPROPERTY( BlueprintAssignable, Category="RayStreaming") FOnConnectionErrorSignature OnConnectionError;
	UPROPERTY( BlueprintAssignable, Category="RayStreaming") FOnClosedSignature OnClosed;
	UPROPERTY( BlueprintAssignable, Category="RayStreaming") FOnMessageSignature OnMessage;
	UPROPERTY( BlueprintAssignable, Category="RayStreaming") FOnRawMessageSignature OnRawMessage;
	UPROPERTY( BlueprintAssignable, Category="RayStreaming") FOnMessageSentSignature OnMessageSent;

	
	UFUNCTION(BlueprintCallable, Category="RayStreaming")
	void ConnectTo3dcat();
	
	
	UFUNCTION(BlueprintCallable, Category="RayStreaming")
	void ConnectToUrl(FString NewUrl);

	
	UFUNCTION(BlueprintCallable, Category="RayStreaming")
	bool SendMessage(const FString& Message);

	
	UFUNCTION(BlueprintCallable, Category="RayStreaming")
	bool SendData(const TArray<uint8>& Data, bool bIsBinary = false);

	
	UFUNCTION(BlueprintCallable, Category="RayStreaming")
	void Disconnect();

	
	UFUNCTION(BlueprintCallable, Category="RayStreaming")
	void SimulateInputMessage(const FString& Message);

	
	UFUNCTION(BlueprintCallable, Category="RayStreaming")
	void RegisterConsoleCommand(const FString& CommandName);

	
	UFUNCTION(BlueprintCallable, Category="RayStreaming")
	void UnregisterConsoleCommand(const FString& CommandName);

	UFUNCTION(BlueprintPure, Category="RayStreaming|Connector")
	bool IsRayStreamingComponentRegistered(URayStreamingComponent* RayComp) const;
	UFUNCTION(BlueprintCallable, Category="RayStreaming|Connector")
	void RegisterRayStreamingComponent(URayStreamingComponent* RayComp);
	UFUNCTION(BlueprintCallable, Category="RayStreaming|Connector")
	void UnregisterRayStreamingComponent(URayStreamingComponent* RayComp);
	UFUNCTION(BlueprintPure, Category="RayStreaming|Connector")
	TArray<URayStreamingComponent*> GetRegisteredStreamingComponent() const;

	
private:
	bool bReconnectOnFailed = true;
	float ReconnectInterval = 1.f;

	TSharedPtr<FRayConnector> RayConnector;
	
	FTimerHandle ReconnectTimerHandle;
	FTimerDynamicDelegate ReconnectDelegate;

	FDelegateHandle OnConnectHandle;
	FDelegateHandle OnConnectErrorHandle;
	FDelegateHandle OnMessageHandle;
	FDelegateHandle OnRawMessageHandle;
	FDelegateHandle OnMessageSentHandle;
	FDelegateHandle OnCloseHandle;

};
