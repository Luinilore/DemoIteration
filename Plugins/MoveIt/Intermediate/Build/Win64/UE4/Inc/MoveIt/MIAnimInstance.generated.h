// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPhysicalMaterial;
struct FVector;
struct FRotator;
#ifdef MOVEIT_MIAnimInstance_generated_h
#error "MIAnimInstance.generated.h already included, missing '#pragma once' in MIAnimInstance.h"
#endif
#define MOVEIT_MIAnimInstance_generated_h

#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMISurfaceImpact_Statics; \
	MOVEIT_API static class UScriptStruct* StaticStruct();


template<> MOVEIT_API UScriptStruct* StaticStruct<struct FMISurfaceImpact>();

#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_16_DELEGATE \
struct _Script_MoveIt_eventMIOnSurfaceImpact_Parms \
{ \
	FName BoneName; \
	UPhysicalMaterial* PhysMat; \
	FVector Location; \
	FRotator Rotation; \
	float BoneSpeed; \
}; \
static inline void FMIOnSurfaceImpact_DelegateWrapper(const FMulticastScriptDelegate& MIOnSurfaceImpact, FName BoneName, UPhysicalMaterial* PhysMat, FVector Location, FRotator Rotation, float BoneSpeed) \
{ \
	_Script_MoveIt_eventMIOnSurfaceImpact_Parms Parms; \
	Parms.BoneName=BoneName; \
	Parms.PhysMat=PhysMat; \
	Parms.Location=Location; \
	Parms.Rotation=Rotation; \
	Parms.BoneSpeed=BoneSpeed; \
	MIOnSurfaceImpact.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_SPARSE_DATA
#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_RPC_WRAPPERS \
	virtual bool ShouldDelayDirectionSwitch_Implementation() const; \
	virtual bool IsTurnInPlaceEnabled_Implementation(float& ResetRate) const; \
	virtual bool IsSprinting_Implementation() const; \
 \
	DECLARE_FUNCTION(execShouldDelayDirectionSwitch); \
	DECLARE_FUNCTION(execResetTurnInPlace); \
	DECLARE_FUNCTION(execIsTurnInPlaceEnabled); \
	DECLARE_FUNCTION(execIsSprinting); \
	DECLARE_FUNCTION(execStopTurn); \
	DECLARE_FUNCTION(execStartTurn); \
	DECLARE_FUNCTION(execIsValidToEvaluate); \
	DECLARE_FUNCTION(execComputeSurfaceImpacts);


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ShouldDelayDirectionSwitch_Implementation() const; \
	virtual bool IsTurnInPlaceEnabled_Implementation(float& ResetRate) const; \
	virtual bool IsSprinting_Implementation() const; \
 \
	DECLARE_FUNCTION(execShouldDelayDirectionSwitch); \
	DECLARE_FUNCTION(execResetTurnInPlace); \
	DECLARE_FUNCTION(execIsTurnInPlaceEnabled); \
	DECLARE_FUNCTION(execIsSprinting); \
	DECLARE_FUNCTION(execStopTurn); \
	DECLARE_FUNCTION(execStartTurn); \
	DECLARE_FUNCTION(execIsValidToEvaluate); \
	DECLARE_FUNCTION(execComputeSurfaceImpacts);


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_EVENT_PARMS \
	struct MIAnimInstance_eventIsSprinting_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MIAnimInstance_eventIsSprinting_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MIAnimInstance_eventIsTurnInPlaceEnabled_Parms \
	{ \
		float ResetRate; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MIAnimInstance_eventIsTurnInPlaceEnabled_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct MIAnimInstance_eventShouldDelayDirectionSwitch_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		MIAnimInstance_eventShouldDelayDirectionSwitch_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_CALLBACK_WRAPPERS
#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMIAnimInstance(); \
	friend struct Z_Construct_UClass_UMIAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMIAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MoveIt"), NO_API) \
	DECLARE_SERIALIZER(UMIAnimInstance)


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_INCLASS \
private: \
	static void StaticRegisterNativesUMIAnimInstance(); \
	friend struct Z_Construct_UClass_UMIAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMIAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MoveIt"), NO_API) \
	DECLARE_SERIALIZER(UMIAnimInstance)


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMIAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMIAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMIAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMIAnimInstance(UMIAnimInstance&&); \
	NO_API UMIAnimInstance(const UMIAnimInstance&); \
public:


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMIAnimInstance(UMIAnimInstance&&); \
	NO_API UMIAnimInstance(const UMIAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMIAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMIAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMIAnimInstance)


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_181_PROLOG \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_EVENT_PARMS


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_SPARSE_DATA \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_RPC_WRAPPERS \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_CALLBACK_WRAPPERS \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_INCLASS \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_SPARSE_DATA \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_CALLBACK_WRAPPERS \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h_184_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVEIT_API UClass* StaticClass<class UMIAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MoveIt_Source_MoveIt_Public_MIAnimInstance_h


#define FOREACH_ENUM_EMICALLBACKSETTING(op) \
	op(EMICallbackSetting::MICBS_None) \
	op(EMICallbackSetting::MICBS_Local) \
	op(EMICallbackSetting::MICBS_Simulated) \
	op(EMICallbackSetting::MICBS_ListenServer) 

enum class EMICallbackSetting : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EMICallbackSetting>();

#define FOREACH_ENUM_EMISURFACESTATETYPE(op) \
	op(EMISurfaceStateType::MIST_None) \
	op(EMISurfaceStateType::MIST_Default) \
	op(EMISurfaceStateType::MIST_Ragdoll) \
	op(EMISurfaceStateType::MIST_FloorSliding) 

enum class EMISurfaceStateType : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EMISurfaceStateType>();

#define FOREACH_ENUM_EMISTRAFEDIRECTIONBASIS(op) \
	op(EMIStrafeDirectionBasis::MISB_Acceleration) \
	op(EMIStrafeDirectionBasis::MISB_Velocity) 

enum class EMIStrafeDirectionBasis : uint8;
template<> MOVEIT_API UEnum* StaticEnum<EMIStrafeDirectionBasis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
