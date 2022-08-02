// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef MOVEIT_MIPlayerCameraManager_generated_h
#error "MIPlayerCameraManager.generated.h already included, missing '#pragma once' in MIPlayerCameraManager.h"
#endif
#define MOVEIT_MIPlayerCameraManager_generated_h

#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_SPARSE_DATA
#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_RPC_WRAPPERS \
	virtual void OnFailSanityCheck_Implementation(); \
 \
	DECLARE_FUNCTION(execOnFailSanityCheck); \
	DECLARE_FUNCTION(execOnStopMontage); \
	DECLARE_FUNCTION(execOnStartMontage); \
	DECLARE_FUNCTION(execClearAnimInstance); \
	DECLARE_FUNCTION(execOnCharacterUpdated);


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnFailSanityCheck_Implementation(); \
 \
	DECLARE_FUNCTION(execOnFailSanityCheck); \
	DECLARE_FUNCTION(execOnStopMontage); \
	DECLARE_FUNCTION(execOnStartMontage); \
	DECLARE_FUNCTION(execClearAnimInstance); \
	DECLARE_FUNCTION(execOnCharacterUpdated);


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_EVENT_PARMS
#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_CALLBACK_WRAPPERS
#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMIPlayerCameraManager(); \
	friend struct Z_Construct_UClass_AMIPlayerCameraManager_Statics; \
public: \
	DECLARE_CLASS(AMIPlayerCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoveIt"), NO_API) \
	DECLARE_SERIALIZER(AMIPlayerCameraManager)


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAMIPlayerCameraManager(); \
	friend struct Z_Construct_UClass_AMIPlayerCameraManager_Statics; \
public: \
	DECLARE_CLASS(AMIPlayerCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MoveIt"), NO_API) \
	DECLARE_SERIALIZER(AMIPlayerCameraManager)


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMIPlayerCameraManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMIPlayerCameraManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMIPlayerCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMIPlayerCameraManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMIPlayerCameraManager(AMIPlayerCameraManager&&); \
	NO_API AMIPlayerCameraManager(const AMIPlayerCameraManager&); \
public:


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMIPlayerCameraManager(AMIPlayerCameraManager&&); \
	NO_API AMIPlayerCameraManager(const AMIPlayerCameraManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMIPlayerCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMIPlayerCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMIPlayerCameraManager)


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bInitialized() { return STRUCT_OFFSET(AMIPlayerCameraManager, bInitialized); } \
	FORCEINLINE static uint32 __PPO__DefaultViewYawMin() { return STRUCT_OFFSET(AMIPlayerCameraManager, DefaultViewYawMin); } \
	FORCEINLINE static uint32 __PPO__DefaultViewYawMax() { return STRUCT_OFFSET(AMIPlayerCameraManager, DefaultViewYawMax); } \
	FORCEINLINE static uint32 __PPO__CurrentAnimInstance() { return STRUCT_OFFSET(AMIPlayerCameraManager, CurrentAnimInstance); }


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_15_PROLOG \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_EVENT_PARMS


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_SPARSE_DATA \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_RPC_WRAPPERS \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_CALLBACK_WRAPPERS \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_INCLASS \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_SPARSE_DATA \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_CALLBACK_WRAPPERS \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEIT_API UClass* StaticClass<class AMIPlayerCameraManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIPlayerCameraManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
