// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RayStreamingForUE/Public/RayStreamingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRayStreamingComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	RAYSTREAMINGFORUE_API UClass* Z_Construct_UClass_URayStreamingComponent();
	RAYSTREAMINGFORUE_API UClass* Z_Construct_UClass_URayStreamingComponent_NoRegister();
	RAYSTREAMINGFORUE_API UFunction* Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature();
	RAYSTREAMINGFORUE_API UFunction* Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectedSignature__DelegateSignature();
	RAYSTREAMINGFORUE_API UFunction* Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature();
	RAYSTREAMINGFORUE_API UFunction* Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature();
	RAYSTREAMINGFORUE_API UFunction* Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature();
	RAYSTREAMINGFORUE_API UFunction* Z_Construct_UDelegateFunction_RayStreamingForUE_OnRawMessageSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RayStreamingForUE();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectedSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RayStreamingForUE, nullptr, "OnConnectedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnConnectedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnConnectedSignature)
{
	OnConnectedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature_Statics
	{
		struct _Script_RayStreamingForUE_eventOnConnectionErrorSignature_Parms
		{
			FString Error;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature_Statics::NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RayStreamingForUE_eventOnConnectionErrorSignature_Parms, Error), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature_Statics::NewProp_Error_MetaData), Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature_Statics::NewProp_Error_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RayStreamingForUE, nullptr, "OnConnectionErrorSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature_Statics::_Script_RayStreamingForUE_eventOnConnectionErrorSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature_Statics::_Script_RayStreamingForUE_eventOnConnectionErrorSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnConnectionErrorSignature_DelegateWrapper(const FMulticastScriptDelegate& OnConnectionErrorSignature, const FString& Error)
{
	struct _Script_RayStreamingForUE_eventOnConnectionErrorSignature_Parms
	{
		FString Error;
	};
	_Script_RayStreamingForUE_eventOnConnectionErrorSignature_Parms Parms;
	Parms.Error=Error;
	OnConnectionErrorSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics
	{
		struct _Script_RayStreamingForUE_eventOnClosedSignature_Parms
		{
			int32 StatusCode;
			FString Reason;
			bool bWasClean;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_StatusCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
		static void NewProp_bWasClean_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasClean;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::NewProp_StatusCode = { "StatusCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RayStreamingForUE_eventOnClosedSignature_Parms, StatusCode), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RayStreamingForUE_eventOnClosedSignature_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::NewProp_Reason_MetaData), Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::NewProp_Reason_MetaData) };
	void Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::NewProp_bWasClean_SetBit(void* Obj)
	{
		((_Script_RayStreamingForUE_eventOnClosedSignature_Parms*)Obj)->bWasClean = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::NewProp_bWasClean = { "bWasClean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RayStreamingForUE_eventOnClosedSignature_Parms), &Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::NewProp_bWasClean_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::NewProp_StatusCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::NewProp_Reason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::NewProp_bWasClean,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RayStreamingForUE, nullptr, "OnClosedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::_Script_RayStreamingForUE_eventOnClosedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::_Script_RayStreamingForUE_eventOnClosedSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnClosedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnClosedSignature, int32 StatusCode, const FString& Reason, bool bWasClean)
{
	struct _Script_RayStreamingForUE_eventOnClosedSignature_Parms
	{
		int32 StatusCode;
		FString Reason;
		bool bWasClean;
	};
	_Script_RayStreamingForUE_eventOnClosedSignature_Parms Parms;
	Parms.StatusCode=StatusCode;
	Parms.Reason=Reason;
	Parms.bWasClean=bWasClean ? true : false;
	OnClosedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature_Statics
	{
		struct _Script_RayStreamingForUE_eventOnMessageSignature_Parms
		{
			FString Message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RayStreamingForUE_eventOnMessageSignature_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature_Statics::NewProp_Message_MetaData), Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature_Statics::NewProp_Message_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RayStreamingForUE, nullptr, "OnMessageSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature_Statics::_Script_RayStreamingForUE_eventOnMessageSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature_Statics::_Script_RayStreamingForUE_eventOnMessageSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMessageSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMessageSignature, const FString& Message)
{
	struct _Script_RayStreamingForUE_eventOnMessageSignature_Parms
	{
		FString Message;
	};
	_Script_RayStreamingForUE_eventOnMessageSignature_Parms Parms;
	Parms.Message=Message;
	OnMessageSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_RayStreamingForUE_OnRawMessageSignature__DelegateSignature_Statics
	{
		struct _Script_RayStreamingForUE_eventOnRawMessageSignature_Parms
		{
			TArray<uint8> Data;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RayStreamingForUE_OnRawMessageSignature__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_RayStreamingForUE_OnRawMessageSignature__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RayStreamingForUE_eventOnRawMessageSignature_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RayStreamingForUE_OnRawMessageSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayStreamingForUE_OnRawMessageSignature__DelegateSignature_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayStreamingForUE_OnRawMessageSignature__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayStreamingForUE_OnRawMessageSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RayStreamingForUE_OnRawMessageSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RayStreamingForUE, nullptr, "OnRawMessageSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RayStreamingForUE_OnRawMessageSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayStreamingForUE_OnRawMessageSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RayStreamingForUE_OnRawMessageSignature__DelegateSignature_Statics::_Script_RayStreamingForUE_eventOnRawMessageSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayStreamingForUE_OnRawMessageSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RayStreamingForUE_OnRawMessageSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayStreamingForUE_OnRawMessageSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RayStreamingForUE_OnRawMessageSignature__DelegateSignature_Statics::_Script_RayStreamingForUE_eventOnRawMessageSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RayStreamingForUE_OnRawMessageSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RayStreamingForUE_OnRawMessageSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRawMessageSignature_DelegateWrapper(const FMulticastScriptDelegate& OnRawMessageSignature, const TArray<uint8>& Data)
{
	struct _Script_RayStreamingForUE_eventOnRawMessageSignature_Parms
	{
		TArray<uint8> Data;
	};
	_Script_RayStreamingForUE_eventOnRawMessageSignature_Parms Parms;
	Parms.Data=Data;
	OnRawMessageSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature_Statics
	{
		struct _Script_RayStreamingForUE_eventOnMessageSentSignature_Parms
		{
			FString MessageString;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MessageString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature_Statics::NewProp_MessageString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature_Statics::NewProp_MessageString = { "MessageString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RayStreamingForUE_eventOnMessageSentSignature_Parms, MessageString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature_Statics::NewProp_MessageString_MetaData), Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature_Statics::NewProp_MessageString_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature_Statics::NewProp_MessageString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RayStreamingForUE, nullptr, "OnMessageSentSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature_Statics::_Script_RayStreamingForUE_eventOnMessageSentSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature_Statics::_Script_RayStreamingForUE_eventOnMessageSentSignature_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnMessageSentSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMessageSentSignature, const FString& MessageString)
{
	struct _Script_RayStreamingForUE_eventOnMessageSentSignature_Parms
	{
		FString MessageString;
	};
	_Script_RayStreamingForUE_eventOnMessageSentSignature_Parms Parms;
	Parms.MessageString=MessageString;
	OnMessageSentSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(URayStreamingComponent::execGetRegisteredStreamingComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URayStreamingComponent*>*)Z_Param__Result=P_THIS->GetRegisteredStreamingComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayStreamingComponent::execUnregisterRayStreamingComponent)
	{
		P_GET_OBJECT(URayStreamingComponent,Z_Param_RayComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterRayStreamingComponent(Z_Param_RayComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayStreamingComponent::execRegisterRayStreamingComponent)
	{
		P_GET_OBJECT(URayStreamingComponent,Z_Param_RayComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterRayStreamingComponent(Z_Param_RayComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayStreamingComponent::execIsRayStreamingComponentRegistered)
	{
		P_GET_OBJECT(URayStreamingComponent,Z_Param_RayComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRayStreamingComponentRegistered(Z_Param_RayComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayStreamingComponent::execUnregisterConsoleCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CommandName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterConsoleCommand(Z_Param_CommandName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayStreamingComponent::execRegisterConsoleCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CommandName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterConsoleCommand(Z_Param_CommandName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayStreamingComponent::execSimulateInputMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SimulateInputMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayStreamingComponent::execDisconnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disconnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayStreamingComponent::execSendData)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bIsBinary);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendData(Z_Param_Out_Data,Z_Param_bIsBinary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayStreamingComponent::execSendMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayStreamingComponent::execConnectToUrl)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectToUrl(Z_Param_NewUrl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URayStreamingComponent::execConnectTo3dcat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectTo3dcat();
		P_NATIVE_END;
	}
	void URayStreamingComponent::StaticRegisterNativesURayStreamingComponent()
	{
		UClass* Class = URayStreamingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectTo3dcat", &URayStreamingComponent::execConnectTo3dcat },
			{ "ConnectToUrl", &URayStreamingComponent::execConnectToUrl },
			{ "Disconnect", &URayStreamingComponent::execDisconnect },
			{ "GetRegisteredStreamingComponent", &URayStreamingComponent::execGetRegisteredStreamingComponent },
			{ "IsRayStreamingComponentRegistered", &URayStreamingComponent::execIsRayStreamingComponentRegistered },
			{ "RegisterConsoleCommand", &URayStreamingComponent::execRegisterConsoleCommand },
			{ "RegisterRayStreamingComponent", &URayStreamingComponent::execRegisterRayStreamingComponent },
			{ "SendData", &URayStreamingComponent::execSendData },
			{ "SendMessage", &URayStreamingComponent::execSendMessage },
			{ "SimulateInputMessage", &URayStreamingComponent::execSimulateInputMessage },
			{ "UnregisterConsoleCommand", &URayStreamingComponent::execUnregisterConsoleCommand },
			{ "UnregisterRayStreamingComponent", &URayStreamingComponent::execUnregisterRayStreamingComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URayStreamingComponent_ConnectTo3dcat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayStreamingComponent_ConnectTo3dcat_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayStreamingComponent_ConnectTo3dcat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayStreamingComponent, nullptr, "ConnectTo3dcat", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_ConnectTo3dcat_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayStreamingComponent_ConnectTo3dcat_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URayStreamingComponent_ConnectTo3dcat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayStreamingComponent_ConnectTo3dcat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayStreamingComponent_ConnectToUrl_Statics
	{
		struct RayStreamingComponent_eventConnectToUrl_Parms
		{
			FString NewUrl;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URayStreamingComponent_ConnectToUrl_Statics::NewProp_NewUrl = { "NewUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayStreamingComponent_eventConnectToUrl_Parms, NewUrl), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayStreamingComponent_ConnectToUrl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayStreamingComponent_ConnectToUrl_Statics::NewProp_NewUrl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayStreamingComponent_ConnectToUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayStreamingComponent_ConnectToUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayStreamingComponent, nullptr, "ConnectToUrl", nullptr, nullptr, Z_Construct_UFunction_URayStreamingComponent_ConnectToUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_ConnectToUrl_Statics::PropPointers), sizeof(Z_Construct_UFunction_URayStreamingComponent_ConnectToUrl_Statics::RayStreamingComponent_eventConnectToUrl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_ConnectToUrl_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayStreamingComponent_ConnectToUrl_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_ConnectToUrl_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URayStreamingComponent_ConnectToUrl_Statics::RayStreamingComponent_eventConnectToUrl_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URayStreamingComponent_ConnectToUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayStreamingComponent_ConnectToUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayStreamingComponent_Disconnect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayStreamingComponent_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayStreamingComponent_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayStreamingComponent, nullptr, "Disconnect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayStreamingComponent_Disconnect_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_URayStreamingComponent_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayStreamingComponent_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayStreamingComponent_GetRegisteredStreamingComponent_Statics
	{
		struct RayStreamingComponent_eventGetRegisteredStreamingComponent_Parms
		{
			TArray<URayStreamingComponent*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URayStreamingComponent_GetRegisteredStreamingComponent_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URayStreamingComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayStreamingComponent_GetRegisteredStreamingComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URayStreamingComponent_GetRegisteredStreamingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayStreamingComponent_eventGetRegisteredStreamingComponent_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_GetRegisteredStreamingComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_URayStreamingComponent_GetRegisteredStreamingComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayStreamingComponent_GetRegisteredStreamingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayStreamingComponent_GetRegisteredStreamingComponent_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayStreamingComponent_GetRegisteredStreamingComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayStreamingComponent_GetRegisteredStreamingComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayStreaming|Connector" },
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayStreamingComponent_GetRegisteredStreamingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayStreamingComponent, nullptr, "GetRegisteredStreamingComponent", nullptr, nullptr, Z_Construct_UFunction_URayStreamingComponent_GetRegisteredStreamingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_GetRegisteredStreamingComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_URayStreamingComponent_GetRegisteredStreamingComponent_Statics::RayStreamingComponent_eventGetRegisteredStreamingComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_GetRegisteredStreamingComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayStreamingComponent_GetRegisteredStreamingComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_GetRegisteredStreamingComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URayStreamingComponent_GetRegisteredStreamingComponent_Statics::RayStreamingComponent_eventGetRegisteredStreamingComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URayStreamingComponent_GetRegisteredStreamingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayStreamingComponent_GetRegisteredStreamingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered_Statics
	{
		struct RayStreamingComponent_eventIsRayStreamingComponentRegistered_Parms
		{
			URayStreamingComponent* RayComp;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RayComp;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered_Statics::NewProp_RayComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered_Statics::NewProp_RayComp = { "RayComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayStreamingComponent_eventIsRayStreamingComponentRegistered_Parms, RayComp), Z_Construct_UClass_URayStreamingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered_Statics::NewProp_RayComp_MetaData), Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered_Statics::NewProp_RayComp_MetaData) };
	void Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RayStreamingComponent_eventIsRayStreamingComponentRegistered_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RayStreamingComponent_eventIsRayStreamingComponentRegistered_Parms), &Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered_Statics::NewProp_RayComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayStreaming|Connector" },
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayStreamingComponent, nullptr, "IsRayStreamingComponentRegistered", nullptr, nullptr, Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered_Statics::PropPointers), sizeof(Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered_Statics::RayStreamingComponent_eventIsRayStreamingComponentRegistered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered_Statics::RayStreamingComponent_eventIsRayStreamingComponentRegistered_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayStreamingComponent_RegisterConsoleCommand_Statics
	{
		struct RayStreamingComponent_eventRegisterConsoleCommand_Parms
		{
			FString CommandName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommandName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayStreamingComponent_RegisterConsoleCommand_Statics::NewProp_CommandName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URayStreamingComponent_RegisterConsoleCommand_Statics::NewProp_CommandName = { "CommandName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayStreamingComponent_eventRegisterConsoleCommand_Parms, CommandName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_RegisterConsoleCommand_Statics::NewProp_CommandName_MetaData), Z_Construct_UFunction_URayStreamingComponent_RegisterConsoleCommand_Statics::NewProp_CommandName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayStreamingComponent_RegisterConsoleCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayStreamingComponent_RegisterConsoleCommand_Statics::NewProp_CommandName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayStreamingComponent_RegisterConsoleCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayStreamingComponent_RegisterConsoleCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayStreamingComponent, nullptr, "RegisterConsoleCommand", nullptr, nullptr, Z_Construct_UFunction_URayStreamingComponent_RegisterConsoleCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_RegisterConsoleCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_URayStreamingComponent_RegisterConsoleCommand_Statics::RayStreamingComponent_eventRegisterConsoleCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_RegisterConsoleCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayStreamingComponent_RegisterConsoleCommand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_RegisterConsoleCommand_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URayStreamingComponent_RegisterConsoleCommand_Statics::RayStreamingComponent_eventRegisterConsoleCommand_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URayStreamingComponent_RegisterConsoleCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayStreamingComponent_RegisterConsoleCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayStreamingComponent_RegisterRayStreamingComponent_Statics
	{
		struct RayStreamingComponent_eventRegisterRayStreamingComponent_Parms
		{
			URayStreamingComponent* RayComp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RayComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayStreamingComponent_RegisterRayStreamingComponent_Statics::NewProp_RayComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URayStreamingComponent_RegisterRayStreamingComponent_Statics::NewProp_RayComp = { "RayComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayStreamingComponent_eventRegisterRayStreamingComponent_Parms, RayComp), Z_Construct_UClass_URayStreamingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_RegisterRayStreamingComponent_Statics::NewProp_RayComp_MetaData), Z_Construct_UFunction_URayStreamingComponent_RegisterRayStreamingComponent_Statics::NewProp_RayComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayStreamingComponent_RegisterRayStreamingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayStreamingComponent_RegisterRayStreamingComponent_Statics::NewProp_RayComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayStreamingComponent_RegisterRayStreamingComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayStreaming|Connector" },
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayStreamingComponent_RegisterRayStreamingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayStreamingComponent, nullptr, "RegisterRayStreamingComponent", nullptr, nullptr, Z_Construct_UFunction_URayStreamingComponent_RegisterRayStreamingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_RegisterRayStreamingComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_URayStreamingComponent_RegisterRayStreamingComponent_Statics::RayStreamingComponent_eventRegisterRayStreamingComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_RegisterRayStreamingComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayStreamingComponent_RegisterRayStreamingComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_RegisterRayStreamingComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URayStreamingComponent_RegisterRayStreamingComponent_Statics::RayStreamingComponent_eventRegisterRayStreamingComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URayStreamingComponent_RegisterRayStreamingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayStreamingComponent_RegisterRayStreamingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayStreamingComponent_SendData_Statics
	{
		struct RayStreamingComponent_eventSendData_Parms
		{
			TArray<uint8> Data;
			bool bIsBinary;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static void NewProp_bIsBinary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBinary;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayStreamingComponent_eventSendData_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::NewProp_Data_MetaData), Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::NewProp_Data_MetaData) };
	void Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::NewProp_bIsBinary_SetBit(void* Obj)
	{
		((RayStreamingComponent_eventSendData_Parms*)Obj)->bIsBinary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::NewProp_bIsBinary = { "bIsBinary", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RayStreamingComponent_eventSendData_Parms), &Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::NewProp_bIsBinary_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RayStreamingComponent_eventSendData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RayStreamingComponent_eventSendData_Parms), &Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::NewProp_bIsBinary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayStreaming" },
		{ "CPP_Default_bIsBinary", "false" },
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayStreamingComponent, nullptr, "SendData", nullptr, nullptr, Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::PropPointers), sizeof(Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::RayStreamingComponent_eventSendData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::RayStreamingComponent_eventSendData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URayStreamingComponent_SendData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayStreamingComponent_SendData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayStreamingComponent_SendMessage_Statics
	{
		struct RayStreamingComponent_eventSendMessage_Parms
		{
			FString Message;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayStreamingComponent_SendMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URayStreamingComponent_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayStreamingComponent_eventSendMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_SendMessage_Statics::NewProp_Message_MetaData), Z_Construct_UFunction_URayStreamingComponent_SendMessage_Statics::NewProp_Message_MetaData) };
	void Z_Construct_UFunction_URayStreamingComponent_SendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RayStreamingComponent_eventSendMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URayStreamingComponent_SendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RayStreamingComponent_eventSendMessage_Parms), &Z_Construct_UFunction_URayStreamingComponent_SendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayStreamingComponent_SendMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayStreamingComponent_SendMessage_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayStreamingComponent_SendMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayStreamingComponent_SendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayStreamingComponent_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayStreamingComponent, nullptr, "SendMessage", nullptr, nullptr, Z_Construct_UFunction_URayStreamingComponent_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_SendMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_URayStreamingComponent_SendMessage_Statics::RayStreamingComponent_eventSendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_SendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayStreamingComponent_SendMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_SendMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URayStreamingComponent_SendMessage_Statics::RayStreamingComponent_eventSendMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URayStreamingComponent_SendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayStreamingComponent_SendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayStreamingComponent_SimulateInputMessage_Statics
	{
		struct RayStreamingComponent_eventSimulateInputMessage_Parms
		{
			FString Message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayStreamingComponent_SimulateInputMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URayStreamingComponent_SimulateInputMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayStreamingComponent_eventSimulateInputMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_SimulateInputMessage_Statics::NewProp_Message_MetaData), Z_Construct_UFunction_URayStreamingComponent_SimulateInputMessage_Statics::NewProp_Message_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayStreamingComponent_SimulateInputMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayStreamingComponent_SimulateInputMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayStreamingComponent_SimulateInputMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayStreamingComponent_SimulateInputMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayStreamingComponent, nullptr, "SimulateInputMessage", nullptr, nullptr, Z_Construct_UFunction_URayStreamingComponent_SimulateInputMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_SimulateInputMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_URayStreamingComponent_SimulateInputMessage_Statics::RayStreamingComponent_eventSimulateInputMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_SimulateInputMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayStreamingComponent_SimulateInputMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_SimulateInputMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URayStreamingComponent_SimulateInputMessage_Statics::RayStreamingComponent_eventSimulateInputMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URayStreamingComponent_SimulateInputMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayStreamingComponent_SimulateInputMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayStreamingComponent_UnregisterConsoleCommand_Statics
	{
		struct RayStreamingComponent_eventUnregisterConsoleCommand_Parms
		{
			FString CommandName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommandName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayStreamingComponent_UnregisterConsoleCommand_Statics::NewProp_CommandName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URayStreamingComponent_UnregisterConsoleCommand_Statics::NewProp_CommandName = { "CommandName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayStreamingComponent_eventUnregisterConsoleCommand_Parms, CommandName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_UnregisterConsoleCommand_Statics::NewProp_CommandName_MetaData), Z_Construct_UFunction_URayStreamingComponent_UnregisterConsoleCommand_Statics::NewProp_CommandName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayStreamingComponent_UnregisterConsoleCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayStreamingComponent_UnregisterConsoleCommand_Statics::NewProp_CommandName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayStreamingComponent_UnregisterConsoleCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayStreamingComponent_UnregisterConsoleCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayStreamingComponent, nullptr, "UnregisterConsoleCommand", nullptr, nullptr, Z_Construct_UFunction_URayStreamingComponent_UnregisterConsoleCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_UnregisterConsoleCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_URayStreamingComponent_UnregisterConsoleCommand_Statics::RayStreamingComponent_eventUnregisterConsoleCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_UnregisterConsoleCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayStreamingComponent_UnregisterConsoleCommand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_UnregisterConsoleCommand_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URayStreamingComponent_UnregisterConsoleCommand_Statics::RayStreamingComponent_eventUnregisterConsoleCommand_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URayStreamingComponent_UnregisterConsoleCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayStreamingComponent_UnregisterConsoleCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URayStreamingComponent_UnregisterRayStreamingComponent_Statics
	{
		struct RayStreamingComponent_eventUnregisterRayStreamingComponent_Parms
		{
			URayStreamingComponent* RayComp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RayComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RayComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayStreamingComponent_UnregisterRayStreamingComponent_Statics::NewProp_RayComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URayStreamingComponent_UnregisterRayStreamingComponent_Statics::NewProp_RayComp = { "RayComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RayStreamingComponent_eventUnregisterRayStreamingComponent_Parms, RayComp), Z_Construct_UClass_URayStreamingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_UnregisterRayStreamingComponent_Statics::NewProp_RayComp_MetaData), Z_Construct_UFunction_URayStreamingComponent_UnregisterRayStreamingComponent_Statics::NewProp_RayComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URayStreamingComponent_UnregisterRayStreamingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URayStreamingComponent_UnregisterRayStreamingComponent_Statics::NewProp_RayComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URayStreamingComponent_UnregisterRayStreamingComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "RayStreaming|Connector" },
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URayStreamingComponent_UnregisterRayStreamingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URayStreamingComponent, nullptr, "UnregisterRayStreamingComponent", nullptr, nullptr, Z_Construct_UFunction_URayStreamingComponent_UnregisterRayStreamingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_UnregisterRayStreamingComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_URayStreamingComponent_UnregisterRayStreamingComponent_Statics::RayStreamingComponent_eventUnregisterRayStreamingComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_UnregisterRayStreamingComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_URayStreamingComponent_UnregisterRayStreamingComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URayStreamingComponent_UnregisterRayStreamingComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URayStreamingComponent_UnregisterRayStreamingComponent_Statics::RayStreamingComponent_eventUnregisterRayStreamingComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URayStreamingComponent_UnregisterRayStreamingComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URayStreamingComponent_UnregisterRayStreamingComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URayStreamingComponent);
	UClass* Z_Construct_UClass_URayStreamingComponent_NoRegister()
	{
		return URayStreamingComponent::StaticClass();
	}
	struct Z_Construct_UClass_URayStreamingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConnectionError_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnectionError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnClosed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClosed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMessage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRawMessage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRawMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMessageSent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMessageSent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URayStreamingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RayStreamingForUE,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URayStreamingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URayStreamingComponent_ConnectTo3dcat, "ConnectTo3dcat" }, // 318121531
		{ &Z_Construct_UFunction_URayStreamingComponent_ConnectToUrl, "ConnectToUrl" }, // 1447964365
		{ &Z_Construct_UFunction_URayStreamingComponent_Disconnect, "Disconnect" }, // 2120139079
		{ &Z_Construct_UFunction_URayStreamingComponent_GetRegisteredStreamingComponent, "GetRegisteredStreamingComponent" }, // 980511226
		{ &Z_Construct_UFunction_URayStreamingComponent_IsRayStreamingComponentRegistered, "IsRayStreamingComponentRegistered" }, // 2692671045
		{ &Z_Construct_UFunction_URayStreamingComponent_RegisterConsoleCommand, "RegisterConsoleCommand" }, // 202516213
		{ &Z_Construct_UFunction_URayStreamingComponent_RegisterRayStreamingComponent, "RegisterRayStreamingComponent" }, // 3186277667
		{ &Z_Construct_UFunction_URayStreamingComponent_SendData, "SendData" }, // 3837386086
		{ &Z_Construct_UFunction_URayStreamingComponent_SendMessage, "SendMessage" }, // 1402647487
		{ &Z_Construct_UFunction_URayStreamingComponent_SimulateInputMessage, "SimulateInputMessage" }, // 161957649
		{ &Z_Construct_UFunction_URayStreamingComponent_UnregisterConsoleCommand, "UnregisterConsoleCommand" }, // 2600182354
		{ &Z_Construct_UFunction_URayStreamingComponent_UnregisterRayStreamingComponent, "UnregisterRayStreamingComponent" }, // 180438961
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RayStreamingComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnConnected_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URayStreamingComponent, OnConnected), Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnConnected_MetaData), Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnConnected_MetaData) }; // 617132679
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnConnectionError_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnConnectionError = { "OnConnectionError", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URayStreamingComponent, OnConnectionError), Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnConnectionError_MetaData), Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnConnectionError_MetaData) }; // 2327248601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnClosed_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnClosed = { "OnClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URayStreamingComponent, OnClosed), Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnClosed_MetaData), Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnClosed_MetaData) }; // 3228269238
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnMessage_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnMessage = { "OnMessage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URayStreamingComponent, OnMessage), Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnMessage_MetaData), Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnMessage_MetaData) }; // 4025601280
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnRawMessage_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnRawMessage = { "OnRawMessage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URayStreamingComponent, OnRawMessage), Z_Construct_UDelegateFunction_RayStreamingForUE_OnRawMessageSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnRawMessage_MetaData), Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnRawMessage_MetaData) }; // 918924710
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnMessageSent_MetaData[] = {
		{ "Category", "RayStreaming" },
		{ "ModuleRelativePath", "Public/RayStreamingComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnMessageSent = { "OnMessageSent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URayStreamingComponent, OnMessageSent), Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnMessageSent_MetaData), Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnMessageSent_MetaData) }; // 3918521023
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URayStreamingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnConnectionError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnRawMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URayStreamingComponent_Statics::NewProp_OnMessageSent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URayStreamingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URayStreamingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URayStreamingComponent_Statics::ClassParams = {
		&URayStreamingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URayStreamingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URayStreamingComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URayStreamingComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URayStreamingComponent()
	{
		if (!Z_Registration_Info_UClass_URayStreamingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URayStreamingComponent.OuterSingleton, Z_Construct_UClass_URayStreamingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URayStreamingComponent.OuterSingleton;
	}
	template<> RAYSTREAMINGFORUE_API UClass* StaticClass<URayStreamingComponent>()
	{
		return URayStreamingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URayStreamingComponent);
	struct Z_CompiledInDeferFile_FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URayStreamingComponent, URayStreamingComponent::StaticClass, TEXT("URayStreamingComponent"), &Z_Registration_Info_UClass_URayStreamingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URayStreamingComponent), 1650804594U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_2276786212(TEXT("/Script/RayStreamingForUE"),
		Z_CompiledInDeferFile_FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
