// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RayStreamingForUE/Public/RayStreamingSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRayStreamingSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	RAYSTREAMINGFORUE_API UClass* Z_Construct_UClass_URayStreamingSettings();
	RAYSTREAMINGFORUE_API UClass* Z_Construct_UClass_URayStreamingSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RayStreamingForUE();
// End Cross Module References
	void URayStreamingSettings::StaticRegisterNativesURayStreamingSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URayStreamingSettings);
	UClass* Z_Construct_UClass_URayStreamingSettings_NoRegister()
	{
		return URayStreamingSettings::StaticClass();
	}
	struct Z_Construct_UClass_URayStreamingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoConnect_MetaData[];
#endif
		static void NewProp_bAutoConnect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoConnect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLocalTest_MetaData[];
#endif
		static void NewProp_bEnableLocalTest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLocalTest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoReconnect_MetaData[];
#endif
		static void NewProp_bEnableAutoReconnect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoReconnect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReconnectInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReconnectInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRayStreamingInput_MetaData[];
#endif
		static void NewProp_bUseRayStreamingInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRayStreamingInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWebCommand_MetaData[];
#endif
		static void NewProp_bEnableWebCommand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWebCommand;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PermittedConsoleCommands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PermittedConsoleCommands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PermittedConsoleCommands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URayStreamingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_RayStreamingForUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "RayStreaming" },
		{ "IncludePath", "RayStreamingSettings.h" },
		{ "ModuleRelativePath", "Public/RayStreamingSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bAutoConnect_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingSettings.h" },
	};
#endif
	void Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bAutoConnect_SetBit(void* Obj)
	{
		((URayStreamingSettings*)Obj)->bAutoConnect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bAutoConnect = { "bAutoConnect", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URayStreamingSettings), &Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bAutoConnect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bAutoConnect_MetaData), Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bAutoConnect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableLocalTest_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingSettings.h" },
	};
#endif
	void Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableLocalTest_SetBit(void* Obj)
	{
		((URayStreamingSettings*)Obj)->bEnableLocalTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableLocalTest = { "bEnableLocalTest", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URayStreamingSettings), &Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableLocalTest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableLocalTest_MetaData), Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableLocalTest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_TestUrl_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_TestUrl = { "TestUrl", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URayStreamingSettings, TestUrl), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_TestUrl_MetaData), Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_TestUrl_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableAutoReconnect_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingSettings.h" },
	};
#endif
	void Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableAutoReconnect_SetBit(void* Obj)
	{
		((URayStreamingSettings*)Obj)->bEnableAutoReconnect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableAutoReconnect = { "bEnableAutoReconnect", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URayStreamingSettings), &Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableAutoReconnect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableAutoReconnect_MetaData), Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableAutoReconnect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_ReconnectInterval_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_ReconnectInterval = { "ReconnectInterval", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URayStreamingSettings, ReconnectInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_ReconnectInterval_MetaData), Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_ReconnectInterval_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bUseRayStreamingInput_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingSettings.h" },
	};
#endif
	void Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bUseRayStreamingInput_SetBit(void* Obj)
	{
		((URayStreamingSettings*)Obj)->bUseRayStreamingInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bUseRayStreamingInput = { "bUseRayStreamingInput", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URayStreamingSettings), &Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bUseRayStreamingInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bUseRayStreamingInput_MetaData), Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bUseRayStreamingInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableWebCommand_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingSettings.h" },
	};
#endif
	void Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableWebCommand_SetBit(void* Obj)
	{
		((URayStreamingSettings*)Obj)->bEnableWebCommand = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableWebCommand = { "bEnableWebCommand", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URayStreamingSettings), &Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableWebCommand_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableWebCommand_MetaData), Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableWebCommand_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_PermittedConsoleCommands_Inner = { "PermittedConsoleCommands", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_PermittedConsoleCommands_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "EditCondition", "bEnableWebCommand" },
		{ "ModuleRelativePath", "Public/RayStreamingSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_PermittedConsoleCommands = { "PermittedConsoleCommands", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URayStreamingSettings, PermittedConsoleCommands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_PermittedConsoleCommands_MetaData), Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_PermittedConsoleCommands_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URayStreamingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bAutoConnect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableLocalTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_TestUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableAutoReconnect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_ReconnectInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bUseRayStreamingInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableWebCommand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_PermittedConsoleCommands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_PermittedConsoleCommands,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URayStreamingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URayStreamingSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URayStreamingSettings_Statics::ClassParams = {
		&URayStreamingSettings::StaticClass,
		"RayStreaming",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URayStreamingSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_URayStreamingSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URayStreamingSettings()
	{
		if (!Z_Registration_Info_UClass_URayStreamingSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URayStreamingSettings.OuterSingleton, Z_Construct_UClass_URayStreamingSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URayStreamingSettings.OuterSingleton;
	}
	template<> RAYSTREAMINGFORUE_API UClass* StaticClass<URayStreamingSettings>()
	{
		return URayStreamingSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URayStreamingSettings);
	URayStreamingSettings::~URayStreamingSettings() {}
	struct Z_CompiledInDeferFile_FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URayStreamingSettings, URayStreamingSettings::StaticClass, TEXT("URayStreamingSettings"), &Z_Registration_Info_UClass_URayStreamingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URayStreamingSettings), 4086787767U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingSettings_h_1145716611(TEXT("/Script/RayStreamingForUE"),
		Z_CompiledInDeferFile_FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
