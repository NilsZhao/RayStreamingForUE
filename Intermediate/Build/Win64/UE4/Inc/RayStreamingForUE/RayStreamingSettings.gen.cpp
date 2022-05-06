// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RayStreamingForUE/Public/RayStreamingSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRayStreamingSettings() {}
// Cross Module References
	RAYSTREAMINGFORUE_API UClass* Z_Construct_UClass_URayStreamingSettings_NoRegister();
	RAYSTREAMINGFORUE_API UClass* Z_Construct_UClass_URayStreamingSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_RayStreamingForUE();
// End Cross Module References
	void URayStreamingSettings::StaticRegisterNativesURayStreamingSettings()
	{
	}
	UClass* Z_Construct_UClass_URayStreamingSettings_NoRegister()
	{
		return URayStreamingSettings::StaticClass();
	}
	struct Z_Construct_UClass_URayStreamingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoConnect_MetaData[];
#endif
		static void NewProp_bAutoConnect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoConnect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLocalTest_MetaData[];
#endif
		static void NewProp_bEnableLocalTest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLocalTest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TestUrl;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoReconnect_MetaData[];
#endif
		static void NewProp_bEnableAutoReconnect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoReconnect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReconnectInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReconnectInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRayStreamingInput_MetaData[];
#endif
		static void NewProp_bUseRayStreamingInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRayStreamingInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableWebCommand_MetaData[];
#endif
		static void NewProp_bEnableWebCommand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableWebCommand;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PermittedConsoleCommands_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PermittedConsoleCommands_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PermittedConsoleCommands;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URayStreamingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_RayStreamingForUE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "RayStreaming" },
		{ "IncludePath", "RayStreamingSettings.h" },
		{ "ModuleRelativePath", "Public/RayStreamingSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bAutoConnect_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingSettings.h" },
	};
#endif
	void Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bAutoConnect_SetBit(void* Obj)
	{
		((URayStreamingSettings*)Obj)->bAutoConnect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bAutoConnect = { "bAutoConnect", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URayStreamingSettings), &Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bAutoConnect_SetBit, METADATA_PARAMS(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bAutoConnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bAutoConnect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableLocalTest_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingSettings.h" },
	};
#endif
	void Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableLocalTest_SetBit(void* Obj)
	{
		((URayStreamingSettings*)Obj)->bEnableLocalTest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableLocalTest = { "bEnableLocalTest", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URayStreamingSettings), &Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableLocalTest_SetBit, METADATA_PARAMS(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableLocalTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableLocalTest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_TestUrl_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_TestUrl = { "TestUrl", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URayStreamingSettings, TestUrl), METADATA_PARAMS(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_TestUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_TestUrl_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableAutoReconnect_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingSettings.h" },
	};
#endif
	void Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableAutoReconnect_SetBit(void* Obj)
	{
		((URayStreamingSettings*)Obj)->bEnableAutoReconnect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableAutoReconnect = { "bEnableAutoReconnect", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URayStreamingSettings), &Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableAutoReconnect_SetBit, METADATA_PARAMS(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableAutoReconnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableAutoReconnect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_ReconnectInterval_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_ReconnectInterval = { "ReconnectInterval", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URayStreamingSettings, ReconnectInterval), METADATA_PARAMS(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_ReconnectInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_ReconnectInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bUseRayStreamingInput_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingSettings.h" },
	};
#endif
	void Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bUseRayStreamingInput_SetBit(void* Obj)
	{
		((URayStreamingSettings*)Obj)->bUseRayStreamingInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bUseRayStreamingInput = { "bUseRayStreamingInput", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URayStreamingSettings), &Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bUseRayStreamingInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bUseRayStreamingInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bUseRayStreamingInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableWebCommand_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingSettings.h" },
	};
#endif
	void Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableWebCommand_SetBit(void* Obj)
	{
		((URayStreamingSettings*)Obj)->bEnableWebCommand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableWebCommand = { "bEnableWebCommand", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URayStreamingSettings), &Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableWebCommand_SetBit, METADATA_PARAMS(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableWebCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableWebCommand_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_PermittedConsoleCommands_Inner = { "PermittedConsoleCommands", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_PermittedConsoleCommands_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "EditCondition", "bEnableWebCommand" },
		{ "ModuleRelativePath", "Public/RayStreamingSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_PermittedConsoleCommands = { "PermittedConsoleCommands", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URayStreamingSettings, PermittedConsoleCommands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_PermittedConsoleCommands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_PermittedConsoleCommands_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URayStreamingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bAutoConnect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableLocalTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_TestUrl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableAutoReconnect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_ReconnectInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bUseRayStreamingInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_bEnableWebCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_PermittedConsoleCommands_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingSettings_Statics::NewProp_PermittedConsoleCommands,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URayStreamingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URayStreamingSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URayStreamingSettings_Statics::ClassParams = {
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
		METADATA_PARAMS(Z_Construct_UClass_URayStreamingSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URayStreamingSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URayStreamingSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URayStreamingSettings, 205183121);
	template<> RAYSTREAMINGFORUE_API UClass* StaticClass<URayStreamingSettings>()
	{
		return URayStreamingSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URayStreamingSettings(Z_Construct_UClass_URayStreamingSettings, &URayStreamingSettings::StaticClass, TEXT("/Script/RayStreamingForUE"), TEXT("URayStreamingSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URayStreamingSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
