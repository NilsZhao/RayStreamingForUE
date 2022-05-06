// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RayStreamingForUE/Public/RayUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRayUtils() {}
// Cross Module References
	RAYSTREAMINGFORUE_API UClass* Z_Construct_UClass_URayUtils_NoRegister();
	RAYSTREAMINGFORUE_API UClass* Z_Construct_UClass_URayUtils();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_RayStreamingForUE();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchType();
// End Cross Module References
	DEFINE_FUNCTION(URayUtils::execGetViewportSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=URayUtils::GetViewportSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayUtils::execGetClientRectInScreen)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Left);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Right);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Top);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Bottom);
		P_FINISH;
		P_NATIVE_BEGIN;
		URayUtils::GetClientRectInScreen(Z_Param_Out_Left,Z_Param_Out_Right,Z_Param_Out_Top,Z_Param_Out_Bottom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayUtils::execGetClientSizeInScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=URayUtils::GetClientSizeInScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayUtils::execGetSizeInScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=URayUtils::GetSizeInScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayUtils::execGetPositionInScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=URayUtils::GetPositionInScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayUtils::execGetWindowPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=URayUtils::GetWindowPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayUtils::execMakeTouchType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TypeStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ETouchType::Type>*)Z_Param__Result=URayUtils::MakeTouchType(Z_Param_TypeStr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayUtils::execMakeInputEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EInputEvent>*)Z_Param__Result=URayUtils::MakeInputEvent(Z_Param_EventStr);
		P_NATIVE_END;
	}
	void URayUtils::StaticRegisterNativesURayUtils()
	{
		UClass* Class = URayUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetClientRectInScreen", &URayUtils::execGetClientRectInScreen },
			{ "GetClientSizeInScreen", &URayUtils::execGetClientSizeInScreen },
			{ "GetPositionInScreen", &URayUtils::execGetPositionInScreen },
			{ "GetSizeInScreen", &URayUtils::execGetSizeInScreen },
			{ "GetViewportSize", &URayUtils::execGetViewportSize },
			{ "GetWindowPosition", &URayUtils::execGetWindowPosition },
			{ "MakeInputEvent", &URayUtils::execMakeInputEvent },
			{ "MakeTouchType", &URayUtils::execMakeTouchType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics
	{
		struct RayUtils_eventGetClientRectInScreen_Parms
		{
			float Left;
			float Right;
			float Top;
			float Bottom;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Left;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Right;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Top;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Bottom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventGetClientRectInScreen_Parms, Left), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventGetClientRectInScreen_Parms, Right), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventGetClientRectInScreen_Parms, Top), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::NewProp_Bottom = { "Bottom", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventGetClientRectInScreen_Parms, Bottom), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::NewProp_Left,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::NewProp_Right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::NewProp_Top,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::NewProp_Bottom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayUtils" },
		{ "ModuleRelativePath", "Public/RayUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayUtils, nullptr, "GetClientRectInScreen", nullptr, nullptr, sizeof(RayUtils_eventGetClientRectInScreen_Parms), Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayUtils_GetClientRectInScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics
	{
		struct RayUtils_eventGetClientSizeInScreen_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventGetClientSizeInScreen_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayUtils" },
		{ "ModuleRelativePath", "Public/RayUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayUtils, nullptr, "GetClientSizeInScreen", nullptr, nullptr, sizeof(RayUtils_eventGetClientSizeInScreen_Parms), Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayUtils_GetClientSizeInScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics
	{
		struct RayUtils_eventGetPositionInScreen_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventGetPositionInScreen_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayUtils" },
		{ "ModuleRelativePath", "Public/RayUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayUtils, nullptr, "GetPositionInScreen", nullptr, nullptr, sizeof(RayUtils_eventGetPositionInScreen_Parms), Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayUtils_GetPositionInScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics
	{
		struct RayUtils_eventGetSizeInScreen_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventGetSizeInScreen_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayUtils" },
		{ "ModuleRelativePath", "Public/RayUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayUtils, nullptr, "GetSizeInScreen", nullptr, nullptr, sizeof(RayUtils_eventGetSizeInScreen_Parms), Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayUtils_GetSizeInScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayUtils_GetViewportSize_Statics
	{
		struct RayUtils_eventGetViewportSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URayUtils_GetViewportSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventGetViewportSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayUtils_GetViewportSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_GetViewportSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayUtils_GetViewportSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayUtils" },
		{ "ModuleRelativePath", "Public/RayUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URayUtils_GetViewportSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayUtils, nullptr, "GetViewportSize", nullptr, nullptr, sizeof(RayUtils_eventGetViewportSize_Parms), Z_Construct_UFunction_URayUtils_GetViewportSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetViewportSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayUtils_GetViewportSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetViewportSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayUtils_GetViewportSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URayUtils_GetViewportSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics
	{
		struct RayUtils_eventGetWindowPosition_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventGetWindowPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayUtils" },
		{ "ModuleRelativePath", "Public/RayUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayUtils, nullptr, "GetWindowPosition", nullptr, nullptr, sizeof(RayUtils_eventGetWindowPosition_Parms), Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayUtils_GetWindowPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics
	{
		struct RayUtils_eventMakeInputEvent_Parms
		{
			FString EventStr;
			TEnumAsByte<EInputEvent> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventStr;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::NewProp_EventStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::NewProp_EventStr = { "EventStr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventMakeInputEvent_Parms, EventStr), METADATA_PARAMS(Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::NewProp_EventStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::NewProp_EventStr_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventMakeInputEvent_Parms, ReturnValue), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::NewProp_EventStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayUtils" },
		{ "ModuleRelativePath", "Public/RayUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayUtils, nullptr, "MakeInputEvent", nullptr, nullptr, sizeof(RayUtils_eventMakeInputEvent_Parms), Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayUtils_MakeInputEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayUtils_MakeTouchType_Statics
	{
		struct RayUtils_eventMakeTouchType_Parms
		{
			FString TypeStr;
			TEnumAsByte<ETouchType::Type> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TypeStr;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::NewProp_TypeStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::NewProp_TypeStr = { "TypeStr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventMakeTouchType_Parms, TypeStr), METADATA_PARAMS(Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::NewProp_TypeStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::NewProp_TypeStr_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventMakeTouchType_Parms, ReturnValue), Z_Construct_UEnum_InputCore_ETouchType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::NewProp_TypeStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayUtils" },
		{ "ModuleRelativePath", "Public/RayUtils.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayUtils, nullptr, "MakeTouchType", nullptr, nullptr, sizeof(RayUtils_eventMakeTouchType_Parms), Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayUtils_MakeTouchType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URayUtils_NoRegister()
	{
		return URayUtils::StaticClass();
	}
	struct Z_Construct_UClass_URayUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URayUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RayStreamingForUE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URayUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URayUtils_GetClientRectInScreen, "GetClientRectInScreen" }, // 2593503417
		{ &Z_Construct_UFunction_URayUtils_GetClientSizeInScreen, "GetClientSizeInScreen" }, // 2537759456
		{ &Z_Construct_UFunction_URayUtils_GetPositionInScreen, "GetPositionInScreen" }, // 1983333623
		{ &Z_Construct_UFunction_URayUtils_GetSizeInScreen, "GetSizeInScreen" }, // 871563252
		{ &Z_Construct_UFunction_URayUtils_GetViewportSize, "GetViewportSize" }, // 1422244982
		{ &Z_Construct_UFunction_URayUtils_GetWindowPosition, "GetWindowPosition" }, // 2426441924
		{ &Z_Construct_UFunction_URayUtils_MakeInputEvent, "MakeInputEvent" }, // 1097530556
		{ &Z_Construct_UFunction_URayUtils_MakeTouchType, "MakeTouchType" }, // 7931554
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RayUtils.h" },
		{ "ModuleRelativePath", "Public/RayUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URayUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URayUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URayUtils_Statics::ClassParams = {
		&URayUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URayUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URayUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URayUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URayUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URayUtils, 113111350);
	template<> RAYSTREAMINGFORUE_API UClass* StaticClass<URayUtils>()
	{
		return URayUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URayUtils(Z_Construct_UClass_URayUtils, &URayUtils::StaticClass, TEXT("/Script/RayStreamingForUE"), TEXT("URayUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URayUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
