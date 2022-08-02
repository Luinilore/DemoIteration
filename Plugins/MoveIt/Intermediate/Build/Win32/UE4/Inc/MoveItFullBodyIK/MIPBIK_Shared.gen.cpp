// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveItFullBodyIK/Public/MIPBIK_Shared.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIPBIK_Shared() {}
// Cross Module References
	MOVEITFULLBODYIK_API UEnum* Z_Construct_UEnum_MoveItFullBodyIK_EMIPBIKLimitType();
	UPackage* Z_Construct_UPackage__Script_MoveItFullBodyIK();
	MOVEITFULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FMIPBIKBoneSetting();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	static UEnum* EMIPBIKLimitType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MoveItFullBodyIK_EMIPBIKLimitType, Z_Construct_UPackage__Script_MoveItFullBodyIK(), TEXT("EMIPBIKLimitType"));
		}
		return Singleton;
	}
	template<> MOVEITFULLBODYIK_API UEnum* StaticEnum<EMIPBIKLimitType>()
	{
		return EMIPBIKLimitType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMIPBIKLimitType(EMIPBIKLimitType_StaticEnum, TEXT("/Script/MoveItFullBodyIK"), TEXT("EMIPBIKLimitType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MoveItFullBodyIK_EMIPBIKLimitType_Hash() { return 2934965342U; }
	UEnum* Z_Construct_UEnum_MoveItFullBodyIK_EMIPBIKLimitType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MoveItFullBodyIK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMIPBIKLimitType"), 0, Get_Z_Construct_UEnum_MoveItFullBodyIK_EMIPBIKLimitType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMIPBIKLimitType::Free", (int64)EMIPBIKLimitType::Free },
				{ "EMIPBIKLimitType::Limited", (int64)EMIPBIKLimitType::Limited },
				{ "EMIPBIKLimitType::Locked", (int64)EMIPBIKLimitType::Locked },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Free.Name", "EMIPBIKLimitType::Free" },
				{ "Limited.Name", "EMIPBIKLimitType::Limited" },
				{ "Locked.Name", "EMIPBIKLimitType::Locked" },
				{ "ModuleRelativePath", "Public/MIPBIK_Shared.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MoveItFullBodyIK,
				nullptr,
				"EMIPBIKLimitType",
				"EMIPBIKLimitType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMIPBIKBoneSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MOVEITFULLBODYIK_API uint32 Get_Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMIPBIKBoneSetting, Z_Construct_UPackage__Script_MoveItFullBodyIK(), TEXT("MIPBIKBoneSetting"), sizeof(FMIPBIKBoneSetting), Get_Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Hash());
	}
	return Singleton;
}
template<> MOVEITFULLBODYIK_API UScriptStruct* StaticStruct<FMIPBIKBoneSetting>()
{
	return FMIPBIKBoneSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMIPBIKBoneSetting(FMIPBIKBoneSetting::StaticStruct, TEXT("/Script/MoveItFullBodyIK"), TEXT("MIPBIKBoneSetting"), false, nullptr, nullptr);
static struct FScriptStruct_MoveItFullBodyIK_StaticRegisterNativesFMIPBIKBoneSetting
{
	FScriptStruct_MoveItFullBodyIK_StaticRegisterNativesFMIPBIKBoneSetting()
	{
		UScriptStruct::DeferCppStructOps<FMIPBIKBoneSetting>(FName(TEXT("MIPBIKBoneSetting")));
	}
} ScriptStruct_MoveItFullBodyIK_StaticRegisterNativesFMIPBIKBoneSetting;
	struct Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionStiffness;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_X_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxX;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Y_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxY;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Z_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Z;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePreferredAngles_MetaData[];
#endif
		static void NewProp_bUsePreferredAngles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePreferredAngles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreferredAngles_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreferredAngles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MIPBIK_Shared.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMIPBIKBoneSetting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_Bone_MetaData[] = {
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "ModuleRelativePath", "Public/MIPBIK_Shared.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIPBIKBoneSetting, Bone), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_RotationStiffness_MetaData[] = {
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MIPBIK_Shared.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_RotationStiffness = { "RotationStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIPBIKBoneSetting, RotationStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_RotationStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_RotationStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_PositionStiffness_MetaData[] = {
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MIPBIK_Shared.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_PositionStiffness = { "PositionStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIPBIKBoneSetting, PositionStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_PositionStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_PositionStiffness_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_X_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Public/MIPBIK_Shared.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIPBIKBoneSetting, X), Z_Construct_UEnum_MoveItFullBodyIK_EMIPBIKLimitType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MinX_MetaData[] = {
		{ "ClampMax", "0" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/MIPBIK_Shared.h" },
		{ "UIMax", "0.0" },
		{ "UIMin", "-180.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MinX = { "MinX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIPBIKBoneSetting, MinX), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MinX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MinX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MaxX_MetaData[] = {
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MIPBIK_Shared.h" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MaxX = { "MaxX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIPBIKBoneSetting, MaxX), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MaxX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MaxX_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_Y_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Public/MIPBIK_Shared.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIPBIKBoneSetting, Y), Z_Construct_UEnum_MoveItFullBodyIK_EMIPBIKLimitType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MinY_MetaData[] = {
		{ "ClampMax", "0" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/MIPBIK_Shared.h" },
		{ "UIMax", "0.0" },
		{ "UIMin", "-180.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MinY = { "MinY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIPBIKBoneSetting, MinY), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MinY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MinY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MaxY_MetaData[] = {
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MIPBIK_Shared.h" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MaxY = { "MaxY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIPBIKBoneSetting, MaxY), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MaxY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MaxY_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_Z_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_Z_MetaData[] = {
		{ "ModuleRelativePath", "Public/MIPBIK_Shared.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIPBIKBoneSetting, Z), Z_Construct_UEnum_MoveItFullBodyIK_EMIPBIKLimitType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_Z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MinZ_MetaData[] = {
		{ "ClampMax", "0" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/MIPBIK_Shared.h" },
		{ "UIMax", "0.0" },
		{ "UIMin", "-180.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MinZ = { "MinZ", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIPBIKBoneSetting, MinZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MinZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MinZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MaxZ_MetaData[] = {
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MIPBIK_Shared.h" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MaxZ = { "MaxZ", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIPBIKBoneSetting, MaxZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MaxZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MaxZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_bUsePreferredAngles_MetaData[] = {
		{ "ModuleRelativePath", "Public/MIPBIK_Shared.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_bUsePreferredAngles_SetBit(void* Obj)
	{
		((FMIPBIKBoneSetting*)Obj)->bUsePreferredAngles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_bUsePreferredAngles = { "bUsePreferredAngles", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMIPBIKBoneSetting), &Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_bUsePreferredAngles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_bUsePreferredAngles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_bUsePreferredAngles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_PreferredAngles_MetaData[] = {
		{ "ModuleRelativePath", "Public/MIPBIK_Shared.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_PreferredAngles = { "PreferredAngles", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMIPBIKBoneSetting, PreferredAngles), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_PreferredAngles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_PreferredAngles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_Bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_RotationStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_PositionStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_X_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MinX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MaxX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_Y_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MinY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MaxY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_Z_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MinZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_MaxZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_bUsePreferredAngles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::NewProp_PreferredAngles,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MoveItFullBodyIK,
		nullptr,
		&NewStructOps,
		"MIPBIKBoneSetting",
		sizeof(FMIPBIKBoneSetting),
		alignof(FMIPBIKBoneSetting),
		Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMIPBIKBoneSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_MoveItFullBodyIK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MIPBIKBoneSetting"), sizeof(FMIPBIKBoneSetting), Get_Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Hash() { return 1662257198U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
