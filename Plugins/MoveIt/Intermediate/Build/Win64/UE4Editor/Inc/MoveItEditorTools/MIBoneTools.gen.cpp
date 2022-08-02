// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveItEditorTools/Public/MIBoneTools.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIBoneTools() {}
// Cross Module References
	MOVEITEDITORTOOLS_API UClass* Z_Construct_UClass_UMIBoneTools_NoRegister();
	MOVEITEDITORTOOLS_API UClass* Z_Construct_UClass_UMIBoneTools();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	UPackage* Z_Construct_UPackage__Script_MoveItEditorTools();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMIBoneTools::execAddIKBones)
	{
		P_GET_OBJECT(UObject,Z_Param_SkeletalObject);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LeftFootName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RightFootName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LeftHandName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RightHandName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_IKPrefixName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_IKSuffixName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddIKBones(Z_Param_SkeletalObject,Z_Param_Out_LeftFootName,Z_Param_Out_RightFootName,Z_Param_Out_LeftHandName,Z_Param_Out_RightHandName,Z_Param_Out_IKPrefixName,Z_Param_Out_IKSuffixName);
		P_NATIVE_END;
	}
	void UMIBoneTools::StaticRegisterNativesUMIBoneTools()
	{
		UClass* Class = UMIBoneTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddIKBones", &UMIBoneTools::execAddIKBones },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics
	{
		struct MIBoneTools_eventAddIKBones_Parms
		{
			UObject* SkeletalObject;
			FName LeftFootName;
			FName RightFootName;
			FName LeftHandName;
			FName RightHandName;
			FName IKPrefixName;
			FName IKSuffixName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFootName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftFootName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFootName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightFootName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftHandName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightHandName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKPrefixName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_IKPrefixName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKSuffixName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_IKSuffixName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_SkeletalObject = { "SkeletalObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIBoneTools_eventAddIKBones_Parms, SkeletalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_LeftFootName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_LeftFootName = { "LeftFootName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIBoneTools_eventAddIKBones_Parms, LeftFootName), METADATA_PARAMS(Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_LeftFootName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_LeftFootName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_RightFootName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_RightFootName = { "RightFootName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIBoneTools_eventAddIKBones_Parms, RightFootName), METADATA_PARAMS(Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_RightFootName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_RightFootName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_LeftHandName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_LeftHandName = { "LeftHandName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIBoneTools_eventAddIKBones_Parms, LeftHandName), METADATA_PARAMS(Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_LeftHandName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_LeftHandName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_RightHandName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_RightHandName = { "RightHandName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIBoneTools_eventAddIKBones_Parms, RightHandName), METADATA_PARAMS(Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_RightHandName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_RightHandName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_IKPrefixName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_IKPrefixName = { "IKPrefixName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIBoneTools_eventAddIKBones_Parms, IKPrefixName), METADATA_PARAMS(Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_IKPrefixName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_IKPrefixName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_IKSuffixName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_IKSuffixName = { "IKSuffixName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIBoneTools_eventAddIKBones_Parms, IKSuffixName), METADATA_PARAMS(Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_IKSuffixName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_IKSuffixName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_SkeletalObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_LeftFootName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_RightFootName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_LeftHandName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_RightHandName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_IKPrefixName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::NewProp_IKSuffixName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "/**\n\x09 * @param SkeletalObject: Can be either a skeleton (will update all compatible meshes) or a single mesh\n\x09 */" },
		{ "CPP_Default_IKPrefixName", "ik_" },
		{ "CPP_Default_IKSuffixName", "" },
		{ "CPP_Default_LeftFootName", "foot_l" },
		{ "CPP_Default_LeftHandName", "hand_l" },
		{ "CPP_Default_RightFootName", "foot_r" },
		{ "CPP_Default_RightHandName", "hand_r" },
		{ "ModuleRelativePath", "Public/MIBoneTools.h" },
		{ "ToolTip", "@param SkeletalObject: Can be either a skeleton (will update all compatible meshes) or a single mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIBoneTools, nullptr, "AddIKBones", nullptr, nullptr, sizeof(MIBoneTools_eventAddIKBones_Parms), Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIBoneTools_AddIKBones()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMIBoneTools_AddIKBones_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMIBoneTools_NoRegister()
	{
		return UMIBoneTools::StaticClass();
	}
	struct Z_Construct_UClass_UMIBoneTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMIBoneTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveItEditorTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMIBoneTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMIBoneTools_AddIKBones, "AddIKBones" }, // 1205077951
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIBoneTools_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "MIBoneTools.h" },
		{ "ModuleRelativePath", "Public/MIBoneTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMIBoneTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMIBoneTools>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMIBoneTools_Statics::ClassParams = {
		&UMIBoneTools::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMIBoneTools_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMIBoneTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMIBoneTools()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMIBoneTools_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMIBoneTools, 3170283745);
	template<> MOVEITEDITORTOOLS_API UClass* StaticClass<UMIBoneTools>()
	{
		return UMIBoneTools::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMIBoneTools(Z_Construct_UClass_UMIBoneTools, &UMIBoneTools::StaticClass, TEXT("/Script/MoveItEditorTools"), TEXT("UMIBoneTools"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMIBoneTools);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
