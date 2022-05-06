// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URayStreamingComponent;
#ifdef RAYSTREAMINGFORUE_RayStreamingComponent_generated_h
#error "RayStreamingComponent.generated.h already included, missing '#pragma once' in RayStreamingComponent.h"
#endif
#define RAYSTREAMINGFORUE_RayStreamingComponent_generated_h

#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_18_DELEGATE \
struct _Script_RayStreamingForUE_eventOnMessageSentSignature_Parms \
{ \
	FString MessageString; \
}; \
static inline void FOnMessageSentSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMessageSentSignature, const FString& MessageString) \
{ \
	_Script_RayStreamingForUE_eventOnMessageSentSignature_Parms Parms; \
	Parms.MessageString=MessageString; \
	OnMessageSentSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_17_DELEGATE \
struct _Script_RayStreamingForUE_eventOnRawMessageSignature_Parms \
{ \
	TArray<uint8> Data; \
}; \
static inline void FOnRawMessageSignature_DelegateWrapper(const FMulticastScriptDelegate& OnRawMessageSignature, const TArray<uint8>& Data) \
{ \
	_Script_RayStreamingForUE_eventOnRawMessageSignature_Parms Parms; \
	Parms.Data=Data; \
	OnRawMessageSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_16_DELEGATE \
struct _Script_RayStreamingForUE_eventOnMessageSignature_Parms \
{ \
	FString Message; \
}; \
static inline void FOnMessageSignature_DelegateWrapper(const FMulticastScriptDelegate& OnMessageSignature, const FString& Message) \
{ \
	_Script_RayStreamingForUE_eventOnMessageSignature_Parms Parms; \
	Parms.Message=Message; \
	OnMessageSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_15_DELEGATE \
struct _Script_RayStreamingForUE_eventOnClosedSignature_Parms \
{ \
	int32 StatusCode; \
	FString Reason; \
	bool bWasClean; \
}; \
static inline void FOnClosedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnClosedSignature, int32 StatusCode, const FString& Reason, bool bWasClean) \
{ \
	_Script_RayStreamingForUE_eventOnClosedSignature_Parms Parms; \
	Parms.StatusCode=StatusCode; \
	Parms.Reason=Reason; \
	Parms.bWasClean=bWasClean ? true : false; \
	OnClosedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_14_DELEGATE \
struct _Script_RayStreamingForUE_eventOnConnectionErrorSignature_Parms \
{ \
	FString Error; \
}; \
static inline void FOnConnectionErrorSignature_DelegateWrapper(const FMulticastScriptDelegate& OnConnectionErrorSignature, const FString& Error) \
{ \
	_Script_RayStreamingForUE_eventOnConnectionErrorSignature_Parms Parms; \
	Parms.Error=Error; \
	OnConnectionErrorSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_13_DELEGATE \
static inline void FOnConnectedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnConnectedSignature) \
{ \
	OnConnectedSignature.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_SPARSE_DATA
#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_RPC_WRAPPERS \
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


#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURayStreamingComponent(); \
	friend struct Z_Construct_UClass_URayStreamingComponent_Statics; \
public: \
	DECLARE_CLASS(URayStreamingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RayStreamingForUE"), NO_API) \
	DECLARE_SERIALIZER(URayStreamingComponent)


#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesURayStreamingComponent(); \
	friend struct Z_Construct_UClass_URayStreamingComponent_Statics; \
public: \
	DECLARE_CLASS(URayStreamingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RayStreamingForUE"), NO_API) \
	DECLARE_SERIALIZER(URayStreamingComponent)


#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URayStreamingComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URayStreamingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URayStreamingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URayStreamingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URayStreamingComponent(URayStreamingComponent&&); \
	NO_API URayStreamingComponent(const URayStreamingComponent&); \
public:


#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URayStreamingComponent(URayStreamingComponent&&); \
	NO_API URayStreamingComponent(const URayStreamingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URayStreamingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URayStreamingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URayStreamingComponent)


#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_21_PROLOG
#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_SPARSE_DATA \
	HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_RPC_WRAPPERS \
	HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_INCLASS \
	HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_SPARSE_DATA \
	HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAYSTREAMINGFORUE_API UClass* StaticClass<class URayStreamingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayStreamingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
