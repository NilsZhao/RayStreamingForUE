// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRayStreamingForUE_init() {}
	RAYSTREAMINGFORUE_API UFunction* Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectedSignature__DelegateSignature();
	RAYSTREAMINGFORUE_API UFunction* Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature();
	RAYSTREAMINGFORUE_API UFunction* Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature();
	RAYSTREAMINGFORUE_API UFunction* Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature();
	RAYSTREAMINGFORUE_API UFunction* Z_Construct_UDelegateFunction_RayStreamingForUE_OnRawMessageSignature__DelegateSignature();
	RAYSTREAMINGFORUE_API UFunction* Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RayStreamingForUE()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RayStreamingForUE_OnConnectionErrorSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RayStreamingForUE_OnClosedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RayStreamingForUE_OnRawMessageSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_RayStreamingForUE_OnMessageSentSignature__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/RayStreamingForUE",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x83077FAB,
				0x6E71480D,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
