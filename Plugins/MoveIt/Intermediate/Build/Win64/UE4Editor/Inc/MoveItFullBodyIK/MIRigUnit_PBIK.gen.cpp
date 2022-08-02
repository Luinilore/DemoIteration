// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveItFullBodyIK/Public/MIRigUnit_PBIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIRigUnit_PBIK() {}
// Cross Module References
	MOVEITFULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FMIRigUnit_PBIK();
	UPackage* Z_Construct_UPackage__Script_MoveItFullBodyIK();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	MOVEITFULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FMIPBIKEffector();
	MOVEITFULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FMIPBIKBoneSetting();
	MOVEITFULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FMIPBIKSolverSettings();
	MOVEITFULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FMIPBIKDebug();
	MOVEITFULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FMIPBIKSolver();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References

static_assert(std::is_polymorphic<FMIRigUnit_PBIK>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FMIRigUnit_PBIK cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

class UScriptStruct* FMIRigUnit_PBIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEITFULLBODYIK_API uint32 Get_Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIRigUnit_PBIK, Z_Construct_UPackage__Script_MoveItFullBodyIK(), TEXT("MIRigUnit_PBIK"), sizeof(FMIRigUnit_PBIK), Get_Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Hash());
		FRigVMRegistry::Get().Register(TEXT("FMIRigUnit_PBIK::Execute"), &FMIRigUnit_PBIK::RigVMExecute, Singleton);
	}
	return Singleton;
}
template<> MOVEITFULLBODYIK_API UScriptStruct* StaticStruct<FMIRigUnit_PBIK>()
{
	return FMIRigUnit_PBIK::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMIRigUnit_PBIK(FMIRigUnit_PBIK::StaticStruct, TEXT("/Script/MoveItFullBodyIK"), TEXT("MIRigUnit_PBIK"), false, nullptr, nullptr);
static struct FScriptStruct_MoveItFullBodyIK_StaticRegisterNativesFMIRigUnit_PBIK
{
	FScriptStruct_MoveItFullBodyIK_StaticRegisterNativesFMIRigUnit_PBIK()
	{
		UScriptStruct::DeferCppStructOps<FMIRigUnit_PBIK>(FName(TEXT("MIRigUnit_PBIK")));
	}
} ScriptStruct_MoveItFullBodyIK_StaticRegisterNativesFMIRigUnit_PBIK;
	struct Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Effectors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Effectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Effectors;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EffectorSolverIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectorSolverIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EffectorSolverIndices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Debug_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Debug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Solver_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Solver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "DisplayName", "MoveIt Full Body IK" },
		{ "Keywords", "Position Based, PBIK, IK, Full Body, Multi, Effector, N-Chain, FB. Taken from UE5 Early Access." },
		{ "ModuleRelativePath", "Public/MIRigUnit_PBIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIRigUnit_PBIK>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Root_MetaData[] = {
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/MIRigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIRigUnit_PBIK, Root), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Effectors_Inner = { "Effectors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMIPBIKEffector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Effectors_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/MIRigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Effectors = { "Effectors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIRigUnit_PBIK, Effectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Effectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Effectors_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_EffectorSolverIndices_Inner = { "EffectorSolverIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_EffectorSolverIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/MIRigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_EffectorSolverIndices = { "EffectorSolverIndices", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIRigUnit_PBIK, EffectorSolverIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_EffectorSolverIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_EffectorSolverIndices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_BoneSettings_Inner = { "BoneSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMIPBIKBoneSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_BoneSettings_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/MIRigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_BoneSettings = { "BoneSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIRigUnit_PBIK, BoneSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_BoneSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_BoneSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Settings_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/MIRigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIRigUnit_PBIK, Settings), Z_Construct_UScriptStruct_FMIPBIKSolverSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Debug_MetaData[] = {
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/MIRigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIRigUnit_PBIK, Debug), Z_Construct_UScriptStruct_FMIPBIKDebug, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Debug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Debug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Solver_MetaData[] = {
		{ "ModuleRelativePath", "Public/MIRigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Solver = { "Solver", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIRigUnit_PBIK, Solver), Z_Construct_UScriptStruct_FMIPBIKSolver, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Solver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Solver_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Effectors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Effectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_EffectorSolverIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_EffectorSolverIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_BoneSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_BoneSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Debug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::NewProp_Solver,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveItFullBodyIK,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"MIRigUnit_PBIK",
		sizeof(FMIRigUnit_PBIK),
		alignof(FMIRigUnit_PBIK),
		Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIRigUnit_PBIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveItFullBodyIK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MIRigUnit_PBIK"), sizeof(FMIRigUnit_PBIK), Get_Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Hash() { return 4287081917U; }

void FMIRigUnit_PBIK::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	FRigVMFixedArray<FMIPBIKEffector> Effectors_1_Array(Effectors);
	FRigVMByteArray EffectorSolverIndices_2_Array_Bytes;
	FRigVMDynamicArray<int32> EffectorSolverIndices_2_Array(EffectorSolverIndices_2_Array_Bytes);
	EffectorSolverIndices_2_Array.CopyFrom(EffectorSolverIndices);
	FRigVMFixedArray<FMIPBIKBoneSetting> BoneSettings_3_Array(BoneSettings);
	
    StaticExecute(
		RigVMExecuteContext,
		Root,
		Effectors_1_Array,
		EffectorSolverIndices_2_Array,
		BoneSettings_3_Array,
		Settings,
		Debug,
		Solver,
		ExecuteContext,
		Context
	);
	EffectorSolverIndices_2_Array.CopyTo(EffectorSolverIndices);
	
}

class UScriptStruct* FMIPBIKEffector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEITFULLBODYIK_API uint32 Get_Z_Construct_UScriptStruct_FMIPBIKEffector_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIPBIKEffector, Z_Construct_UPackage__Script_MoveItFullBodyIK(), TEXT("MIPBIKEffector"), sizeof(FMIPBIKEffector), Get_Z_Construct_UScriptStruct_FMIPBIKEffector_Hash());
	}
	return Singleton;
}
template<> MOVEITFULLBODYIK_API UScriptStruct* StaticStruct<FMIPBIKEffector>()
{
	return FMIPBIKEffector::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMIPBIKEffector(FMIPBIKEffector::StaticStruct, TEXT("/Script/MoveItFullBodyIK"), TEXT("MIPBIKEffector"), false, nullptr, nullptr);
static struct FScriptStruct_MoveItFullBodyIK_StaticRegisterNativesFMIPBIKEffector
{
	FScriptStruct_MoveItFullBodyIK_StaticRegisterNativesFMIPBIKEffector()
	{
		UScriptStruct::DeferCppStructOps<FMIPBIKEffector>(FName(TEXT("MIPBIKEffector")));
	}
} ScriptStruct_MoveItFullBodyIK_StaticRegisterNativesFMIPBIKEffector;
	struct Z_Construct_UScriptStruct_FMIPBIKEffector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Bone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OffsetAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrengthAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StrengthAlpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MIRigUnit_PBIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIPBIKEffector>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::NewProp_Bone_MetaData[] = {
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "ModuleRelativePath", "Public/MIRigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIPBIKEffector, Bone), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Public/MIRigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIPBIKEffector, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::NewProp_OffsetAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/MIRigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::NewProp_OffsetAlpha = { "OffsetAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIPBIKEffector, OffsetAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::NewProp_OffsetAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::NewProp_OffsetAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::NewProp_StrengthAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/MIRigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::NewProp_StrengthAlpha = { "StrengthAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIPBIKEffector, StrengthAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::NewProp_StrengthAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::NewProp_StrengthAlpha_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::NewProp_OffsetAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::NewProp_StrengthAlpha,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveItFullBodyIK,
		nullptr,
		&NewStructOps,
		"MIPBIKEffector",
		sizeof(FMIPBIKEffector),
		alignof(FMIPBIKEffector),
		Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIPBIKEffector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMIPBIKEffector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveItFullBodyIK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MIPBIKEffector"), sizeof(FMIPBIKEffector), Get_Z_Construct_UScriptStruct_FMIPBIKEffector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMIPBIKEffector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMIPBIKEffector_Hash() { return 2855595482U; }
class UScriptStruct* FMIPBIKDebug::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEITFULLBODYIK_API uint32 Get_Z_Construct_UScriptStruct_FMIPBIKDebug_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIPBIKDebug, Z_Construct_UPackage__Script_MoveItFullBodyIK(), TEXT("MIPBIKDebug"), sizeof(FMIPBIKDebug), Get_Z_Construct_UScriptStruct_FMIPBIKDebug_Hash());
	}
	return Singleton;
}
template<> MOVEITFULLBODYIK_API UScriptStruct* StaticStruct<FMIPBIKDebug>()
{
	return FMIPBIKDebug::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMIPBIKDebug(FMIPBIKDebug::StaticStruct, TEXT("/Script/MoveItFullBodyIK"), TEXT("MIPBIKDebug"), false, nullptr, nullptr);
static struct FScriptStruct_MoveItFullBodyIK_StaticRegisterNativesFMIPBIKDebug
{
	FScriptStruct_MoveItFullBodyIK_StaticRegisterNativesFMIPBIKDebug()
	{
		UScriptStruct::DeferCppStructOps<FMIPBIKDebug>(FName(TEXT("MIPBIKDebug")));
	}
} ScriptStruct_MoveItFullBodyIK_StaticRegisterNativesFMIPBIKDebug;
	struct Z_Construct_UScriptStruct_FMIPBIKDebug_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKDebug_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MIRigUnit_PBIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIPBIKDebug_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIPBIKDebug>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKDebug_Statics::NewProp_DrawScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/MIRigUnit_PBIK.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIPBIKDebug_Statics::NewProp_DrawScale = { "DrawScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIPBIKDebug, DrawScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKDebug_Statics::NewProp_DrawScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKDebug_Statics::NewProp_DrawScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKDebug_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "ModuleRelativePath", "Public/MIRigUnit_PBIK.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMIPBIKDebug_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((FMIPBIKDebug*)Obj)->bDrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMIPBIKDebug_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMIPBIKDebug), &Z_Construct_UScriptStruct_FMIPBIKDebug_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKDebug_Statics::NewProp_bDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKDebug_Statics::NewProp_bDrawDebug_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMIPBIKDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKDebug_Statics::NewProp_DrawScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKDebug_Statics::NewProp_bDrawDebug,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIPBIKDebug_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveItFullBodyIK,
		nullptr,
		&NewStructOps,
		"MIPBIKDebug",
		sizeof(FMIPBIKDebug),
		alignof(FMIPBIKDebug),
		Z_Construct_UScriptStruct_FMIPBIKDebug_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKDebug_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKDebug_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKDebug_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIPBIKDebug()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMIPBIKDebug_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveItFullBodyIK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MIPBIKDebug"), sizeof(FMIPBIKDebug), Get_Z_Construct_UScriptStruct_FMIPBIKDebug_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMIPBIKDebug_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMIPBIKDebug_Hash() { return 3338966654U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
