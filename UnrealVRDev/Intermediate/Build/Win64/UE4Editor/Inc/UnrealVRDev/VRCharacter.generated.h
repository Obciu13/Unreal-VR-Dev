// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALVRDEV_VRCharacter_generated_h
#error "VRCharacter.generated.h already included, missing '#pragma once' in VRCharacter.h"
#endif
#define UNREALVRDEV_VRCharacter_generated_h

#define UnrealVRDev_Source_UnrealVRDev_VRCharacter_h_12_SPARSE_DATA
#define UnrealVRDev_Source_UnrealVRDev_VRCharacter_h_12_RPC_WRAPPERS
#define UnrealVRDev_Source_UnrealVRDev_VRCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealVRDev_Source_UnrealVRDev_VRCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRCharacter(); \
	friend struct Z_Construct_UClass_AVRCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealVRDev"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacter)


#define UnrealVRDev_Source_UnrealVRDev_VRCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAVRCharacter(); \
	friend struct Z_Construct_UClass_AVRCharacter_Statics; \
public: \
	DECLARE_CLASS(AVRCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealVRDev"), NO_API) \
	DECLARE_SERIALIZER(AVRCharacter)


#define UnrealVRDev_Source_UnrealVRDev_VRCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRCharacter(AVRCharacter&&); \
	NO_API AVRCharacter(const AVRCharacter&); \
public:


#define UnrealVRDev_Source_UnrealVRDev_VRCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRCharacter(AVRCharacter&&); \
	NO_API AVRCharacter(const AVRCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVRCharacter)


#define UnrealVRDev_Source_UnrealVRDev_VRCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AVRCharacter, Camera); } \
	FORCEINLINE static uint32 __PPO__VRRoot() { return STRUCT_OFFSET(AVRCharacter, VRRoot); } \
	FORCEINLINE static uint32 __PPO__DestinationMarker() { return STRUCT_OFFSET(AVRCharacter, DestinationMarker); } \
	FORCEINLINE static uint32 __PPO__MaxTeleportDistance() { return STRUCT_OFFSET(AVRCharacter, MaxTeleportDistance); } \
	FORCEINLINE static uint32 __PPO__TeleportFadeTime() { return STRUCT_OFFSET(AVRCharacter, TeleportFadeTime); } \
	FORCEINLINE static uint32 __PPO__TeleportProjectionExtent() { return STRUCT_OFFSET(AVRCharacter, TeleportProjectionExtent); }


#define UnrealVRDev_Source_UnrealVRDev_VRCharacter_h_9_PROLOG
#define UnrealVRDev_Source_UnrealVRDev_VRCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealVRDev_Source_UnrealVRDev_VRCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealVRDev_Source_UnrealVRDev_VRCharacter_h_12_SPARSE_DATA \
	UnrealVRDev_Source_UnrealVRDev_VRCharacter_h_12_RPC_WRAPPERS \
	UnrealVRDev_Source_UnrealVRDev_VRCharacter_h_12_INCLASS \
	UnrealVRDev_Source_UnrealVRDev_VRCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealVRDev_Source_UnrealVRDev_VRCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealVRDev_Source_UnrealVRDev_VRCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealVRDev_Source_UnrealVRDev_VRCharacter_h_12_SPARSE_DATA \
	UnrealVRDev_Source_UnrealVRDev_VRCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealVRDev_Source_UnrealVRDev_VRCharacter_h_12_INCLASS_NO_PURE_DECLS \
	UnrealVRDev_Source_UnrealVRDev_VRCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALVRDEV_API UClass* StaticClass<class AVRCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealVRDev_Source_UnrealVRDev_VRCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
