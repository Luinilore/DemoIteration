// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/AnimNodes/AnimNode_Duck.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Duck() {}
// Cross Module References
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Duck();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_Duck>() == std::is_polymorphic<FAnimNode_AdditiveBlendSpace>(), "USTRUCT FAnimNode_Duck cannot be polymorphic unless super FAnimNode_AdditiveBlendSpace is polymorphic");

class UScriptStruct* FAnimNode_Duck::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEIT_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Duck_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Duck, Z_Construct_UPackage__Script_MoveIt(), TEXT("AnimNode_Duck"), sizeof(FAnimNode_Duck), Get_Z_Construct_UScriptStruct_FAnimNode_Duck_Hash());
	}
	return Singleton;
}
template<> MOVEIT_API UScriptStruct* StaticStruct<FAnimNode_Duck>()
{
	return FAnimNode_Duck::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_Duck(FAnimNode_Duck::StaticStruct, TEXT("/Script/MoveIt"), TEXT("AnimNode_Duck"), false, nullptr, nullptr);
static struct FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_Duck
{
	FScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_Duck()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_Duck>(FName(TEXT("AnimNode_Duck")));
	}
} ScriptStruct_MoveIt_StaticRegisterNativesFAnimNode_Duck;
	struct Z_Construct_UScriptStruct_FAnimNode_Duck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnticipationDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnticipationDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DuckRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DuckRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResetRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DuckTraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DuckTraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWorkOutsidePIE_MetaData[];
#endif
		static void NewProp_bWorkOutsidePIE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorkOutsidePIE;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09""Ducks under obstacles\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Duck.h" },
		{ "ToolTip", "Ducks under obstacles" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Duck>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_HalfHeight_MetaData[] = {
		{ "Category", "Duck" },
		{ "Comment", "/** Controls the ducking relative to the height of objects above character. Intended to be the original capsule half height but may need to play with it to get the results you want. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Duck.h" },
		{ "ToolTip", "Controls the ducking relative to the height of objects above character. Intended to be the original capsule half height but may need to play with it to get the results you want." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Duck, HalfHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_HalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_HalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_AnticipationDistance_MetaData[] = {
		{ "Category", "Duck" },
		{ "Comment", "/** How far to search ahead for obstacles that we're about to move under based on character's velocity. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Duck.h" },
		{ "ToolTip", "How far to search ahead for obstacles that we're about to move under based on character's velocity." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_AnticipationDistance = { "AnticipationDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Duck, AnticipationDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_AnticipationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_AnticipationDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_DuckRate_MetaData[] = {
		{ "Category", "Duck" },
		{ "Comment", "/** How fast to apply ducking */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Duck.h" },
		{ "ToolTip", "How fast to apply ducking" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_DuckRate = { "DuckRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Duck, DuckRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_DuckRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_DuckRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_ResetRate_MetaData[] = {
		{ "Category", "Duck" },
		{ "Comment", "/** How fast to remove ducking */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Duck.h" },
		{ "ToolTip", "How fast to remove ducking" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_ResetRate = { "ResetRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Duck, ResetRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_ResetRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_ResetRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_DuckTraceChannel_MetaData[] = {
		{ "Category", "Duck" },
		{ "Comment", "/** Channel to trace for foot IK */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Duck.h" },
		{ "ToolTip", "Channel to trace for foot IK" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_DuckTraceChannel = { "DuckTraceChannel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Duck, DuckTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_DuckTraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_DuckTraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_bWorkOutsidePIE_MetaData[] = {
		{ "Category", "Duck" },
		{ "Comment", "/** If true, will work during PIE which is useful for sequencer */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_Duck.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If true, will work during PIE which is useful for sequencer" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_bWorkOutsidePIE_SetBit(void* Obj)
	{
		((FAnimNode_Duck*)Obj)->bWorkOutsidePIE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_bWorkOutsidePIE = { "bWorkOutsidePIE", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_Duck), &Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_bWorkOutsidePIE_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_bWorkOutsidePIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_bWorkOutsidePIE_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_HalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_AnticipationDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_DuckRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_ResetRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_DuckTraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::NewProp_bWorkOutsidePIE,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
		Z_Construct_UScriptStruct_FAnimNode_AdditiveBlendSpace,
		&NewStructOps,
		"AnimNode_Duck",
		sizeof(FAnimNode_Duck),
		alignof(FAnimNode_Duck),
		Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Duck()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Duck_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_Duck"), sizeof(FAnimNode_Duck), Get_Z_Construct_UScriptStruct_FAnimNode_Duck_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_Duck_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Duck_Hash() { return 1801320261U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
