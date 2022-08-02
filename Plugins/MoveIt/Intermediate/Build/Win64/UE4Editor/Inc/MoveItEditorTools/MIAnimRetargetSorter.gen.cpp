// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveItEditorTools/Public/MIAnimRetargetSorter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIAnimRetargetSorter() {}
// Cross Module References
	MOVEITEDITORTOOLS_API UClass* Z_Construct_UClass_UMIAnimRetargetSorter_NoRegister();
	MOVEITEDITORTOOLS_API UClass* Z_Construct_UClass_UMIAnimRetargetSorter();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	UPackage* Z_Construct_UPackage__Script_MoveItEditorTools();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UMIAnimRetargetSorter::execObjectInArrayHasClass)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Array);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ObjectInArrayHasClass(Z_Param_Out_Array,Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIAnimRetargetSorter::execArrangeRetargetedAnimations)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_GET_TARRAY(UObject*,Z_Param_SelectedObjects);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prefix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Suffix);
		P_GET_PROPERTY(FStrProperty,Z_Param_Replace);
		P_GET_PROPERTY(FStrProperty,Z_Param_ReplaceWith);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ArrangeRetargetedAnimations(Z_Param_Path,Z_Param_SelectedObjects,Z_Param_Prefix,Z_Param_Suffix,Z_Param_Replace,Z_Param_ReplaceWith);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMIAnimRetargetSorter::execGetSelectedDirectories)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetSelectedDirectories();
		P_NATIVE_END;
	}
	void UMIAnimRetargetSorter::StaticRegisterNativesUMIAnimRetargetSorter()
	{
		UClass* Class = UMIAnimRetargetSorter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ArrangeRetargetedAnimations", &UMIAnimRetargetSorter::execArrangeRetargetedAnimations },
			{ "GetSelectedDirectories", &UMIAnimRetargetSorter::execGetSelectedDirectories },
			{ "ObjectInArrayHasClass", &UMIAnimRetargetSorter::execObjectInArrayHasClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics
	{
		struct MIAnimRetargetSorter_eventArrangeRetargetedAnimations_Parms
		{
			FString Path;
			TArray<UObject*> SelectedObjects;
			FString Prefix;
			FString Suffix;
			FString Replace;
			FString ReplaceWith;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedObjects_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Prefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Replace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Replace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplaceWith_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReplaceWith;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIAnimRetargetSorter_eventArrangeRetargetedAnimations_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIAnimRetargetSorter_eventArrangeRetargetedAnimations_Parms, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_Prefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIAnimRetargetSorter_eventArrangeRetargetedAnimations_Parms, Prefix), METADATA_PARAMS(Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_Prefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_Suffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIAnimRetargetSorter_eventArrangeRetargetedAnimations_Parms, Suffix), METADATA_PARAMS(Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_Replace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_Replace = { "Replace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIAnimRetargetSorter_eventArrangeRetargetedAnimations_Parms, Replace), METADATA_PARAMS(Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_Replace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_Replace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_ReplaceWith_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_ReplaceWith = { "ReplaceWith", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIAnimRetargetSorter_eventArrangeRetargetedAnimations_Parms, ReplaceWith), METADATA_PARAMS(Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_ReplaceWith_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_ReplaceWith_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_Path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_SelectedObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_SelectedObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_Prefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_Suffix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_Replace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::NewProp_ReplaceWith,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Public/MIAnimRetargetSorter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimRetargetSorter, nullptr, "ArrangeRetargetedAnimations", nullptr, nullptr, sizeof(MIAnimRetargetSorter_eventArrangeRetargetedAnimations_Parms), Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimRetargetSorter_GetSelectedDirectories_Statics
	{
		struct MIAnimRetargetSorter_eventGetSelectedDirectories_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMIAnimRetargetSorter_GetSelectedDirectories_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMIAnimRetargetSorter_GetSelectedDirectories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIAnimRetargetSorter_eventGetSelectedDirectories_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIAnimRetargetSorter_GetSelectedDirectories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimRetargetSorter_GetSelectedDirectories_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimRetargetSorter_GetSelectedDirectories_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimRetargetSorter_GetSelectedDirectories_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Public/MIAnimRetargetSorter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimRetargetSorter_GetSelectedDirectories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimRetargetSorter, nullptr, "GetSelectedDirectories", nullptr, nullptr, sizeof(MIAnimRetargetSorter_eventGetSelectedDirectories_Parms), Z_Construct_UFunction_UMIAnimRetargetSorter_GetSelectedDirectories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimRetargetSorter_GetSelectedDirectories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimRetargetSorter_GetSelectedDirectories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimRetargetSorter_GetSelectedDirectories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimRetargetSorter_GetSelectedDirectories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMIAnimRetargetSorter_GetSelectedDirectories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics
	{
		struct MIAnimRetargetSorter_eventObjectInArrayHasClass_Parms
		{
			TArray<UObject*> Array;
			TSubclassOf<UObject>  Class;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIAnimRetargetSorter_eventObjectInArrayHasClass_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics::NewProp_Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIAnimRetargetSorter_eventObjectInArrayHasClass_Parms, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MIAnimRetargetSorter_eventObjectInArrayHasClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MIAnimRetargetSorter_eventObjectInArrayHasClass_Parms), &Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics::NewProp_Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Public/MIAnimRetargetSorter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMIAnimRetargetSorter, nullptr, "ObjectInArrayHasClass", nullptr, nullptr, sizeof(MIAnimRetargetSorter_eventObjectInArrayHasClass_Parms), Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMIAnimRetargetSorter_NoRegister()
	{
		return UMIAnimRetargetSorter::StaticClass();
	}
	struct Z_Construct_UClass_UMIAnimRetargetSorter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMIAnimRetargetSorter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveItEditorTools,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMIAnimRetargetSorter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMIAnimRetargetSorter_ArrangeRetargetedAnimations, "ArrangeRetargetedAnimations" }, // 315952885
		{ &Z_Construct_UFunction_UMIAnimRetargetSorter_GetSelectedDirectories, "GetSelectedDirectories" }, // 484343381
		{ &Z_Construct_UFunction_UMIAnimRetargetSorter_ObjectInArrayHasClass, "ObjectInArrayHasClass" }, // 952090729
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIAnimRetargetSorter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MIAnimRetargetSorter.h" },
		{ "ModuleRelativePath", "Public/MIAnimRetargetSorter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMIAnimRetargetSorter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMIAnimRetargetSorter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMIAnimRetargetSorter_Statics::ClassParams = {
		&UMIAnimRetargetSorter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMIAnimRetargetSorter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMIAnimRetargetSorter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMIAnimRetargetSorter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMIAnimRetargetSorter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMIAnimRetargetSorter, 786944639);
	template<> MOVEITEDITORTOOLS_API UClass* StaticClass<UMIAnimRetargetSorter>()
	{
		return UMIAnimRetargetSorter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMIAnimRetargetSorter(Z_Construct_UClass_UMIAnimRetargetSorter, &UMIAnimRetargetSorter::StaticClass, TEXT("/Script/MoveItEditorTools"), TEXT("UMIAnimRetargetSorter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMIAnimRetargetSorter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
