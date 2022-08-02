// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/MIPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIPlayerController() {}
// Cross Module References
	MOVEIT_API UClass* Z_Construct_UClass_AMIPlayerController_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_AMIPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	static FName NAME_AMIPlayerController_K2_SetPawn = FName(TEXT("K2_SetPawn"));
	void AMIPlayerController::K2_SetPawn(APawn* InPawn)
	{
		MIPlayerController_eventK2_SetPawn_Parms Parms;
		Parms.InPawn=InPawn;
		ProcessEvent(FindFunctionChecked(NAME_AMIPlayerController_K2_SetPawn),&Parms);
	}
	void AMIPlayerController::StaticRegisterNativesAMIPlayerController()
	{
	}
	struct Z_Construct_UFunction_AMIPlayerController_K2_SetPawn_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMIPlayerController_K2_SetPawn_Statics::NewProp_InPawn = { "InPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MIPlayerController_eventK2_SetPawn_Parms, InPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMIPlayerController_K2_SetPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMIPlayerController_K2_SetPawn_Statics::NewProp_InPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMIPlayerController_K2_SetPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** Called on all net roles that have a PlayerController whenever Pawn is changed */" },
		{ "DisplayName", "Set Pawn" },
		{ "ModuleRelativePath", "Public/MIPlayerController.h" },
		{ "ToolTip", "Called on all net roles that have a PlayerController whenever Pawn is changed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMIPlayerController_K2_SetPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMIPlayerController, nullptr, "K2_SetPawn", nullptr, nullptr, sizeof(MIPlayerController_eventK2_SetPawn_Parms), Z_Construct_UFunction_AMIPlayerController_K2_SetPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMIPlayerController_K2_SetPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMIPlayerController_K2_SetPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMIPlayerController_K2_SetPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMIPlayerController_K2_SetPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMIPlayerController_K2_SetPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMIPlayerController_NoRegister()
	{
		return AMIPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMIPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMIPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMIPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMIPlayerController_K2_SetPawn, "K2_SetPawn" }, // 317589748
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMIPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Exposes SetPawn event to Blueprint for use with MIPlayerCameraManager\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MIPlayerController.h" },
		{ "ModuleRelativePath", "Public/MIPlayerController.h" },
		{ "ToolTip", "Exposes SetPawn event to Blueprint for use with MIPlayerCameraManager" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMIPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMIPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMIPlayerController_Statics::ClassParams = {
		&AMIPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMIPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMIPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMIPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMIPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMIPlayerController, 18054865);
	template<> MOVEIT_API UClass* StaticClass<AMIPlayerController>()
	{
		return AMIPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMIPlayerController(Z_Construct_UClass_AMIPlayerController, &AMIPlayerController::StaticClass, TEXT("/Script/MoveIt"), TEXT("AMIPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMIPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
