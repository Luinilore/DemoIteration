// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_OffHandWeaponGrip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_OffHandWeaponGrip() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FMIWeapon();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_OffHandWeaponGrip>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_OffHandWeaponGrip cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FAnimNode_OffHandWeaponGrip::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_OffHandWeaponGrip"), sizeof(FAnimNode_OffHandWeaponGrip), Get_Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_OffHandWeaponGrip>()
{
	return FAnimNode_OffHandWeaponGrip::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_OffHandWeaponGrip(FAnimNode_OffHandWeaponGrip::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_OffHandWeaponGrip"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_OffHandWeaponGrip
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_OffHandWeaponGrip()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_OffHandWeaponGrip>(FName(TEXT("AnimNode_OffHandWeaponGrip")));
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_OffHandWeaponGrip;
	struct Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponHandBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponHandBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffHandIKBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffHandIKBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Weapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Procedurally places the off-hand on a weapon\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_OffHandWeaponGrip.h" },
		{ "ToolTip", "Procedurally places the off-hand on a weapon" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_OffHandWeaponGrip>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_WeaponHandBone_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Bone holding weapon (not IK) */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_OffHandWeaponGrip.h" },
		{ "ToolTip", "Bone holding weapon (not IK)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_WeaponHandBone = { "WeaponHandBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_OffHandWeaponGrip, WeaponHandBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_WeaponHandBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_WeaponHandBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_OffHandIKBone_MetaData[] = {
		{ "Category", "IK" },
		{ "Comment", "/** Bone used for OffHand IK */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_OffHandWeaponGrip.h" },
		{ "ToolTip", "Bone used for OffHand IK" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_OffHandIKBone = { "OffHandIKBone", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_OffHandWeaponGrip, OffHandIKBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_OffHandIKBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_OffHandIKBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "OffHand" },
		{ "Comment", "/** Weapon character is currently holding */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_OffHandWeaponGrip.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Weapon character is currently holding" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_OffHandWeaponGrip, Weapon), Z_Construct_UScriptStruct_FMIWeapon, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_Weapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_Weapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_WeaponHandBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_OffHandIKBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::NewProp_Weapon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_OffHandWeaponGrip",
		sizeof(FAnimNode_OffHandWeaponGrip),
		alignof(FAnimNode_OffHandWeaponGrip),
		Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_OffHandWeaponGrip"), sizeof(FAnimNode_OffHandWeaponGrip), Get_Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip_Hash() { return 853376519U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
