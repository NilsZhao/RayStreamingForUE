// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RayStreamingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URayStreamingComponent;
#ifdef RAYSTREAMINGFORUE_RayStreamingComponent_generated_h
#error "RayStreamingComponent.generated.h already included, missing '#pragma once' in RayStreamingComponent.h"
#endif
#define RAYSTREAMINGFORUE_RayStreamingComponent_generated_h

#define FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_13_DELEGATE \
RAYSTREAMINGFORUE_API void FOnConnectedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnConnectedSignature);


#define FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_14_DELEGATE \
RAYSTREAMINGFORUE_API void FOnConnectionErrorSignature_DelegateWrapper(const FMulticastScriptDelegate& OnConnectionErrorSignature, const FString& Error);


#define FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_15_DELEGATE \
RAYSTREAMINGFORUE_API void FOnClosedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnClosedSignature, int32 StatusCode, const FString& Reason, bool bWasClean);


#define FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_16_DELEGATE \
RAYSTREAMINGFORUE_API void FOnMessageSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMessageSignature, const FString& Message);


#define FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_17_DELEGATE \
RAYSTREAMINGFORUE_API void FOnRawMessageSignature_DelegateWrapper(const FMulticastScriptDelegate& OnRawMessageSignature, const TArray<uint8>& Data);


#define FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_18_DELEGATE \
RAYSTREAMINGFORUE_API void FOnMessageSentSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMessageSentSignature, const FString& MessageString);


#define FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_SPARSE_DATA
#define FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRegisteredStreamingComponent); \
	DECLARE_FUNCTION(execUnregisterRayStreamingComponent); \
	DECLARE_FUNCTION(execRegisterRayStreamingComponent); \
	DECLARE_FUNCTION(execIsRayStreamingComponentRegistered); \
	DECLARE_FUNCTION(execUnregisterConsoleCommand); \
	DECLARE_FUNCTION(execRegisterConsoleCommand); \
	DECLARE_FUNCTION(execSimulateInputMessage); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execSendData); \
	DECLARE_FUNCTION(execSendMessage); \
	DECLARE_FUNCTION(execConnectToUrl); \
	DECLARE_FUNCTION(execConnectTo3dcat);


#define FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_ACCESSORS
#define FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURayStreamingComponent(); \
	friend struct Z_Construct_UClass_URayStreamingComponent_Statics; \
public: \
	DECLARE_CLASS(URayStreamingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RayStreamingForUE"), NO_API) \
	DECLARE_SERIALIZER(URayStreamingComponent)


#define FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URayStreamingComponent(URayStreamingComponent&&); \
	NO_API URayStreamingComponent(const URayStreamingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URayStreamingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URayStreamingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URayStreamingComponent)


#define FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_21_PROLOG
#define FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_SPARSE_DATA \
	FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_ACCESSORS \
	FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_INCLASS_NO_PURE_DECLS \
	FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAYSTREAMINGFORUE_API UClass* StaticClass<class URayStreamingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RayvisionWebsocket_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
