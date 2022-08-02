// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveItFullBodyIK/Public/MIPBIKSolver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIPBIKSolver() {}
// Cross Module References
	MOVEITFULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FMIPBIKSolver();
	UPackage* Z_Construct_UPackage__Script_MoveItFullBodyIK();
	MOVEITFULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FMIPBIKSolverSettings();
// End Cross Module References
class UScriptStruct* FMIPBIKSolver::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEITFULLBODYIK_API uint32 Get_Z_Construct_UScriptStruct_FMIPBIKSolver_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIPBIKSolver, Z_Construct_UPackage__Script_MoveItFullBodyIK(), TEXT("MIPBIKSolver"), sizeof(FMIPBIKSolver), Get_Z_Construct_UScriptStruct_FMIPBIKSolver_Hash());
	}
	return Singleton;
}
template<> MOVEITFULLBODYIK_API UScriptStruct* StaticStruct<FMIPBIKSolver>()
{
	return FMIPBIKSolver::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMIPBIKSolver(FMIPBIKSolver::StaticStruct, TEXT("/Script/MoveItFullBodyIK"), TEXT("MIPBIKSolver"), false, nullptr, nullptr);
static struct FScriptStruct_MoveItFullBodyIK_StaticRegisterNativesFMIPBIKSolver
{
	FScriptStruct_MoveItFullBodyIK_StaticRegisterNativesFMIPBIKSolver()
	{
		UScriptStruct::DeferCppStructOps<FMIPBIKSolver>(FName(TEXT("MIPBIKSolver")));
	}
} ScriptStruct_MoveItFullBodyIK_StaticRegisterNativesFMIPBIKSolver;
	struct Z_Construct_UScriptStruct_FMIPBIKSolver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKSolver_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MIPBIKSolver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIPBIKSolver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIPBIKSolver>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIPBIKSolver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveItFullBodyIK,
		nullptr,
		&NewStructOps,
		"MIPBIKSolver",
		sizeof(FMIPBIKSolver),
		alignof(FMIPBIKSolver),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKSolver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKSolver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIPBIKSolver()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMIPBIKSolver_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveItFullBodyIK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MIPBIKSolver"), sizeof(FMIPBIKSolver), Get_Z_Construct_UScriptStruct_FMIPBIKSolver_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMIPBIKSolver_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMIPBIKSolver_Hash() { return 1136190732U; }
class UScriptStruct* FMIPBIKSolverSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEITFULLBODYIK_API uint32 Get_Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIPBIKSolverSettings, Z_Construct_UPackage__Script_MoveItFullBodyIK(), TEXT("MIPBIKSolverSettings"), sizeof(FMIPBIKSolverSettings), Get_Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Hash());
	}
	return Singleton;
}
template<> MOVEITFULLBODYIK_API UScriptStruct* StaticStruct<FMIPBIKSolverSettings>()
{
	return FMIPBIKSolverSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMIPBIKSolverSettings(FMIPBIKSolverSettings::StaticStruct, TEXT("/Script/MoveItFullBodyIK"), TEXT("MIPBIKSolverSettings"), false, nullptr, nullptr);
static struct FScriptStruct_MoveItFullBodyIK_StaticRegisterNativesFMIPBIKSolverSettings
{
	FScriptStruct_MoveItFullBodyIK_StaticRegisterNativesFMIPBIKSolverSettings()
	{
		UScriptStruct::DeferCppStructOps<FMIPBIKSolverSettings>(FName(TEXT("MIPBIKSolverSettings")));
	}
} ScriptStruct_MoveItFullBodyIK_StaticRegisterNativesFMIPBIKSolverSettings;
	struct Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Iterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MassMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MassMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowStretch_MetaData[];
#endif
		static void NewProp_bAllowStretch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowStretch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPinRoot_MetaData[];
#endif
		static void NewProp_bPinRoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPinRoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// namespace\n" },
		{ "ModuleRelativePath", "Public/MIPBIKSolver.h" },
		{ "ToolTip", "namespace" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIPBIKSolverSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_Iterations_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MIPBIKSolver.h" },
		{ "UIMax", "200.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIPBIKSolverSettings, Iterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_Iterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_Iterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_MassMultiplier_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MIPBIKSolver.h" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_MassMultiplier = { "MassMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIPBIKSolverSettings, MassMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_MassMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_MassMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_bAllowStretch_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ModuleRelativePath", "Public/MIPBIKSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_bAllowStretch_SetBit(void* Obj)
	{
		((FMIPBIKSolverSettings*)Obj)->bAllowStretch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_bAllowStretch = { "bAllowStretch", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMIPBIKSolverSettings), &Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_bAllowStretch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_bAllowStretch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_bAllowStretch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_bPinRoot_MetaData[] = {
		{ "Category", "SolverSettings" },
		{ "ModuleRelativePath", "Public/MIPBIKSolver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_bPinRoot_SetBit(void* Obj)
	{
		((FMIPBIKSolverSettings*)Obj)->bPinRoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_bPinRoot = { "bPinRoot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMIPBIKSolverSettings), &Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_bPinRoot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_bPinRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_bPinRoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_Iterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_MassMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_bAllowStretch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::NewProp_bPinRoot,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveItFullBodyIK,
		nullptr,
		&NewStructOps,
		"MIPBIKSolverSettings",
		sizeof(FMIPBIKSolverSettings),
		alignof(FMIPBIKSolverSettings),
		Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIPBIKSolverSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveItFullBodyIK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MIPBIKSolverSettings"), sizeof(FMIPBIKSolverSettings), Get_Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMIPBIKSolverSettings_Hash() { return 365914205U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
