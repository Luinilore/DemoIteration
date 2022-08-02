// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_AimOffsetCompensation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AimOffsetCompensation() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_AimOffsetCompensation>() == std::is_polymorphic<FAnimNode_LocalSkeletalControlBase>(), "USTRUCT FAnimNode_AimOffsetCompensation cannot be polymorphic unless super FAnimNode_LocalSkeletalControlBase is polymorphic");

class UScriptStruct* FAnimNode_AimOffsetCompensation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_AimOffsetCompensation"), sizeof(FAnimNode_AimOffsetCompensation), Get_Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_AimOffsetCompensation>()
{
	return FAnimNode_AimOffsetCompensation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_AimOffsetCompensation(FAnimNode_AimOffsetCompensation::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_AimOffsetCompensation"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_AimOffsetCompensation
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_AimOffsetCompensation()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_AimOffsetCompensation>(FName(TEXT("AnimNode_AimOffsetCompensation")));
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_AimOffsetCompensation;
	struct Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AimAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Rotates bones to match the pose negated by Turn In Place so that Aim Offset lines up.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetCompensation.h" },
		{ "ToolTip", "Rotates bones to match the pose negated by Turn In Place so that Aim Offset lines up." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AimOffsetCompensation>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics::NewProp_Bones_MetaData[] = {
		{ "Category", "Aim Offset Compensation" },
		{ "Comment", "/** Which bones will be rotated to compensate for the turn in place */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetCompensation.h" },
		{ "ToolTip", "Which bones will be rotated to compensate for the turn in place" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AimOffsetCompensation, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics::NewProp_Bones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics::NewProp_Bones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics::NewProp_AimAxis_MetaData[] = {
		{ "Category", "Aim Offset Compensation" },
		{ "Comment", "/** The axis that the twist bones aim down (X by default) - changing this will change which axis compensates and should only be done for non-UE4 characters */" },
		{ "Hidden", "None" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetCompensation.h" },
		{ "ToolTip", "The axis that the twist bones aim down (X by default) - changing this will change which axis compensates and should only be done for non-UE4 characters" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics::NewProp_AimAxis = { "AimAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_AimOffsetCompensation, AimAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics::NewProp_AimAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics::NewProp_AimAxis_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics::NewProp_Bones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics::NewProp_Bones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics::NewProp_AimAxis,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase,
		&NewStructOps,
		"AnimNode_AimOffsetCompensation",
		sizeof(FAnimNode_AimOffsetCompensation),
		alignof(FAnimNode_AimOffsetCompensation),
		Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_AimOffsetCompensation"), sizeof(FAnimNode_AimOffsetCompensation), Get_Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_AimOffsetCompensation_Hash() { return 733828546U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
