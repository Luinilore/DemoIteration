// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveItEditor/Public/AnimGraphNode_OffHandWeaponGrip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_OffHandWeaponGrip() {}
// Cross Module References
	MOVEITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_OffHandWeaponGrip_NoRegister();
	MOVEITEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_OffHandWeaponGrip();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_MoveItEditor();
	MOVEIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip();
// End Cross Module References
	void UAnimGraphNode_OffHandWeaponGrip::StaticRegisterNativesUAnimGraphNode_OffHandWeaponGrip()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_OffHandWeaponGrip_NoRegister()
	{
		return UAnimGraphNode_OffHandWeaponGrip::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_OffHandWeaponGrip_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_OffHandWeaponGrip_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveItEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_OffHandWeaponGrip_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_OffHandWeaponGrip.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_OffHandWeaponGrip.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_OffHandWeaponGrip_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_OffHandWeaponGrip.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_OffHandWeaponGrip_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_OffHandWeaponGrip, Node), Z_Construct_UScriptStruct_FAnimNode_OffHandWeaponGrip, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_OffHandWeaponGrip_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_OffHandWeaponGrip_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_OffHandWeaponGrip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_OffHandWeaponGrip_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_OffHandWeaponGrip_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_OffHandWeaponGrip>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_OffHandWeaponGrip_Statics::ClassParams = {
		&UAnimGraphNode_OffHandWeaponGrip::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_OffHandWeaponGrip_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_OffHandWeaponGrip_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_OffHandWeaponGrip_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_OffHandWeaponGrip_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_OffHandWeaponGrip()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_OffHandWeaponGrip_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_OffHandWeaponGrip, 7956525);
	template<> MOVEITEDITOR_API UClass* StaticClass<UAnimGraphNode_OffHandWeaponGrip>()
	{
		return UAnimGraphNode_OffHandWeaponGrip::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_OffHandWeaponGrip(Z_Construct_UClass_UAnimGraphNode_OffHandWeaponGrip, &UAnimGraphNode_OffHandWeaponGrip::StaticClass, TEXT("/Script/MoveItEditor"), TEXT("UAnimGraphNode_OffHandWeaponGrip"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_OffHandWeaponGrip);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
