// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
#ifdef RAYSTREAMINGFORUE_RayUtils_generated_h
#error "RayUtils.generated.h already included, missing '#pragma once' in RayUtils.h"
#endif
#define RAYSTREAMINGFORUE_RayUtils_generated_h

#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_16_SPARSE_DATA
#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetViewportSize); \
	DECLARE_FUNCTION(execGetClientRectInScreen); \
	DECLARE_FUNCTION(execGetClientSizeInScreen); \
	DECLARE_FUNCTION(execGetSizeInScreen); \
	DECLARE_FUNCTION(execGetPositionInScreen); \
	DECLARE_FUNCTION(execGetWindowPosition); \
	DECLARE_FUNCTION(execMakeTouchType); \
	DECLARE_FUNCTION(execMakeInputEvent);


#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetViewportSize); \
	DECLARE_FUNCTION(execGetClientRectInScreen); \
	DECLARE_FUNCTION(execGetClientSizeInScreen); \
	DECLARE_FUNCTION(execGetSizeInScreen); \
	DECLARE_FUNCTION(execGetPositionInScreen); \
	DECLARE_FUNCTION(execGetWindowPosition); \
	DECLARE_FUNCTION(execMakeTouchType); \
	DECLARE_FUNCTION(execMakeInputEvent);


#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURayUtils(); \
	friend struct Z_Construct_UClass_URayUtils_Statics; \
public: \
	DECLARE_CLASS(URayUtils, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RayStreamingForUE"), NO_API) \
	DECLARE_SERIALIZER(URayUtils)


#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_16_INCLASS \
private: \
	static void StaticRegisterNativesURayUtils(); \
	friend struct Z_Construct_UClass_URayUtils_Statics; \
public: \
	DECLARE_CLASS(URayUtils, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RayStreamingForUE"), NO_API) \
	DECLARE_SERIALIZER(URayUtils)


#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URayUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URayUtils) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URayUtils); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URayUtils); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URayUtils(URayUtils&&); \
	NO_API URayUtils(const URayUtils&); \
public:


#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URayUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URayUtils(URayUtils&&); \
	NO_API URayUtils(const URayUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URayUtils); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URayUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URayUtils)


#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_16_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_12_PROLOG
#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_16_SPARSE_DATA \
	HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_16_RPC_WRAPPERS \
	HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_16_INCLASS \
	HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_16_SPARSE_DATA \
	HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_16_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAYSTREAMINGFORUE_API UClass* StaticClass<class URayUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
