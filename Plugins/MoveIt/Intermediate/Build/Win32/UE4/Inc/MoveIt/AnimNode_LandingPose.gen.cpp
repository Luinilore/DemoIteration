// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_LandingPose.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LandingPose() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LandingPose();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPredictProjectilePathResult();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_LandingPose>() == std::is_polymorphic<FAnimNode_AdditiveBlendSpace>(), "USTRUCT FAnimNode_LandingPose cannot be polymorphic unless super FAnimNode_AdditiveBlendSpace is polymorphic");

class UScriptStruct* FAnimNode_LandingPose::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LandingPose_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LandingPose, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_LandingPose"), sizeof(FAnimNode_LandingPose), Get_Z_Construct_UScriptStruct_FAnimNode_LandingPose_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_LandingPose>()
{
	return FAnimNode_LandingPose::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_LandingPose(FAnimNode_LandingPose::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_LandingPose"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_LandingPose
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_LandingPose()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_LandingPose>(FName(TEXT("AnimNode_LandingPose")));
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_LandingPose;
	struct Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictedLanding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredictedLanding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpStartZVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpStartZVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartMinDistFromGround_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartMinDistFromGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateralInterpUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LateralInterpUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LateralInterpDownRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LateralInterpDownRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWorkOutsidePIE_MetaData[];
#endif
		static void NewProp_bWorkOutsidePIE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorkOutsidePIE;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Predicts where the character will land and adapts pose based on distance to ground and movement direction\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingPose.h" },
		{ "ToolTip", "Predicts where the character will land and adapts pose based on distance to ground and movement direction" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LandingPose>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_PredictedLanding_MetaData[] = {
		{ "Category", "Land" },
		{ "Comment", "/** Predicted landing result calculated by MIAnimInstance */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingPose.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Predicted landing result calculated by MIAnimInstance" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_PredictedLanding = { "PredictedLanding", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingPose, PredictedLanding), Z_Construct_UScriptStruct_FPredictProjectilePathResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_PredictedLanding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_PredictedLanding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_JumpStartZVelocity_MetaData[] = {
		{ "Category", "Land" },
		{ "Comment", "/** Z Velocity must be less than this amount while in the air to begin landing */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingPose.h" },
		{ "ToolTip", "Z Velocity must be less than this amount while in the air to begin landing" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_JumpStartZVelocity = { "JumpStartZVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingPose, JumpStartZVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_JumpStartZVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_JumpStartZVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_StartMinDistFromGround_MetaData[] = {
		{ "Category", "Land" },
		{ "Comment", "/** Must be this close to ground to begin landing */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingPose.h" },
		{ "ToolTip", "Must be this close to ground to begin landing" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_StartMinDistFromGround = { "StartMinDistFromGround", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingPose, StartMinDistFromGround), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_StartMinDistFromGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_StartMinDistFromGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_LateralInterpUpRate_MetaData[] = {
		{ "Category", "Land" },
		{ "Comment", "/** How fast the lateral velocity interpolates going up - 0 for no interpolation */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingPose.h" },
		{ "ToolTip", "How fast the lateral velocity interpolates going up - 0 for no interpolation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_LateralInterpUpRate = { "LateralInterpUpRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingPose, LateralInterpUpRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_LateralInterpUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_LateralInterpUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_LateralInterpDownRate_MetaData[] = {
		{ "Category", "Land" },
		{ "Comment", "/** How fast the lateral velocity interpolates going down (to neutral pose) - 0 for no interpolation */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingPose.h" },
		{ "ToolTip", "How fast the lateral velocity interpolates going down (to neutral pose) - 0 for no interpolation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_LateralInterpDownRate = { "LateralInterpDownRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LandingPose, LateralInterpDownRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_LateralInterpDownRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_LateralInterpDownRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_bWorkOutsidePIE_MetaData[] = {
		{ "Category", "Land" },
		{ "Comment", "/** If true, will work during PIE which is useful for sequencer */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_LandingPose.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, will work during PIE which is useful for sequencer" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_bWorkOutsidePIE_SetBit(void* Obj)
	{
		((FAnimNode_LandingPose*)Obj)->bWorkOutsidePIE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_bWorkOutsidePIE = { "bWorkOutsidePIE", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_LandingPose), &Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_bWorkOutsidePIE_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_bWorkOutsidePIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_bWorkOutsidePIE_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_PredictedLanding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_JumpStartZVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_StartMinDistFromGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_LateralInterpUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_LateralInterpDownRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::NewProp_bWorkOutsidePIE,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace,
		&NewStructOps,
		"AnimNode_LandingPose",
		sizeof(FAnimNode_LandingPose),
		alignof(FAnimNode_LandingPose),
		Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LandingPose()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LandingPose_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_LandingPose"), sizeof(FAnimNode_LandingPose), Get_Z_Construct_UScriptStruct_FAnimNode_LandingPose_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_LandingPose_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LandingPose_Hash() { return 1571850474U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
