// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RayStreamingForUE/Public/RayUtils.h"
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
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Left;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Top;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Bottom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventGetClientRectInScreen_Parms, Left), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventGetClientRectInScreen_Parms, Right), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventGetClientRectInScreen_Parms, Top), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::NewProp_Bottom = { "Bottom", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventGetClientRectInScreen_Parms, Bottom), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::NewProp_Top,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::NewProp_Bottom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayUtils" },
		{ "ModuleRelativePath", "Public/RayUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayUtils, nullptr, "GetClientRectInScreen", nullptr, nullptr, sizeof(Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::RayUtils_eventGetClientRectInScreen_Parms), Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayUtils_GetClientRectInScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayUtils_GetClientRectInScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics
	{
		struct RayUtils_eventGetClientSizeInScreen_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventGetClientSizeInScreen_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayUtils" },
		{ "ModuleRelativePath", "Public/RayUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayUtils, nullptr, "GetClientSizeInScreen", nullptr, nullptr, sizeof(Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics::RayUtils_eventGetClientSizeInScreen_Parms), Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayUtils_GetClientSizeInScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayUtils_GetClientSizeInScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics
	{
		struct RayUtils_eventGetPositionInScreen_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventGetPositionInScreen_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayUtils" },
		{ "ModuleRelativePath", "Public/RayUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayUtils, nullptr, "GetPositionInScreen", nullptr, nullptr, sizeof(Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics::RayUtils_eventGetPositionInScreen_Parms), Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayUtils_GetPositionInScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayUtils_GetPositionInScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics
	{
		struct RayUtils_eventGetSizeInScreen_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventGetSizeInScreen_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayUtils" },
		{ "ModuleRelativePath", "Public/RayUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayUtils, nullptr, "GetSizeInScreen", nullptr, nullptr, sizeof(Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics::RayUtils_eventGetSizeInScreen_Parms), Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayUtils_GetSizeInScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayUtils_GetSizeInScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayUtils_GetViewportSize_Statics
	{
		struct RayUtils_eventGetViewportSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URayUtils_GetViewportSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventGetViewportSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayUtils_GetViewportSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_GetViewportSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayUtils_GetViewportSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayUtils" },
		{ "ModuleRelativePath", "Public/RayUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayUtils_GetViewportSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayUtils, nullptr, "GetViewportSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_URayUtils_GetViewportSize_Statics::RayUtils_eventGetViewportSize_Parms), Z_Construct_UFunction_URayUtils_GetViewportSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetViewportSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayUtils_GetViewportSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetViewportSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayUtils_GetViewportSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayUtils_GetViewportSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics
	{
		struct RayUtils_eventGetWindowPosition_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventGetWindowPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayUtils" },
		{ "ModuleRelativePath", "Public/RayUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayUtils, nullptr, "GetWindowPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics::RayUtils_eventGetWindowPosition_Parms), Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayUtils_GetWindowPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayUtils_GetWindowPosition_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventStr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EventStr;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::NewProp_EventStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::NewProp_EventStr = { "EventStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventMakeInputEvent_Parms, EventStr), METADATA_PARAMS(Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::NewProp_EventStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::NewProp_EventStr_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventMakeInputEvent_Parms, ReturnValue), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) }; // 1054153585
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::NewProp_EventStr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayUtils" },
		{ "ModuleRelativePath", "Public/RayUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayUtils, nullptr, "MakeInputEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::RayUtils_eventMakeInputEvent_Parms), Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayUtils_MakeInputEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayUtils_MakeInputEvent_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeStr_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TypeStr;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::NewProp_TypeStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::NewProp_TypeStr = { "TypeStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventMakeTouchType_Parms, TypeStr), METADATA_PARAMS(Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::NewProp_TypeStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::NewProp_TypeStr_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RayUtils_eventMakeTouchType_Parms, ReturnValue), Z_Construct_UEnum_InputCore_ETouchType, METADATA_PARAMS(nullptr, 0) }; // 1627830907
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::NewProp_TypeStr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayUtils" },
		{ "ModuleRelativePath", "Public/RayUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayUtils, nullptr, "MakeTouchType", nullptr, nullptr, sizeof(Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::RayUtils_eventMakeTouchType_Parms), Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URayUtils_MakeTouchType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayUtils_MakeTouchType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URayUtils);
	UClass* Z_Construct_UClass_URayUtils_NoRegister()
	{
		return URayUtils::StaticClass();
	}
	struct Z_Construct_UClass_URayUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URayUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RayStreamingForUE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URayUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URayUtils_GetClientRectInScreen, "GetClientRectInScreen" }, // 2152843270
		{ &Z_Construct_UFunction_URayUtils_GetClientSizeInScreen, "GetClientSizeInScreen" }, // 1499728674
		{ &Z_Construct_UFunction_URayUtils_GetPositionInScreen, "GetPositionInScreen" }, // 3482221166
		{ &Z_Construct_UFunction_URayUtils_GetSizeInScreen, "GetSizeInScreen" }, // 1401818879
		{ &Z_Construct_UFunction_URayUtils_GetViewportSize, "GetViewportSize" }, // 3114126266
		{ &Z_Construct_UFunction_URayUtils_GetWindowPosition, "GetWindowPosition" }, // 884294641
		{ &Z_Construct_UFunction_URayUtils_MakeInputEvent, "MakeInputEvent" }, // 3480854333
		{ &Z_Construct_UFunction_URayUtils_MakeTouchType, "MakeTouchType" }, // 3660172418
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RayUtils.h" },
		{ "ModuleRelativePath", "Public/RayUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URayUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URayUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URayUtils_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_URayUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URayUtils.OuterSingleton, Z_Construct_UClass_URayUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URayUtils.OuterSingleton;
	}
	template<> RAYSTREAMINGFORUE_API UClass* StaticClass<URayUtils>()
	{
		return URayUtils::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URayUtils);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URayUtils, URayUtils::StaticClass, TEXT("URayUtils"), &Z_Registration_Info_UClass_URayUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URayUtils), 1019294910U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_207111982(TEXT("/Script/RayStreamingForUE"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
