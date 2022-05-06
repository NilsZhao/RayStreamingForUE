// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RayStreamingForUE/Public/RayTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRayTypes() {}
// Cross Module References
	RAYSTREAMINGFORUE_API UEnum* Z_Construct_UEnum_RayStreamingForUE_ERayTouchType();
	UPackage* Z_Construct_UPackage__Script_RayStreamingForUE();
	RAYSTREAMINGFORUE_API UScriptStruct* Z_Construct_UScriptStruct_FRayTouchInput();
	RAYSTREAMINGFORUE_API UScriptStruct* Z_Construct_UScriptStruct_FRayMouseWheelInput();
	RAYSTREAMINGFORUE_API UScriptStruct* Z_Construct_UScriptStruct_FRayMouseKeyInput();
	RAYSTREAMINGFORUE_API UScriptStruct* Z_Construct_UScriptStruct_FRayMouseMoveInput();
	RAYSTREAMINGFORUE_API UScriptStruct* Z_Construct_UScriptStruct_FRayCharInput();
	RAYSTREAMINGFORUE_API UScriptStruct* Z_Construct_UScriptStruct_FRayKeyInput();
	RAYSTREAMINGFORUE_API UClass* Z_Construct_UClass_URayTypes_NoRegister();
	RAYSTREAMINGFORUE_API UClass* Z_Construct_UClass_URayTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ERayTouchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RayStreamingForUE_ERayTouchType, Z_Construct_UPackage__Script_RayStreamingForUE(), TEXT("ERayTouchType"));
		}
		return Singleton;
	}
	template<> RAYSTREAMINGFORUE_API UEnum* StaticEnum<ERayTouchType>()
	{
		return ERayTouchType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERayTouchType(ERayTouchType_StaticEnum, TEXT("/Script/RayStreamingForUE"), TEXT("ERayTouchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RayStreamingForUE_ERayTouchType_Hash() { return 964022001U; }
	UEnum* Z_Construct_UEnum_RayStreamingForUE_ERayTouchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RayStreamingForUE();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERayTouchType"), 0, Get_Z_Construct_UEnum_RayStreamingForUE_ERayTouchType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERayTouchType::TouchStart", (int64)ERayTouchType::TouchStart },
				{ "ERayTouchType::TouchMove", (int64)ERayTouchType::TouchMove },
				{ "ERayTouchType::TouchEnd", (int64)ERayTouchType::TouchEnd },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/RayTypes.h" },
				{ "TouchEnd.Name", "ERayTouchType::TouchEnd" },
				{ "TouchMove.Name", "ERayTouchType::TouchMove" },
				{ "TouchStart.Name", "ERayTouchType::TouchStart" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RayStreamingForUE,
				nullptr,
				"ERayTouchType",
				"ERayTouchType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FRayTouchInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RAYSTREAMINGFORUE_API uint32 Get_Z_Construct_UScriptStruct_FRayTouchInput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRayTouchInput, Z_Construct_UPackage__Script_RayStreamingForUE(), TEXT("RayTouchInput"), sizeof(FRayTouchInput), Get_Z_Construct_UScriptStruct_FRayTouchInput_Hash());
	}
	return Singleton;
}
template<> RAYSTREAMINGFORUE_API UScriptStruct* StaticStruct<FRayTouchInput>()
{
	return FRayTouchInput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRayTouchInput(FRayTouchInput::StaticStruct, TEXT("/Script/RayStreamingForUE"), TEXT("RayTouchInput"), false, nullptr, nullptr);
static struct FScriptStruct_RayStreamingForUE_StaticRegisterNativesFRayTouchInput
{
	FScriptStruct_RayStreamingForUE_StaticRegisterNativesFRayTouchInput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RayTouchInput")),new UScriptStruct::TCppStructOps<FRayTouchInput>);
	}
} ScriptStruct_RayStreamingForUE_StaticRegisterNativesFRayTouchInput;
	struct Z_Construct_UScriptStruct_FRayTouchInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TouchType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TouchIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TouchIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PosX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PosY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Force;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayTouchInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRayTouchInput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_TouchType_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_TouchType = { "TouchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRayTouchInput, TouchType), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_TouchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_TouchType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_TouchIndex_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_TouchIndex = { "TouchIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRayTouchInput, TouchIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_TouchIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_TouchIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_PosX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_PosX = { "PosX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRayTouchInput, PosX), METADATA_PARAMS(Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_PosX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_PosX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_PosY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_PosY = { "PosY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRayTouchInput, PosY), METADATA_PARAMS(Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_PosY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_PosY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_Force_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRayTouchInput, Force), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_Force_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRayTouchInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_TouchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_TouchIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_PosX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_PosY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_Force,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRayTouchInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RayStreamingForUE,
		nullptr,
		&NewStructOps,
		"RayTouchInput",
		sizeof(FRayTouchInput),
		alignof(FRayTouchInput),
		Z_Construct_UScriptStruct_FRayTouchInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayTouchInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRayTouchInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayTouchInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRayTouchInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRayTouchInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RayStreamingForUE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RayTouchInput"), sizeof(FRayTouchInput), Get_Z_Construct_UScriptStruct_FRayTouchInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRayTouchInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRayTouchInput_Hash() { return 101254935U; }
class UScriptStruct* FRayMouseWheelInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RAYSTREAMINGFORUE_API uint32 Get_Z_Construct_UScriptStruct_FRayMouseWheelInput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRayMouseWheelInput, Z_Construct_UPackage__Script_RayStreamingForUE(), TEXT("RayMouseWheelInput"), sizeof(FRayMouseWheelInput), Get_Z_Construct_UScriptStruct_FRayMouseWheelInput_Hash());
	}
	return Singleton;
}
template<> RAYSTREAMINGFORUE_API UScriptStruct* StaticStruct<FRayMouseWheelInput>()
{
	return FRayMouseWheelInput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRayMouseWheelInput(FRayMouseWheelInput::StaticStruct, TEXT("/Script/RayStreamingForUE"), TEXT("RayMouseWheelInput"), false, nullptr, nullptr);
static struct FScriptStruct_RayStreamingForUE_StaticRegisterNativesFRayMouseWheelInput
{
	FScriptStruct_RayStreamingForUE_StaticRegisterNativesFRayMouseWheelInput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RayMouseWheelInput")),new UScriptStruct::TCppStructOps<FRayMouseWheelInput>);
	}
} ScriptStruct_RayStreamingForUE_StaticRegisterNativesFRayMouseWheelInput;
	struct Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PosX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PosY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PosY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRayMouseWheelInput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_Delta_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRayMouseWheelInput, Delta), METADATA_PARAMS(Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_Delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_Delta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_PosX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_PosX = { "PosX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRayMouseWheelInput, PosX), METADATA_PARAMS(Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_PosX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_PosX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_PosY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_PosY = { "PosY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRayMouseWheelInput, PosY), METADATA_PARAMS(Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_PosY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_PosY_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_Delta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_PosX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_PosY,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RayStreamingForUE,
		nullptr,
		&NewStructOps,
		"RayMouseWheelInput",
		sizeof(FRayMouseWheelInput),
		alignof(FRayMouseWheelInput),
		Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRayMouseWheelInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRayMouseWheelInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RayStreamingForUE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RayMouseWheelInput"), sizeof(FRayMouseWheelInput), Get_Z_Construct_UScriptStruct_FRayMouseWheelInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRayMouseWheelInput_Hash() { return 210515256U; }
class UScriptStruct* FRayMouseKeyInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RAYSTREAMINGFORUE_API uint32 Get_Z_Construct_UScriptStruct_FRayMouseKeyInput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRayMouseKeyInput, Z_Construct_UPackage__Script_RayStreamingForUE(), TEXT("RayMouseKeyInput"), sizeof(FRayMouseKeyInput), Get_Z_Construct_UScriptStruct_FRayMouseKeyInput_Hash());
	}
	return Singleton;
}
template<> RAYSTREAMINGFORUE_API UScriptStruct* StaticStruct<FRayMouseKeyInput>()
{
	return FRayMouseKeyInput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRayMouseKeyInput(FRayMouseKeyInput::StaticStruct, TEXT("/Script/RayStreamingForUE"), TEXT("RayMouseKeyInput"), false, nullptr, nullptr);
static struct FScriptStruct_RayStreamingForUE_StaticRegisterNativesFRayMouseKeyInput
{
	FScriptStruct_RayStreamingForUE_StaticRegisterNativesFRayMouseKeyInput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RayMouseKeyInput")),new UScriptStruct::TCppStructOps<FRayMouseKeyInput>);
	}
} ScriptStruct_RayStreamingForUE_StaticRegisterNativesFRayMouseKeyInput;
	struct Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeyDown_MetaData[];
#endif
		static void NewProp_bKeyDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeyDown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRayMouseKeyInput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_KeyCode_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_KeyCode = { "KeyCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRayMouseKeyInput, KeyCode), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_KeyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_KeyCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_PositionX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_PositionX = { "PositionX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRayMouseKeyInput, PositionX), METADATA_PARAMS(Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_PositionX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_PositionX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_PositionY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_PositionY = { "PositionY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRayMouseKeyInput, PositionY), METADATA_PARAMS(Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_PositionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_PositionY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_bKeyDown_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_bKeyDown_SetBit(void* Obj)
	{
		((FRayMouseKeyInput*)Obj)->bKeyDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_bKeyDown = { "bKeyDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRayMouseKeyInput), &Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_bKeyDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_bKeyDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_bKeyDown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_KeyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_PositionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_PositionY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_bKeyDown,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RayStreamingForUE,
		nullptr,
		&NewStructOps,
		"RayMouseKeyInput",
		sizeof(FRayMouseKeyInput),
		alignof(FRayMouseKeyInput),
		Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRayMouseKeyInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRayMouseKeyInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RayStreamingForUE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RayMouseKeyInput"), sizeof(FRayMouseKeyInput), Get_Z_Construct_UScriptStruct_FRayMouseKeyInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRayMouseKeyInput_Hash() { return 456223250U; }
class UScriptStruct* FRayMouseMoveInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RAYSTREAMINGFORUE_API uint32 Get_Z_Construct_UScriptStruct_FRayMouseMoveInput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRayMouseMoveInput, Z_Construct_UPackage__Script_RayStreamingForUE(), TEXT("RayMouseMoveInput"), sizeof(FRayMouseMoveInput), Get_Z_Construct_UScriptStruct_FRayMouseMoveInput_Hash());
	}
	return Singleton;
}
template<> RAYSTREAMINGFORUE_API UScriptStruct* StaticStruct<FRayMouseMoveInput>()
{
	return FRayMouseMoveInput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRayMouseMoveInput(FRayMouseMoveInput::StaticStruct, TEXT("/Script/RayStreamingForUE"), TEXT("RayMouseMoveInput"), false, nullptr, nullptr);
static struct FScriptStruct_RayStreamingForUE_StaticRegisterNativesFRayMouseMoveInput
{
	FScriptStruct_RayStreamingForUE_StaticRegisterNativesFRayMouseMoveInput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RayMouseMoveInput")),new UScriptStruct::TCppStructOps<FRayMouseMoveInput>);
	}
} ScriptStruct_RayStreamingForUE_StaticRegisterNativesFRayMouseMoveInput;
	struct Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRayMouseMoveInput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_PositionX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_PositionX = { "PositionX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRayMouseMoveInput, PositionX), METADATA_PARAMS(Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_PositionX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_PositionX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_PositionY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_PositionY = { "PositionY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRayMouseMoveInput, PositionY), METADATA_PARAMS(Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_PositionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_PositionY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_DeltaX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_DeltaX = { "DeltaX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRayMouseMoveInput, DeltaX), METADATA_PARAMS(Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_DeltaX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_DeltaX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_DeltaY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_DeltaY = { "DeltaY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRayMouseMoveInput, DeltaY), METADATA_PARAMS(Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_DeltaY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_DeltaY_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_PositionX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_PositionY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_DeltaX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_DeltaY,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RayStreamingForUE,
		nullptr,
		&NewStructOps,
		"RayMouseMoveInput",
		sizeof(FRayMouseMoveInput),
		alignof(FRayMouseMoveInput),
		Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRayMouseMoveInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRayMouseMoveInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RayStreamingForUE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RayMouseMoveInput"), sizeof(FRayMouseMoveInput), Get_Z_Construct_UScriptStruct_FRayMouseMoveInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRayMouseMoveInput_Hash() { return 1756265298U; }
class UScriptStruct* FRayCharInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RAYSTREAMINGFORUE_API uint32 Get_Z_Construct_UScriptStruct_FRayCharInput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRayCharInput, Z_Construct_UPackage__Script_RayStreamingForUE(), TEXT("RayCharInput"), sizeof(FRayCharInput), Get_Z_Construct_UScriptStruct_FRayCharInput_Hash());
	}
	return Singleton;
}
template<> RAYSTREAMINGFORUE_API UScriptStruct* StaticStruct<FRayCharInput>()
{
	return FRayCharInput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRayCharInput(FRayCharInput::StaticStruct, TEXT("/Script/RayStreamingForUE"), TEXT("RayCharInput"), false, nullptr, nullptr);
static struct FScriptStruct_RayStreamingForUE_StaticRegisterNativesFRayCharInput
{
	FScriptStruct_RayStreamingForUE_StaticRegisterNativesFRayCharInput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RayCharInput")),new UScriptStruct::TCppStructOps<FRayCharInput>);
	}
} ScriptStruct_RayStreamingForUE_StaticRegisterNativesFRayCharInput;
	struct Z_Construct_UScriptStruct_FRayCharInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Char_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Char;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRepeat_MetaData[];
#endif
		static void NewProp_bRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayCharInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRayCharInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRayCharInput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_Char_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_Char = { "Char", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRayCharInput, Char), METADATA_PARAMS(Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_Char_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_Char_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_bRepeat_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_bRepeat_SetBit(void* Obj)
	{
		((FRayCharInput*)Obj)->bRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_bRepeat = { "bRepeat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRayCharInput), &Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_bRepeat_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_bRepeat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_bRepeat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRayCharInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_Char,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_bRepeat,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRayCharInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RayStreamingForUE,
		nullptr,
		&NewStructOps,
		"RayCharInput",
		sizeof(FRayCharInput),
		alignof(FRayCharInput),
		Z_Construct_UScriptStruct_FRayCharInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayCharInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRayCharInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayCharInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRayCharInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRayCharInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RayStreamingForUE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RayCharInput"), sizeof(FRayCharInput), Get_Z_Construct_UScriptStruct_FRayCharInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRayCharInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRayCharInput_Hash() { return 3217691546U; }
class UScriptStruct* FRayKeyInput::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RAYSTREAMINGFORUE_API uint32 Get_Z_Construct_UScriptStruct_FRayKeyInput_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRayKeyInput, Z_Construct_UPackage__Script_RayStreamingForUE(), TEXT("RayKeyInput"), sizeof(FRayKeyInput), Get_Z_Construct_UScriptStruct_FRayKeyInput_Hash());
	}
	return Singleton;
}
template<> RAYSTREAMINGFORUE_API UScriptStruct* StaticStruct<FRayKeyInput>()
{
	return FRayKeyInput::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRayKeyInput(FRayKeyInput::StaticStruct, TEXT("/Script/RayStreamingForUE"), TEXT("RayKeyInput"), false, nullptr, nullptr);
static struct FScriptStruct_RayStreamingForUE_StaticRegisterNativesFRayKeyInput
{
	FScriptStruct_RayStreamingForUE_StaticRegisterNativesFRayKeyInput()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RayKeyInput")),new UScriptStruct::TCppStructOps<FRayKeyInput>);
	}
} ScriptStruct_RayStreamingForUE_StaticRegisterNativesFRayKeyInput;
	struct Z_Construct_UScriptStruct_FRayKeyInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KeyCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeyDown_MetaData[];
#endif
		static void NewProp_bKeyDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeyDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRepeat_MetaData[];
#endif
		static void NewProp_bRepeat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRepeat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayKeyInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRayKeyInput>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_KeyCode_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_KeyCode = { "KeyCode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRayKeyInput, KeyCode), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_KeyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_KeyCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bKeyDown_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bKeyDown_SetBit(void* Obj)
	{
		((FRayKeyInput*)Obj)->bKeyDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bKeyDown = { "bKeyDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRayKeyInput), &Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bKeyDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bKeyDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bKeyDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bRepeat_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bRepeat_SetBit(void* Obj)
	{
		((FRayKeyInput*)Obj)->bRepeat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bRepeat = { "bRepeat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRayKeyInput), &Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bRepeat_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bRepeat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bRepeat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRayKeyInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_KeyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bKeyDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bRepeat,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRayKeyInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RayStreamingForUE,
		nullptr,
		&NewStructOps,
		"RayKeyInput",
		sizeof(FRayKeyInput),
		alignof(FRayKeyInput),
		Z_Construct_UScriptStruct_FRayKeyInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayKeyInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRayKeyInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayKeyInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRayKeyInput()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRayKeyInput_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RayStreamingForUE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RayKeyInput"), sizeof(FRayKeyInput), Get_Z_Construct_UScriptStruct_FRayKeyInput_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRayKeyInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRayKeyInput_Hash() { return 1644685152U; }
	DEFINE_FUNCTION(URayTypes::execTouchCodeToType)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_TouchCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERayTouchType*)Z_Param__Result=URayTypes::TouchCodeToType(Z_Param_TouchCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayTypes::execTouchTypeToCode)
	{
		P_GET_ENUM(ERayTouchType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=URayTypes::TouchTypeToCode(ERayTouchType(Z_Param_Type));
		P_NATIVE_END;
	}
	void URayTypes::StaticRegisterNativesURayTypes()
	{
		UClass* Class = URayTypes::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TouchCodeToType", &URayTypes::execTouchCodeToType },
			{ "TouchTypeToCode", &URayTypes::execTouchTypeToCode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics
	{
		struct RayTypes_eventTouchCodeToType_Parms
		{
			uint8 TouchCode;
			ERayTouchType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TouchCode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::NewProp_TouchCode = { "TouchCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayTypes_eventTouchCodeToType_Parms, TouchCode), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayTypes_eventTouchCodeToType_Parms, ReturnValue), Z_Construct_UEnum_RayStreamingForUE_ERayTouchType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::NewProp_TouchCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayTypes, nullptr, "TouchCodeToType", nullptr, nullptr, sizeof(RayTypes_eventTouchCodeToType_Parms), Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayTypes_TouchCodeToType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics
	{
		struct RayTypes_eventTouchTypeToCode_Parms
		{
			ERayTouchType Type;
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayTypes_eventTouchTypeToCode_Parms, Type), Z_Construct_UEnum_RayStreamingForUE_ERayTouchType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayTypes_eventTouchTypeToCode_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayTypes, nullptr, "TouchTypeToCode", nullptr, nullptr, sizeof(RayTypes_eventTouchTypeToCode_Parms), Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayTypes_TouchTypeToCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URayTypes_NoRegister()
	{
		return URayTypes::StaticClass();
	}
	struct Z_Construct_UClass_URayTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URayTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RayStreamingForUE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URayTypes_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URayTypes_TouchCodeToType, "TouchCodeToType" }, // 3612643255
		{ &Z_Construct_UFunction_URayTypes_TouchTypeToCode, "TouchTypeToCode" }, // 550540480
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RayTypes.h" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URayTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URayTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URayTypes_Statics::ClassParams = {
		&URayTypes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URayTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URayTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URayTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URayTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URayTypes, 2826611161);
	template<> RAYSTREAMINGFORUE_API UClass* StaticClass<URayTypes>()
	{
		return URayTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URayTypes(Z_Construct_UClass_URayTypes, &URayTypes::StaticClass, TEXT("/Script/RayStreamingForUE"), TEXT("URayTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URayTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
