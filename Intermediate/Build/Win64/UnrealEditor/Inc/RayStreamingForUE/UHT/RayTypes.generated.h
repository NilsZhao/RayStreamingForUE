// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RayTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERayTouchType : uint8;
#ifdef RAYSTREAMINGFORUE_RayTypes_generated_h
#error "RayTypes.generated.h already included, missing '#pragma once' in RayTypes.h"
#endif
#define RAYSTREAMINGFORUE_RayTypes_generated_h

#define FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRayKeyInput_Statics; \
	RAYSTREAMINGFORUE_API static class UScriptStruct* StaticStruct();


template<> RAYSTREAMINGFORUE_API UScriptStruct* StaticStruct<struct FRayKeyInput>();

#define FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRayCharInput_Statics; \
	RAYSTREAMINGFORUE_API static class UScriptStruct* StaticStruct();


template<> RAYSTREAMINGFORUE_API UScriptStruct* StaticStruct<struct FRayCharInput>();

#define FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRayMouseMoveInput_Statics; \
	RAYSTREAMINGFORUE_API static class UScriptStruct* StaticStruct();


template<> RAYSTREAMINGFORUE_API UScriptStruct* StaticStruct<struct FRayMouseMoveInput>();

#define FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRayMouseKeyInput_Statics; \
	RAYSTREAMINGFORUE_API static class UScriptStruct* StaticStruct();


template<> RAYSTREAMINGFORUE_API UScriptStruct* StaticStruct<struct FRayMouseKeyInput>();

#define FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRayMouseWheelInput_Statics; \
	RAYSTREAMINGFORUE_API static class UScriptStruct* StaticStruct();


template<> RAYSTREAMINGFORUE_API UScriptStruct* StaticStruct<struct FRayMouseWheelInput>();

#define FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRayTouchInput_Statics; \
	RAYSTREAMINGFORUE_API static class UScriptStruct* StaticStruct();


template<> RAYSTREAMINGFORUE_API UScriptStruct* StaticStruct<struct FRayTouchInput>();

#define FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_109_SPARSE_DATA
#define FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_109_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTouchCodeToType); \
	DECLARE_FUNCTION(execTouchTypeToCode);


#define FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTouchCodeToType); \
	DECLARE_FUNCTION(execTouchTypeToCode);


#define FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_109_ACCESSORS
#define FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURayTypes(); \
	friend struct Z_Construct_UClass_URayTypes_Statics; \
public: \
	DECLARE_CLASS(URayTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RayStreamingForUE"), NO_API) \
	DECLARE_SERIALIZER(URayTypes)


#define FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_109_INCLASS \
private: \
	static void StaticRegisterNativesURayTypes(); \
	friend struct Z_Construct_UClass_URayTypes_Statics; \
public: \
	DECLARE_CLASS(URayTypes, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RayStreamingForUE"), NO_API) \
	DECLARE_SERIALIZER(URayTypes)


#define FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_109_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URayTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URayTypes) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URayTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URayTypes); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URayTypes(URayTypes&&); \
	NO_API URayTypes(const URayTypes&); \
public: \
	NO_API virtual ~URayTypes();


#define FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_109_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URayTypes(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URayTypes(URayTypes&&); \
	NO_API URayTypes(const URayTypes&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URayTypes); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URayTypes); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URayTypes) \
	NO_API virtual ~URayTypes();


#define FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_106_PROLOG
#define FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_109_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_109_SPARSE_DATA \
	FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_109_RPC_WRAPPERS \
	FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_109_ACCESSORS \
	FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_109_INCLASS \
	FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_109_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_109_SPARSE_DATA \
	FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_109_ACCESSORS \
	FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_109_INCLASS_NO_PURE_DECLS \
	FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAYSTREAMINGFORUE_API UClass* StaticClass<class URayTypes>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UETestProject_eee_GO_WWW_RayStreamingForUE_HostProject_Plugins_RayStreamingForUE_Source_RayStreamingForUE_Public_RayTypes_h


#define FOREACH_ENUM_ERAYTOUCHTYPE(op) \
	op(ERayTouchType::TouchStart) \
	op(ERayTouchType::TouchMove) \
	op(ERayTouchType::TouchEnd) 

enum class ERayTouchType : uint8;
template<> struct TIsUEnumClass<ERayTouchType> { enum { Value = true }; };
template<> RAYSTREAMINGFORUE_API UEnum* StaticEnum<ERayTouchType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
