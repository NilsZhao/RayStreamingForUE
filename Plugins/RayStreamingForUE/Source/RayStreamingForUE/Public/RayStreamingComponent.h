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

/**
 *
 */
UCLASS(BlueprintType, Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class RAYSTREAMINGFORUE_API URayStreamingComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	URayStreamingComponent();

	~URayStreamingComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

public:
	//// Events
	UPROPERTY( BlueprintAssignable, Category="RayStreaming") FOnConnectedSignature OnConnected;
	UPROPERTY( BlueprintAssignable, Category="RayStreaming") FOnConnectionErrorSignature OnConnectionError;
	UPROPERTY( BlueprintAssignable, Category="RayStreaming") FOnClosedSignature OnClosed;
	UPROPERTY( BlueprintAssignable, Category="RayStreaming") FOnMessageSignature OnMessage;
	UPROPERTY( BlueprintAssignable, Category="RayStreaming") FOnRawMessageSignature OnRawMessage;
	UPROPERTY( BlueprintAssignable, Category="RayStreaming") FOnMessageSentSignature OnMessageSent;

	/**
	 *连接到3dcat, 端口会通过命令行获取.
	 */
	UFUNCTION(BlueprintCallable, Category="RayStreaming")
	void ConnectTo3dcat();
	
	/**
	 * 根据指定的URL建立一个新的WebSocket连接, 原有的链接将会被自动关闭.
	 * @param NewUrl 需要进行连接的url
	 */
	UFUNCTION(BlueprintCallable, Category="RayStreaming")
	void ConnectToUrl(FString NewUrl);

	/**
	 *发送一个字符串到服务端.
	 */
	UFUNCTION(BlueprintCallable, Category="RayStreaming")
	bool SendMessage(const FString& Message);

	/**
	 *发送一个二进制数组到服务端.
	 */
	UFUNCTION(BlueprintCallable, Category="RayStreaming")
	bool SendData(const TArray<uint8>& Data, bool bIsBinary = false);

	/**
	 *关闭当前连接.
	 */
	UFUNCTION(BlueprintCallable, Category="RayStreaming")
	void Disconnect();

	/**
	 *模拟接受一次WebInput消息.
	 */
	UFUNCTION(BlueprintCallable, Category="RayStreaming")
	void SimulateInputMessage(const FString& Message);

	/**
	 *注册一个控制台命令, 允许web端通过raystreaming远程调用.
	 */
	UFUNCTION(BlueprintCallable, Category="RayStreaming")
	void RegisterConsoleCommand(const FString& CommandName);

	/**
	 *注销一个控制台命令.
	 */
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
