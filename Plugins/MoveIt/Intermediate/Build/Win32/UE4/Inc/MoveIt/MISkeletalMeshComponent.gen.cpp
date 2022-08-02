// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/MISkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMISkeletalMeshComponent() {}
// Cross Module References
	MOVEIT_API UClass* Z_Construct_UClass_UMISkeletalMeshComponent_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_UMISkeletalMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UClass* Z_Construct_UClass_AMICharacter_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_UMIAnimInstance_NoRegister();
// End Cross Module References
	void UMISkeletalMeshComponent::StaticRegisterNativesUMISkeletalMeshComponent()
	{
	}
	UClass* Z_Construct_UClass_UMISkeletalMeshComponent_NoRegister()
	{
		return UMISkeletalMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMISkeletalMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerCharacterOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerCharacterOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MIAnimScriptInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MIAnimScriptInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableTurnInPlaceOutsidePIE_MetaData[];
#endif
		static void NewProp_bEnableTurnInPlaceOutsidePIE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTurnInPlaceOutsidePIE;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMISkeletalMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISkeletalMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Skeletal mesh that applies MoveIt's TurnInPlace\n */" },
		{ "HideCategories", "Object Object Mobility Trigger" },
		{ "IncludePath", "MISkeletalMeshComponent.h" },
		{ "ModuleRelativePath", "Public/MISkeletalMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Skeletal mesh that applies MoveIt's TurnInPlace" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_ServerCharacterOwner_MetaData[] = {
		{ "Comment", "/** Valid on server only for updating replicated value */" },
		{ "ModuleRelativePath", "Public/MISkeletalMeshComponent.h" },
		{ "ToolTip", "Valid on server only for updating replicated value" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_ServerCharacterOwner = { "ServerCharacterOwner", nullptr, (EPropertyFlags)0x0010000400002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMISkeletalMeshComponent, ServerCharacterOwner), Z_Construct_UClass_AMICharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_ServerCharacterOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_ServerCharacterOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_MIAnimScriptInstance_MetaData[] = {
		{ "Comment", "/** The active animation graph program instance. */" },
		{ "ModuleRelativePath", "Public/MISkeletalMeshComponent.h" },
		{ "ToolTip", "The active animation graph program instance." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_MIAnimScriptInstance = { "MIAnimScriptInstance", nullptr, (EPropertyFlags)0x0010000400002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMISkeletalMeshComponent, MIAnimScriptInstance), Z_Construct_UClass_UMIAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_MIAnimScriptInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_MIAnimScriptInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_bEnableTurnInPlaceOutsidePIE_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** If true, will work during PIE which is useful for sequencer */" },
		{ "ModuleRelativePath", "Public/MISkeletalMeshComponent.h" },
		{ "ToolTip", "If true, will work during PIE which is useful for sequencer" },
	};
#endif
	void Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_bEnableTurnInPlaceOutsidePIE_SetBit(void* Obj)
	{
		((UMISkeletalMeshComponent*)Obj)->bEnableTurnInPlaceOutsidePIE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_bEnableTurnInPlaceOutsidePIE = { "bEnableTurnInPlaceOutsidePIE", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMISkeletalMeshComponent), &Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_bEnableTurnInPlaceOutsidePIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_bEnableTurnInPlaceOutsidePIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_bEnableTurnInPlaceOutsidePIE_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMISkeletalMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_ServerCharacterOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_MIAnimScriptInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISkeletalMeshComponent_Statics::NewProp_bEnableTurnInPlaceOutsidePIE,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMISkeletalMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMISkeletalMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMISkeletalMeshComponent_Statics::ClassParams = {
		&UMISkeletalMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMISkeletalMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMISkeletalMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMISkeletalMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMISkeletalMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMISkeletalMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMISkeletalMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMISkeletalMeshComponent, 3028922442);
	template<> MOVEIT_API UClass* StaticClass<UMISkeletalMeshComponent>()
	{
		return UMISkeletalMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMISkeletalMeshComponent(Z_Construct_UClass_UMISkeletalMeshComponent, &UMISkeletalMeshComponent::StaticClass, TEXT("/Script/MoveIt"), TEXT("UMISkeletalMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMISkeletalMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
