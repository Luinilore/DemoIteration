// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVEITFULLBODYIK_MIRigUnit_PBIK_generated_h
#error "MIRigUnit_PBIK.generated.h already included, missing '#pragma once' in MIRigUnit_PBIK.h"
#endif
#define MOVEITFULLBODYIK_MIRigUnit_PBIK_generated_h


#define FMIRigUnit_PBIK_Execute() \
	void FMIRigUnit_PBIK::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Root, \
		const FRigVMFixedArray<FMIPBIKEffector>& Effectors, \
		FRigVMDynamicArray<int32>& EffectorSolverIndices, \
		const FRigVMFixedArray<FMIPBIKBoneSetting>& BoneSettings, \
		const FMIPBIKSolverSettings& Settings, \
		const FMIPBIKDebug& Debug, \
		FMIPBIKSolver& Solver, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define HostProject_Plugins_MoveIt_Source_MoveItFullBodyIK_Public_MIRigUnit_PBIK_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMIRigUnit_PBIK_Statics; \
	MOVEITFULLBODYIK_API static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& Root, \
		const FRigVMFixedArray<FMIPBIKEffector>& Effectors, \
		FRigVMDynamicArray<int32>& EffectorSolverIndices, \
		const FRigVMFixedArray<FMIPBIKBoneSetting>& BoneSettings, \
		const FMIPBIKSolverSettings& Settings, \
		const FMIPBIKDebug& Debug, \
		FMIPBIKSolver& Solver, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& Root = *(FName*)RigVMMemoryHandles[0].GetData(); \
		FRigVMFixedArray<FMIPBIKEffector> Effectors((FMIPBIKEffector*)RigVMMemoryHandles[1].GetData(), reinterpret_cast<uint64>(RigVMMemoryHandles[2].GetData())); \
		FRigVMNestedByteArray& EffectorSolverIndices_3_Array = *(FRigVMNestedByteArray*)RigVMMemoryHandles[3].GetData(0, false); \
		EffectorSolverIndices_3_Array.SetNum(FMath::Max<int32>(RigVMExecuteContext.GetSlice().TotalNum(), EffectorSolverIndices_3_Array.Num())); \
		FRigVMDynamicArray<int32> EffectorSolverIndices(EffectorSolverIndices_3_Array[RigVMExecuteContext.GetSlice().GetIndex()]); \
		FRigVMFixedArray<FMIPBIKBoneSetting> BoneSettings((FMIPBIKBoneSetting*)RigVMMemoryHandles[4].GetData(), reinterpret_cast<uint64>(RigVMMemoryHandles[5].GetData())); \
		const FMIPBIKSolverSettings& Settings = *(FMIPBIKSolverSettings*)RigVMMemoryHandles[6].GetData(); \
		const FMIPBIKDebug& Debug = *(FMIPBIKDebug*)RigVMMemoryHandles[7].GetData(); \
		FRigVMDynamicArray<FMIPBIKSolver> Solver_8_Array(*((FRigVMByteArray*)RigVMMemoryHandles[8].GetData(0, false))); \
		Solver_8_Array.EnsureMinimumSize(RigVMExecuteContext.GetSlice().TotalNum()); \
		FMIPBIKSolver& Solver = Solver_8_Array[RigVMExecuteContext.GetSlice().GetIndex()]; \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[9].GetData(); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			Root, \
			Effectors, \
			EffectorSolverIndices, \
			BoneSettings, \
			Settings, \
			Debug, \
			Solver, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnit_HighlevelBaseMutable Super;


template<> MOVEITFULLBODYIK_API UScriptStruct* StaticStruct<struct FMIRigUnit_PBIK>();

#define HostProject_Plugins_MoveIt_Source_MoveItFullBodyIK_Public_MIRigUnit_PBIK_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMIPBIKEffector_Statics; \
	MOVEITFULLBODYIK_API static class UScriptStruct* StaticStruct();


template<> MOVEITFULLBODYIK_API UScriptStruct* StaticStruct<struct FMIPBIKEffector>();

#define HostProject_Plugins_MoveIt_Source_MoveItFullBodyIK_Public_MIRigUnit_PBIK_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMIPBIKDebug_Statics; \
	MOVEITFULLBODYIK_API static class UScriptStruct* StaticStruct();


template<> MOVEITFULLBODYIK_API UScriptStruct* StaticStruct<struct FMIPBIKDebug>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MoveIt_Source_MoveItFullBodyIK_Public_MIRigUnit_PBIK_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
