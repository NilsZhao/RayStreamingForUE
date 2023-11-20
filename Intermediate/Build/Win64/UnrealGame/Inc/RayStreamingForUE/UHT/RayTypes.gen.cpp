// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RayStreamingForUE/Public/RayTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRayTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RAYSTREAMINGFORUE_API UClass* Z_Construct_UClass_URayTypes();
	RAYSTREAMINGFORUE_API UClass* Z_Construct_UClass_URayTypes_NoRegister();
	RAYSTREAMINGFORUE_API UEnum* Z_Construct_UEnum_RayStreamingForUE_ERayTouchType();
	RAYSTREAMINGFORUE_API UScriptStruct* Z_Construct_UScriptStruct_FRayCharInput();
	RAYSTREAMINGFORUE_API UScriptStruct* Z_Construct_UScriptStruct_FRayKeyInput();
	RAYSTREAMINGFORUE_API UScriptStruct* Z_Construct_UScriptStruct_FRayMouseKeyInput();
	RAYSTREAMINGFORUE_API UScriptStruct* Z_Construct_UScriptStruct_FRayMouseMoveInput();
	RAYSTREAMINGFORUE_API UScriptStruct* Z_Construct_UScriptStruct_FRayMouseWheelInput();
	RAYSTREAMINGFORUE_API UScriptStruct* Z_Construct_UScriptStruct_FRayTouchInput();
	UPackage* Z_Construct_UPackage__Script_RayStreamingForUE();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERayTouchType;
	static UEnum* ERayTouchType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERayTouchType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERayTouchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RayStreamingForUE_ERayTouchType, (UObject*)Z_Construct_UPackage__Script_RayStreamingForUE(), TEXT("ERayTouchType"));
		}
		return Z_Registration_Info_UEnum_ERayTouchType.OuterSingleton;
	}
	template<> RAYSTREAMINGFORUE_API UEnum* StaticEnum<ERayTouchType>()
	{
		return ERayTouchType_StaticEnum();
	}
	struct Z_Construct_UEnum_RayStreamingForUE_ERayTouchType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RayStreamingForUE_ERayTouchType_Statics::Enumerators[] = {
		{ "ERayTouchType::TouchStart", (int64)ERayTouchType::TouchStart },
		{ "ERayTouchType::TouchMove", (int64)ERayTouchType::TouchMove },
		{ "ERayTouchType::TouchEnd", (int64)ERayTouchType::TouchEnd },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RayStreamingForUE_ERayTouchType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
		{ "TouchEnd.Name", "ERayTouchType::TouchEnd" },
		{ "TouchMove.Name", "ERayTouchType::TouchMove" },
		{ "TouchStart.Name", "ERayTouchType::TouchStart" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RayStreamingForUE_ERayTouchType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RayStreamingForUE,
		nullptr,
		"ERayTouchType",
		"ERayTouchType",
		Z_Construct_UEnum_RayStreamingForUE_ERayTouchType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RayStreamingForUE_ERayTouchType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RayStreamingForUE_ERayTouchType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RayStreamingForUE_ERayTouchType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_RayStreamingForUE_ERayTouchType()
	{
		if (!Z_Registration_Info_UEnum_ERayTouchType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERayTouchType.InnerSingleton, Z_Construct_UEnum_RayStreamingForUE_ERayTouchType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERayTouchType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RayKeyInput;
class UScriptStruct* FRayKeyInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RayKeyInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RayKeyInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRayKeyInput, (UObject*)Z_Construct_UPackage__Script_RayStreamingForUE(), TEXT("RayKeyInput"));
	}
	return Z_Registration_Info_UScriptStruct_RayKeyInput.OuterSingleton;
}
template<> RAYSTREAMINGFORUE_API UScriptStruct* StaticStruct<FRayKeyInput>()
{
	return FRayKeyInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRayKeyInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyCode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_KeyCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeyDown_MetaData[];
#endif
		static void NewProp_bKeyDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeyDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRepeat_MetaData[];
#endif
		static void NewProp_bRepeat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepeat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayKeyInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRayKeyInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_KeyCode_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_KeyCode = { "KeyCode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRayKeyInput, KeyCode), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_KeyCode_MetaData), Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_KeyCode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bKeyDown_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bKeyDown_SetBit(void* Obj)
	{
		((FRayKeyInput*)Obj)->bKeyDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bKeyDown = { "bKeyDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRayKeyInput), &Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bKeyDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bKeyDown_MetaData), Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bKeyDown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bRepeat_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bRepeat_SetBit(void* Obj)
	{
		((FRayKeyInput*)Obj)->bRepeat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bRepeat = { "bRepeat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRayKeyInput), &Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bRepeat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bRepeat_MetaData), Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bRepeat_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRayKeyInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_KeyCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bKeyDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewProp_bRepeat,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRayKeyInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RayStreamingForUE,
		nullptr,
		&NewStructOps,
		"RayKeyInput",
		Z_Construct_UScriptStruct_FRayKeyInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayKeyInput_Statics::PropPointers),
		sizeof(FRayKeyInput),
		alignof(FRayKeyInput),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayKeyInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRayKeyInput_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayKeyInput_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRayKeyInput()
	{
		if (!Z_Registration_Info_UScriptStruct_RayKeyInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RayKeyInput.InnerSingleton, Z_Construct_UScriptStruct_FRayKeyInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RayKeyInput.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RayCharInput;
class UScriptStruct* FRayCharInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RayCharInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RayCharInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRayCharInput, (UObject*)Z_Construct_UPackage__Script_RayStreamingForUE(), TEXT("RayCharInput"));
	}
	return Z_Registration_Info_UScriptStruct_RayCharInput.OuterSingleton;
}
template<> RAYSTREAMINGFORUE_API UScriptStruct* StaticStruct<FRayCharInput>()
{
	return FRayCharInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRayCharInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Char_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Char;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRepeat_MetaData[];
#endif
		static void NewProp_bRepeat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRepeat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayCharInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRayCharInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRayCharInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_Char_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_Char = { "Char", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRayCharInput, Char), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_Char_MetaData), Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_Char_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_bRepeat_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_bRepeat_SetBit(void* Obj)
	{
		((FRayCharInput*)Obj)->bRepeat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_bRepeat = { "bRepeat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRayCharInput), &Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_bRepeat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_bRepeat_MetaData), Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_bRepeat_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRayCharInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_Char,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayCharInput_Statics::NewProp_bRepeat,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRayCharInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RayStreamingForUE,
		nullptr,
		&NewStructOps,
		"RayCharInput",
		Z_Construct_UScriptStruct_FRayCharInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayCharInput_Statics::PropPointers),
		sizeof(FRayCharInput),
		alignof(FRayCharInput),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayCharInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRayCharInput_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayCharInput_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRayCharInput()
	{
		if (!Z_Registration_Info_UScriptStruct_RayCharInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RayCharInput.InnerSingleton, Z_Construct_UScriptStruct_FRayCharInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RayCharInput.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RayMouseMoveInput;
class UScriptStruct* FRayMouseMoveInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RayMouseMoveInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RayMouseMoveInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRayMouseMoveInput, (UObject*)Z_Construct_UPackage__Script_RayStreamingForUE(), TEXT("RayMouseMoveInput"));
	}
	return Z_Registration_Info_UScriptStruct_RayMouseMoveInput.OuterSingleton;
}
template<> RAYSTREAMINGFORUE_API UScriptStruct* StaticStruct<FRayMouseMoveInput>()
{
	return FRayMouseMoveInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRayMouseMoveInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_PositionX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_PositionX = { "PositionX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRayMouseMoveInput, PositionX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_PositionX_MetaData), Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_PositionX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_PositionY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_PositionY = { "PositionY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRayMouseMoveInput, PositionY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_PositionY_MetaData), Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_PositionY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_DeltaX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_DeltaX = { "DeltaX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRayMouseMoveInput, DeltaX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_DeltaX_MetaData), Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_DeltaX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_DeltaY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_DeltaY = { "DeltaY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRayMouseMoveInput, DeltaY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_DeltaY_MetaData), Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_DeltaY_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_PositionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_PositionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_DeltaX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewProp_DeltaY,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RayStreamingForUE,
		nullptr,
		&NewStructOps,
		"RayMouseMoveInput",
		Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::PropPointers),
		sizeof(FRayMouseMoveInput),
		alignof(FRayMouseMoveInput),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRayMouseMoveInput()
	{
		if (!Z_Registration_Info_UScriptStruct_RayMouseMoveInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RayMouseMoveInput.InnerSingleton, Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RayMouseMoveInput.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RayMouseKeyInput;
class UScriptStruct* FRayMouseKeyInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RayMouseKeyInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RayMouseKeyInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRayMouseKeyInput, (UObject*)Z_Construct_UPackage__Script_RayStreamingForUE(), TEXT("RayMouseKeyInput"));
	}
	return Z_Registration_Info_UScriptStruct_RayMouseKeyInput.OuterSingleton;
}
template<> RAYSTREAMINGFORUE_API UScriptStruct* StaticStruct<FRayMouseKeyInput>()
{
	return FRayMouseKeyInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyCode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_KeyCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeyDown_MetaData[];
#endif
		static void NewProp_bKeyDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeyDown;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRayMouseKeyInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_KeyCode_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_KeyCode = { "KeyCode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRayMouseKeyInput, KeyCode), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_KeyCode_MetaData), Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_KeyCode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_PositionX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_PositionX = { "PositionX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRayMouseKeyInput, PositionX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_PositionX_MetaData), Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_PositionX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_PositionY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_PositionY = { "PositionY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRayMouseKeyInput, PositionY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_PositionY_MetaData), Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_PositionY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_bKeyDown_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_bKeyDown_SetBit(void* Obj)
	{
		((FRayMouseKeyInput*)Obj)->bKeyDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_bKeyDown = { "bKeyDown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRayMouseKeyInput), &Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_bKeyDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_bKeyDown_MetaData), Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_bKeyDown_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_KeyCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_PositionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_PositionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewProp_bKeyDown,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RayStreamingForUE,
		nullptr,
		&NewStructOps,
		"RayMouseKeyInput",
		Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::PropPointers),
		sizeof(FRayMouseKeyInput),
		alignof(FRayMouseKeyInput),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRayMouseKeyInput()
	{
		if (!Z_Registration_Info_UScriptStruct_RayMouseKeyInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RayMouseKeyInput.InnerSingleton, Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RayMouseKeyInput.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RayMouseWheelInput;
class UScriptStruct* FRayMouseWheelInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RayMouseWheelInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RayMouseWheelInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRayMouseWheelInput, (UObject*)Z_Construct_UPackage__Script_RayStreamingForUE(), TEXT("RayMouseWheelInput"));
	}
	return Z_Registration_Info_UScriptStruct_RayMouseWheelInput.OuterSingleton;
}
template<> RAYSTREAMINGFORUE_API UScriptStruct* StaticStruct<FRayMouseWheelInput>()
{
	return FRayMouseWheelInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PosX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PosY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRayMouseWheelInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_Delta_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRayMouseWheelInput, Delta), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_Delta_MetaData), Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_Delta_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_PosX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_PosX = { "PosX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRayMouseWheelInput, PosX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_PosX_MetaData), Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_PosX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_PosY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_PosY = { "PosY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRayMouseWheelInput, PosY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_PosY_MetaData), Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_PosY_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_Delta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_PosX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewProp_PosY,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RayStreamingForUE,
		nullptr,
		&NewStructOps,
		"RayMouseWheelInput",
		Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::PropPointers),
		sizeof(FRayMouseWheelInput),
		alignof(FRayMouseWheelInput),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRayMouseWheelInput()
	{
		if (!Z_Registration_Info_UScriptStruct_RayMouseWheelInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RayMouseWheelInput.InnerSingleton, Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RayMouseWheelInput.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RayTouchInput;
class UScriptStruct* FRayTouchInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RayTouchInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RayTouchInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRayTouchInput, (UObject*)Z_Construct_UPackage__Script_RayStreamingForUE(), TEXT("RayTouchInput"));
	}
	return Z_Registration_Info_UScriptStruct_RayTouchInput.OuterSingleton;
}
template<> RAYSTREAMINGFORUE_API UScriptStruct* StaticStruct<FRayTouchInput>()
{
	return FRayTouchInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRayTouchInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TouchType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchIndex_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TouchIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PosX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PosY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Force;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayTouchInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRayTouchInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_TouchType_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_TouchType = { "TouchType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRayTouchInput, TouchType), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_TouchType_MetaData), Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_TouchType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_TouchIndex_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_TouchIndex = { "TouchIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRayTouchInput, TouchIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_TouchIndex_MetaData), Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_TouchIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_PosX_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_PosX = { "PosX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRayTouchInput, PosX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_PosX_MetaData), Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_PosX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_PosY_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_PosY = { "PosY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRayTouchInput, PosY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_PosY_MetaData), Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_PosY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_Force_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRayTouchInput, Force), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_Force_MetaData), Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_Force_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRayTouchInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_TouchType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_TouchIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_PosX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_PosY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewProp_Force,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRayTouchInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RayStreamingForUE,
		nullptr,
		&NewStructOps,
		"RayTouchInput",
		Z_Construct_UScriptStruct_FRayTouchInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayTouchInput_Statics::PropPointers),
		sizeof(FRayTouchInput),
		alignof(FRayTouchInput),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayTouchInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRayTouchInput_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRayTouchInput_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FRayTouchInput()
	{
		if (!Z_Registration_Info_UScriptStruct_RayTouchInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RayTouchInput.InnerSingleton, Z_Construct_UScriptStruct_FRayTouchInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RayTouchInput.InnerSingleton;
	}
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_TouchCode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::NewProp_TouchCode = { "TouchCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayTypes_eventTouchCodeToType_Parms, TouchCode), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayTypes_eventTouchCodeToType_Parms, ReturnValue), Z_Construct_UEnum_RayStreamingForUE_ERayTouchType, METADATA_PARAMS(0, nullptr) }; // 3383221369
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::NewProp_TouchCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayTypes, nullptr, "TouchCodeToType", nullptr, nullptr, Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::PropPointers), sizeof(Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::RayTypes_eventTouchCodeToType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::RayTypes_eventTouchCodeToType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URayTypes_TouchCodeToType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayTypes_TouchCodeToType_Statics::FuncParams);
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayTypes_eventTouchTypeToCode_Parms, Type), Z_Construct_UEnum_RayStreamingForUE_ERayTouchType, METADATA_PARAMS(0, nullptr) }; // 3383221369
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayTypes_eventTouchTypeToCode_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayTypes, nullptr, "TouchTypeToCode", nullptr, nullptr, Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::RayTypes_eventTouchTypeToCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::RayTypes_eventTouchTypeToCode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URayTypes_TouchTypeToCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayTypes_TouchTypeToCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URayTypes);
	UClass* Z_Construct_UClass_URayTypes_NoRegister()
	{
		return URayTypes::StaticClass();
	}
	struct Z_Construct_UClass_URayTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URayTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RayStreamingForUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URayTypes_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URayTypes_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URayTypes_TouchCodeToType, "TouchCodeToType" }, // 270514788
		{ &Z_Construct_UFunction_URayTypes_TouchTypeToCode, "TouchTypeToCode" }, // 3235017892
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URayTypes_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RayTypes.h" },
		{ "ModuleRelativePath", "Public/RayTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URayTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URayTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URayTypes_Statics::ClassParams = {
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayTypes_Statics::Class_MetaDataParams), Z_Construct_UClass_URayTypes_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URayTypes()
	{
		if (!Z_Registration_Info_UClass_URayTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URayTypes.OuterSingleton, Z_Construct_UClass_URayTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URayTypes.OuterSingleton;
	}
	template<> RAYSTREAMINGFORUE_API UClass* StaticClass<URayTypes>()
	{
		return URayTypes::StaticClass();
	}
	URayTypes::URayTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URayTypes);
	URayTypes::~URayTypes() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_Statics::EnumInfo[] = {
		{ ERayTouchType_StaticEnum, TEXT("ERayTouchType"), &Z_Registration_Info_UEnum_ERayTouchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3383221369U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_Statics::ScriptStructInfo[] = {
		{ FRayKeyInput::StaticStruct, Z_Construct_UScriptStruct_FRayKeyInput_Statics::NewStructOps, TEXT("RayKeyInput"), &Z_Registration_Info_UScriptStruct_RayKeyInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRayKeyInput), 4067477464U) },
		{ FRayCharInput::StaticStruct, Z_Construct_UScriptStruct_FRayCharInput_Statics::NewStructOps, TEXT("RayCharInput"), &Z_Registration_Info_UScriptStruct_RayCharInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRayCharInput), 3008549104U) },
		{ FRayMouseMoveInput::StaticStruct, Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics::NewStructOps, TEXT("RayMouseMoveInput"), &Z_Registration_Info_UScriptStruct_RayMouseMoveInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRayMouseMoveInput), 395795780U) },
		{ FRayMouseKeyInput::StaticStruct, Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics::NewStructOps, TEXT("RayMouseKeyInput"), &Z_Registration_Info_UScriptStruct_RayMouseKeyInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRayMouseKeyInput), 66264104U) },
		{ FRayMouseWheelInput::StaticStruct, Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics::NewStructOps, TEXT("RayMouseWheelInput"), &Z_Registration_Info_UScriptStruct_RayMouseWheelInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRayMouseWheelInput), 140718024U) },
		{ FRayTouchInput::StaticStruct, Z_Construct_UScriptStruct_FRayTouchInput_Statics::NewStructOps, TEXT("RayTouchInput"), &Z_Registration_Info_UScriptStruct_RayTouchInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRayTouchInput), 1504740252U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URayTypes, URayTypes::StaticClass, TEXT("URayTypes"), &Z_Registration_Info_UClass_URayTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URayTypes), 2156926267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_1059255609(TEXT("/Script/RayStreamingForUE"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
