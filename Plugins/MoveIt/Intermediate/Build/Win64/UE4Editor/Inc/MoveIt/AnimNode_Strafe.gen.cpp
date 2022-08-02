// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_Strafe.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Strafe() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Strafe();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIStrafeOrientation();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_Strafe>() == std::is_polymorphic<FAnimNode_LocalSkeletalControlBase>(), "USTRUCT FAnimNode_Strafe cannot be polymorphic unless super FAnimNode_LocalSkeletalControlBase is polymorphic");

class UScriptStruct* FAnimNode_Strafe::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Strafe_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Strafe, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_Strafe"), sizeof(FAnimNode_Strafe), Get_Z_Construct_UScriptStruct_FAnimNode_Strafe_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_Strafe>()
{
	return FAnimNode_Strafe::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_Strafe(FAnimNode_Strafe::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_Strafe"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_Strafe
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_Strafe()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_Strafe>(FName(TEXT("AnimNode_Strafe")));
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_Strafe;
	struct Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootIKRootBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootIKRootBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PelvisBone;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpineBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpineBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpineBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeadBones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Orientation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootOrientScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootOrientScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisOrientScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PelvisOrientScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyOrientScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BodyOrientScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadOrientScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadOrientScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Procedurally generates strafing animations by reorienting the feet and body\n *\x09""Applies intelligent logic from animation instance to change orientations\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
		{ "ToolTip", "Procedurally generates strafing animations by reorienting the feet and body\nApplies intelligent logic from animation instance to change orientations" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Strafe>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_FootIKRootBone_MetaData[] = {
		{ "Category", "Strafe" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_FootIKRootBone = { "FootIKRootBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Strafe, FootIKRootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_FootIKRootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_FootIKRootBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_PelvisBone_MetaData[] = {
		{ "Category", "Strafe" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_PelvisBone = { "PelvisBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Strafe, PelvisBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_PelvisBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_PelvisBone_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_SpineBones_Inner = { "SpineBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_SpineBones_MetaData[] = {
		{ "Category", "Strafe" },
		{ "Comment", "/** Optionally add spine bones. Result is averaged between all added bones. Add multiple of the same bone to give it more influence. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
		{ "ToolTip", "Optionally add spine bones. Result is averaged between all added bones. Add multiple of the same bone to give it more influence." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_SpineBones = { "SpineBones", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Strafe, SpineBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_SpineBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_SpineBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadBones_Inner = { "HeadBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadBones_MetaData[] = {
		{ "Category", "Strafe" },
		{ "Comment", "/** Optionally add head/neck bones. Result is averaged between all added bones. Add multiple of the same bone to give it more influence. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
		{ "ToolTip", "Optionally add head/neck bones. Result is averaged between all added bones. Add multiple of the same bone to give it more influence." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadBones = { "HeadBones", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Strafe, HeadBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadBones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Strafe" },
		{ "Comment", "/** Strafe direction, computed in MIAnimInstance */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Strafe direction, computed in MIAnimInstance" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Strafe, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Direction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Orientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "Strafe" },
		{ "Comment", "/** Strafe orientation, computed in MIAnimInstance */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Strafe orientation, computed in MIAnimInstance" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Strafe, Orientation), Z_Construct_UEnum_MoveIt_EMIStrafeOrientation, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_FootOrientScale_MetaData[] = {
		{ "Category", "Strafe" },
		{ "Comment", "/** Scaling for foot orientation */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Scaling for foot orientation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_FootOrientScale = { "FootOrientScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Strafe, FootOrientScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_FootOrientScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_FootOrientScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_PelvisOrientScale_MetaData[] = {
		{ "Category", "Strafe" },
		{ "Comment", "/** Scaling for pelvis orientation */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Scaling for pelvis orientation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_PelvisOrientScale = { "PelvisOrientScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Strafe, PelvisOrientScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_PelvisOrientScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_PelvisOrientScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_BodyOrientScale_MetaData[] = {
		{ "Category", "Strafe" },
		{ "Comment", "/** Scaling for body orientation */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Scaling for body orientation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_BodyOrientScale = { "BodyOrientScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Strafe, BodyOrientScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_BodyOrientScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_BodyOrientScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadOrientScale_MetaData[] = {
		{ "Category", "Strafe" },
		{ "Comment", "/** Scaling for head orientation */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Strafe.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Scaling for head orientation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadOrientScale = { "HeadOrientScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Strafe, HeadOrientScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadOrientScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadOrientScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_FootIKRootBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_PelvisBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_SpineBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_SpineBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Orientation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_FootOrientScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_PelvisOrientScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_BodyOrientScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::NewProp_HeadOrientScale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_LocalSkeletalControlBase,
		&NewStructOps,
		"AnimNode_Strafe",
		sizeof(FAnimNode_Strafe),
		alignof(FAnimNode_Strafe),
		Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Strafe()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Strafe_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_Strafe"), sizeof(FAnimNode_Strafe), Get_Z_Construct_UScriptStruct_FAnimNode_Strafe_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_Strafe_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Strafe_Hash() { return 3858305384U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
