// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveItEditorTools/Public/MITurnInPlaceTools.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMITurnInPlaceTools() {}
// Cross Module References
	MOVEITEDITORTOOLS_API UClass* Z_Construct_UClass_UMITurnInPlaceTools_NoRegister();
	MOVEITEDITORTOOLS_API UClass* Z_Construct_UClass_UMITurnInPlaceTools();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	UPackage* Z_Construct_UPackage__Script_MoveItEditorTools();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMITurnInPlaceTools::execForceCloseAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceCloseAsset(Z_Param_Asset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMITurnInPlaceTools::execMarkDirty)
	{
		P_GET_OBJECT(UObject,Z_Param_DirtyObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MarkDirty(Z_Param_DirtyObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMITurnInPlaceTools::execExtractRootMotion)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_OBJECT(UAnimSequence,Z_Param_Anim);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->ExtractRootMotion(Z_Param_Time,Z_Param_Anim);
		P_NATIVE_END;
	}
	void UMITurnInPlaceTools::StaticRegisterNativesUMITurnInPlaceTools()
	{
		UClass* Class = UMITurnInPlaceTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExtractRootMotion", &UMITurnInPlaceTools::execExtractRootMotion },
			{ "ForceCloseAsset", &UMITurnInPlaceTools::execForceCloseAsset },
			{ "MarkDirty", &UMITurnInPlaceTools::execMarkDirty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMITurnInPlaceTools_ExtractRootMotion_Statics
	{
		struct MITurnInPlaceTools_eventExtractRootMotion_Parms
		{
			float Time;
			UAnimSequence* Anim;
			FTransform ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anim;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMITurnInPlaceTools_ExtractRootMotion_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MITurnInPlaceTools_eventExtractRootMotion_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMITurnInPlaceTools_ExtractRootMotion_Statics::NewProp_Anim = { "Anim", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MITurnInPlaceTools_eventExtractRootMotion_Parms, Anim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMITurnInPlaceTools_ExtractRootMotion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MITurnInPlaceTools_eventExtractRootMotion_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMITurnInPlaceTools_ExtractRootMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMITurnInPlaceTools_ExtractRootMotion_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMITurnInPlaceTools_ExtractRootMotion_Statics::NewProp_Anim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMITurnInPlaceTools_ExtractRootMotion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMITurnInPlaceTools_ExtractRootMotion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Public/MITurnInPlaceTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMITurnInPlaceTools_ExtractRootMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMITurnInPlaceTools, nullptr, "ExtractRootMotion", nullptr, nullptr, sizeof(MITurnInPlaceTools_eventExtractRootMotion_Parms), Z_Construct_UFunction_UMITurnInPlaceTools_ExtractRootMotion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMITurnInPlaceTools_ExtractRootMotion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMITurnInPlaceTools_ExtractRootMotion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMITurnInPlaceTools_ExtractRootMotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMITurnInPlaceTools_ExtractRootMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMITurnInPlaceTools_ExtractRootMotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMITurnInPlaceTools_ForceCloseAsset_Statics
	{
		struct MITurnInPlaceTools_eventForceCloseAsset_Parms
		{
			UObject* Asset;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMITurnInPlaceTools_ForceCloseAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MITurnInPlaceTools_eventForceCloseAsset_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMITurnInPlaceTools_ForceCloseAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMITurnInPlaceTools_ForceCloseAsset_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMITurnInPlaceTools_ForceCloseAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Public/MITurnInPlaceTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMITurnInPlaceTools_ForceCloseAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMITurnInPlaceTools, nullptr, "ForceCloseAsset", nullptr, nullptr, sizeof(MITurnInPlaceTools_eventForceCloseAsset_Parms), Z_Construct_UFunction_UMITurnInPlaceTools_ForceCloseAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMITurnInPlaceTools_ForceCloseAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMITurnInPlaceTools_ForceCloseAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMITurnInPlaceTools_ForceCloseAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMITurnInPlaceTools_ForceCloseAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMITurnInPlaceTools_ForceCloseAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMITurnInPlaceTools_MarkDirty_Statics
	{
		struct MITurnInPlaceTools_eventMarkDirty_Parms
		{
			UObject* DirtyObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DirtyObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMITurnInPlaceTools_MarkDirty_Statics::NewProp_DirtyObject = { "DirtyObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MITurnInPlaceTools_eventMarkDirty_Parms, DirtyObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMITurnInPlaceTools_MarkDirty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMITurnInPlaceTools_MarkDirty_Statics::NewProp_DirtyObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMITurnInPlaceTools_MarkDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Public/MITurnInPlaceTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMITurnInPlaceTools_MarkDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMITurnInPlaceTools, nullptr, "MarkDirty", nullptr, nullptr, sizeof(MITurnInPlaceTools_eventMarkDirty_Parms), Z_Construct_UFunction_UMITurnInPlaceTools_MarkDirty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMITurnInPlaceTools_MarkDirty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMITurnInPlaceTools_MarkDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMITurnInPlaceTools_MarkDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMITurnInPlaceTools_MarkDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMITurnInPlaceTools_MarkDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMITurnInPlaceTools_NoRegister()
	{
		return UMITurnInPlaceTools::StaticClass();
	}
	struct Z_Construct_UClass_UMITurnInPlaceTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMITurnInPlaceTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveItEditorTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMITurnInPlaceTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMITurnInPlaceTools_ExtractRootMotion, "ExtractRootMotion" }, // 1397201746
		{ &Z_Construct_UFunction_UMITurnInPlaceTools_ForceCloseAsset, "ForceCloseAsset" }, // 1092502895
		{ &Z_Construct_UFunction_UMITurnInPlaceTools_MarkDirty, "MarkDirty" }, // 4269899579
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMITurnInPlaceTools_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MITurnInPlaceTools.h" },
		{ "ModuleRelativePath", "Public/MITurnInPlaceTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMITurnInPlaceTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMITurnInPlaceTools>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMITurnInPlaceTools_Statics::ClassParams = {
		&UMITurnInPlaceTools::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMITurnInPlaceTools_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMITurnInPlaceTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMITurnInPlaceTools()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMITurnInPlaceTools_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMITurnInPlaceTools, 1609579842);
	template<> MOVEITEDITORTOOLS_API UClass* StaticClass<UMITurnInPlaceTools>()
	{
		return UMITurnInPlaceTools::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMITurnInPlaceTools(Z_Construct_UClass_UMITurnInPlaceTools, &UMITurnInPlaceTools::StaticClass, TEXT("/Script/MoveItEditorTools"), TEXT("UMITurnInPlaceTools"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMITurnInPlaceTools);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
