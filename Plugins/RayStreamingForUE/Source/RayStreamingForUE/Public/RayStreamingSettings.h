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
	/*
	 *自动连接到本地ws端口, 用于与web端的通信.<br/>
	 *Auto connect to the local ws port so that we can communicate with web end.
	 */
	UPROPERTY(Config, EditAnywhere, Category="RayStreaming")
	bool bAutoConnect = true;

	/*
	 * 开发环境下的测试链接, 在编辑器环境下, RayStreaming会尝试连接到此ws端口建立与Web端的双向通信.<br/>
	 * The test url for developing purpose. In editor mode,
	 * rayStreaming will always try to connect to the test url instead of 3dcat.live to establish the connection with web end.
	 */
	UPROPERTY(Config, EditAnywhere, Category="RayStreaming")
	FString TestUrl = "ws://127.0.0.1:10000/";

	/*
	 *自动重连, 当连接失败后, 会自动尝试重新建立连接. 对于启用了预加载功能的应用,由于WS端口只会在用户接入后开启, 因此建议开启此功能.<br/>
	 *auto reconnect when a connection failure occurs. it is recommended to enable this option for pre-load apps.
	 */
	UPROPERTY(Config, EditAnywhere, Category="RayStreaming")
	bool bEnableAutoReconnect = true;
	
	/*自动重连间隔(秒)<br/>
	 *Auto reconnect interval.
	 */
	UPROPERTY(Config, EditAnywhere, Category="RayStreaming")
	float ReconnectInterval = 1.f;
	
	/**
	 *是否启动RayStreaming输入代替平台默认映射规则.<br/>
	 *Whether use ray streaming input to replace the platform default input mapping.
	 */
	UPROPERTY(Config, EditAnywhere, Category="RayStreaming")
	bool bUseRayStreamingInput = false;

	/**
	 *是否允许Web端以命令的形式运行UE控制台指令.<br/>
	 *Whether enable running console commands from web commands.
	 */
	UPROPERTY(Config, EditAnywhere, Category="RayStreaming")
	bool bEnableWebCommand = true;
	
	/**
	 *允许从web端直接运行的控制台指令.<br/>
	 *permitted console commands that can be run from web end.
	 */
	UPROPERTY(Config, EditAnywhere, Category="RayStreaming", meta=(EditCondition = "bEnableWebCommand"))
	TArray<FString> PermittedConsoleCommands = {"r.setRes"};
	
	// Begin UDeveloperSettings Interface
	virtual FName GetCategoryName() const override;
#if WITH_EDITOR
	virtual FText GetSectionText() const override;
#endif
	// END UDeveloperSettings Interface

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
};