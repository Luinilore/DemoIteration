// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoveIt/Public/MISpringArmComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMISpringArmComponent() {}
// Cross Module References
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIInputSource();
	UPackage* Z_Construct_UPackage__Script_MoveIt();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIZoomType();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIOrbitVector();
	MOVEIT_API UEnum* Z_Construct_UEnum_MoveIt_EMIMovementOrbitType();
	MOVEIT_API UClass* Z_Construct_UClass_UMISpringArmComponent_NoRegister();
	MOVEIT_API UClass* Z_Construct_UClass_UMISpringArmComponent();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	static UEnum* EMIInputSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMIInputSource, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMIInputSource"));
		}
		return Singleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMIInputSource>()
	{
		return EMIInputSource_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMIInputSource(EMIInputSource_StaticEnum, TEXT("/Script/MoveIt"), TEXT("EMIInputSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MoveIt_EMIInputSource_Hash() { return 1035996229U; }
	UEnum* Z_Construct_UEnum_MoveIt_EMIInputSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMIInputSource"), 0, Get_Z_Construct_UEnum_MoveIt_EMIInputSource_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMIInputSource::IS_Character", (int64)EMIInputSource::IS_Character },
				{ "EMIInputSource::IS_PlayerController", (int64)EMIInputSource::IS_PlayerController },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IS_Character.DisplayName", "Character" },
				{ "IS_Character.Name", "EMIInputSource::IS_Character" },
				{ "IS_Character.ToolTip", "Get Input from the Character" },
				{ "IS_PlayerController.DisplayName", "Player Controller" },
				{ "IS_PlayerController.Name", "EMIInputSource::IS_PlayerController" },
				{ "IS_PlayerController.ToolTip", "Get Input from the PlayerController" },
				{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
				nullptr,
				"EMIInputSource",
				"EMIInputSource",
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
	static UEnum* EMIZoomType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMIZoomType, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMIZoomType"));
		}
		return Singleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMIZoomType>()
	{
		return EMIZoomType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMIZoomType(EMIZoomType_StaticEnum, TEXT("/Script/MoveIt"), TEXT("EMIZoomType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MoveIt_EMIZoomType_Hash() { return 3845595515U; }
	UEnum* Z_Construct_UEnum_MoveIt_EMIZoomType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMIZoomType"), 0, Get_Z_Construct_UEnum_MoveIt_EMIZoomType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMIZoomType::ZT_Disabled", (int64)EMIZoomType::ZT_Disabled },
				{ "EMIZoomType::ZT_Input", (int64)EMIZoomType::ZT_Input },
				{ "EMIZoomType::ZT_Curve", (int64)EMIZoomType::ZT_Curve },
				{ "EMIZoomType::ZT_Both", (int64)EMIZoomType::ZT_Both },
				{ "EMIZoomType::ZT_MAX", (int64)EMIZoomType::ZT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
				{ "ZT_Both.DisplayName", "Input and Curve" },
				{ "ZT_Both.Name", "EMIZoomType::ZT_Both" },
				{ "ZT_Both.ToolTip", "Zoom using input and curve" },
				{ "ZT_Curve.DisplayName", "Curve" },
				{ "ZT_Curve.Name", "EMIZoomType::ZT_Curve" },
				{ "ZT_Curve.ToolTip", "Zoom using curve" },
				{ "ZT_Disabled.DisplayName", "Disabled" },
				{ "ZT_Disabled.Name", "EMIZoomType::ZT_Disabled" },
				{ "ZT_Disabled.ToolTip", "Can not Zoom" },
				{ "ZT_Input.DisplayName", "Input" },
				{ "ZT_Input.Name", "EMIZoomType::ZT_Input" },
				{ "ZT_Input.ToolTip", "Zoom using input" },
				{ "ZT_MAX.Hidden", "" },
				{ "ZT_MAX.Name", "EMIZoomType::ZT_MAX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
				nullptr,
				"EMIZoomType",
				"EMIZoomType",
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
	static UEnum* EMIOrbitVector_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMIOrbitVector, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMIOrbitVector"));
		}
		return Singleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMIOrbitVector>()
	{
		return EMIOrbitVector_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMIOrbitVector(EMIOrbitVector_StaticEnum, TEXT("/Script/MoveIt"), TEXT("EMIOrbitVector"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MoveIt_EMIOrbitVector_Hash() { return 3235238588U; }
	UEnum* Z_Construct_UEnum_MoveIt_EMIOrbitVector()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMIOrbitVector"), 0, Get_Z_Construct_UEnum_MoveIt_EMIOrbitVector_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMIOrbitVector::OD_RightInput", (int64)EMIOrbitVector::OD_RightInput },
				{ "EMIOrbitVector::OD_FacingDirection", (int64)EMIOrbitVector::OD_FacingDirection },
				{ "EMIOrbitVector::OD_MAX", (int64)EMIOrbitVector::OD_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
				{ "OD_FacingDirection.DisplayName", "Facing Direction" },
				{ "OD_FacingDirection.Name", "EMIOrbitVector::OD_FacingDirection" },
				{ "OD_FacingDirection.ToolTip", "Orbit to the direction the character is facing" },
				{ "OD_MAX.Hidden", "" },
				{ "OD_MAX.Name", "EMIOrbitVector::OD_MAX" },
				{ "OD_RightInput.DisplayName", "Right Input" },
				{ "OD_RightInput.Name", "EMIOrbitVector::OD_RightInput" },
				{ "OD_RightInput.ToolTip", "Orbit to the direction of right input" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
				nullptr,
				"EMIOrbitVector",
				"EMIOrbitVector",
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
	static UEnum* EMIMovementOrbitType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MoveIt_EMIMovementOrbitType, Z_Construct_UPackage__Script_MoveIt(), TEXT("EMIMovementOrbitType"));
		}
		return Singleton;
	}
	template<> MOVEIT_API UEnum* StaticEnum<EMIMovementOrbitType>()
	{
		return EMIMovementOrbitType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMIMovementOrbitType(EMIMovementOrbitType_StaticEnum, TEXT("/Script/MoveIt"), TEXT("EMIMovementOrbitType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MoveIt_EMIMovementOrbitType_Hash() { return 1783841980U; }
	UEnum* Z_Construct_UEnum_MoveIt_EMIMovementOrbitType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MoveIt();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMIMovementOrbitType"), 0, Get_Z_Construct_UEnum_MoveIt_EMIMovementOrbitType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMIMovementOrbitType::MOT_Disabled", (int64)EMIMovementOrbitType::MOT_Disabled },
				{ "EMIMovementOrbitType::MOT_Acceleration", (int64)EMIMovementOrbitType::MOT_Acceleration },
				{ "EMIMovementOrbitType::MOT_Velocity", (int64)EMIMovementOrbitType::MOT_Velocity },
				{ "EMIMovementOrbitType::MOT_MAX", (int64)EMIMovementOrbitType::MOT_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
				{ "MOT_Acceleration.DisplayName", "Acceleration" },
				{ "MOT_Acceleration.Name", "EMIMovementOrbitType::MOT_Acceleration" },
				{ "MOT_Acceleration.ToolTip", "Orbit based on input" },
				{ "MOT_Disabled.DisplayName", "Disabled" },
				{ "MOT_Disabled.Name", "EMIMovementOrbitType::MOT_Disabled" },
				{ "MOT_Disabled.ToolTip", "Do not orbit" },
				{ "MOT_MAX.Hidden", "" },
				{ "MOT_MAX.Name", "EMIMovementOrbitType::MOT_MAX" },
				{ "MOT_Velocity.DisplayName", "Velocity" },
				{ "MOT_Velocity.Name", "EMIMovementOrbitType::MOT_Velocity" },
				{ "MOT_Velocity.ToolTip", "Orbit based on velocity" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MoveIt,
				nullptr,
				"EMIMovementOrbitType",
				"EMIMovementOrbitType",
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
	DEFINE_FUNCTION(UMISpringArmComponent::execZoomOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StepSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomOut(Z_Param_StepSize,Z_Param_ZoomRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMISpringArmComponent::execZoomIn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_StepSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ZoomRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomIn(Z_Param_StepSize,Z_Param_ZoomRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMISpringArmComponent::execOnCharacterLanded)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ZLagSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterLanded(Z_Param_ZLagSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMISpringArmComponent::execOnCharacterJumped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterJumped();
		P_NATIVE_END;
	}
	void UMISpringArmComponent::StaticRegisterNativesUMISpringArmComponent()
	{
		UClass* Class = UMISpringArmComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCharacterJumped", &UMISpringArmComponent::execOnCharacterJumped },
			{ "OnCharacterLanded", &UMISpringArmComponent::execOnCharacterLanded },
			{ "ZoomIn", &UMISpringArmComponent::execZoomIn },
			{ "ZoomOut", &UMISpringArmComponent::execZoomOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMISpringArmComponent_OnCharacterJumped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMISpringArmComponent_OnCharacterJumped_Statics::Function_MetaDataParams[] = {
		{ "Category", "MoveItCamera" },
		{ "Comment", "/** Tells the system the character jumped, required for Z Movement settings. Will enable camera lag! Settings are only updated if on ground */" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "ToolTip", "Tells the system the character jumped, required for Z Movement settings. Will enable camera lag! Settings are only updated if on ground" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMISpringArmComponent_OnCharacterJumped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMISpringArmComponent, nullptr, "OnCharacterJumped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMISpringArmComponent_OnCharacterJumped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMISpringArmComponent_OnCharacterJumped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMISpringArmComponent_OnCharacterJumped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMISpringArmComponent_OnCharacterJumped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMISpringArmComponent_OnCharacterLanded_Statics
	{
		struct MISpringArmComponent_eventOnCharacterLanded_Parms
		{
			float ZLagSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZLagSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMISpringArmComponent_OnCharacterLanded_Statics::NewProp_ZLagSpeed = { "ZLagSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MISpringArmComponent_eventOnCharacterLanded_Parms, ZLagSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMISpringArmComponent_OnCharacterLanded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMISpringArmComponent_OnCharacterLanded_Statics::NewProp_ZLagSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMISpringArmComponent_OnCharacterLanded_Statics::Function_MetaDataParams[] = {
		{ "Category", "MoveItCamera" },
		{ "Comment", "/* = 10.f */" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "ToolTip", "= 10.f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMISpringArmComponent_OnCharacterLanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMISpringArmComponent, nullptr, "OnCharacterLanded", nullptr, nullptr, sizeof(MISpringArmComponent_eventOnCharacterLanded_Parms), Z_Construct_UFunction_UMISpringArmComponent_OnCharacterLanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMISpringArmComponent_OnCharacterLanded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMISpringArmComponent_OnCharacterLanded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMISpringArmComponent_OnCharacterLanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMISpringArmComponent_OnCharacterLanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMISpringArmComponent_OnCharacterLanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMISpringArmComponent_ZoomIn_Statics
	{
		struct MISpringArmComponent_eventZoomIn_Parms
		{
			float StepSize;
			float ZoomRate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StepSize;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMISpringArmComponent_ZoomIn_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MISpringArmComponent_eventZoomIn_Parms, StepSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMISpringArmComponent_ZoomIn_Statics::NewProp_ZoomRate = { "ZoomRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MISpringArmComponent_eventZoomIn_Parms, ZoomRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMISpringArmComponent_ZoomIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMISpringArmComponent_ZoomIn_Statics::NewProp_StepSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMISpringArmComponent_ZoomIn_Statics::NewProp_ZoomRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMISpringArmComponent_ZoomIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "MoveItCamera" },
		{ "Comment", "// Zoom\n" },
		{ "CPP_Default_StepSize", "100.000000" },
		{ "CPP_Default_ZoomRate", "100.000000" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "ToolTip", "Zoom" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMISpringArmComponent_ZoomIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMISpringArmComponent, nullptr, "ZoomIn", nullptr, nullptr, sizeof(MISpringArmComponent_eventZoomIn_Parms), Z_Construct_UFunction_UMISpringArmComponent_ZoomIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMISpringArmComponent_ZoomIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMISpringArmComponent_ZoomIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMISpringArmComponent_ZoomIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMISpringArmComponent_ZoomIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMISpringArmComponent_ZoomIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMISpringArmComponent_ZoomOut_Statics
	{
		struct MISpringArmComponent_eventZoomOut_Parms
		{
			float StepSize;
			float ZoomRate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StepSize;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMISpringArmComponent_ZoomOut_Statics::NewProp_StepSize = { "StepSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MISpringArmComponent_eventZoomOut_Parms, StepSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMISpringArmComponent_ZoomOut_Statics::NewProp_ZoomRate = { "ZoomRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MISpringArmComponent_eventZoomOut_Parms, ZoomRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMISpringArmComponent_ZoomOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMISpringArmComponent_ZoomOut_Statics::NewProp_StepSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMISpringArmComponent_ZoomOut_Statics::NewProp_ZoomRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMISpringArmComponent_ZoomOut_Statics::Function_MetaDataParams[] = {
		{ "Category", "MoveItCamera" },
		{ "CPP_Default_StepSize", "100.000000" },
		{ "CPP_Default_ZoomRate", "100.000000" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMISpringArmComponent_ZoomOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMISpringArmComponent, nullptr, "ZoomOut", nullptr, nullptr, sizeof(MISpringArmComponent_eventZoomOut_Parms), Z_Construct_UFunction_UMISpringArmComponent_ZoomOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMISpringArmComponent_ZoomOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMISpringArmComponent_ZoomOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMISpringArmComponent_ZoomOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMISpringArmComponent_ZoomOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMISpringArmComponent_ZoomOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMISpringArmComponent_NoRegister()
	{
		return UMISpringArmComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMISpringArmComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableOrbit_MetaData[];
#endif
		static void NewProp_bEnableOrbit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableOrbit;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputSource_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveForwardAxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MoveForwardAxisName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRightAxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MoveRightAxisName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleByMoveForwardInput_MetaData[];
#endif
		static void NewProp_bScaleByMoveForwardInput_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleByMoveForwardInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOrbitWhenMovingForward_MetaData[];
#endif
		static void NewProp_bOrbitWhenMovingForward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOrbitWhenMovingForward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOrbitWhenMovingBackward_MetaData[];
#endif
		static void NewProp_bOrbitWhenMovingBackward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOrbitWhenMovingBackward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkForwardMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkForwardMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkBackwardMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkBackwardMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrbitRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitInterpRateWithInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrbitInterpRateWithInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrbitInterpRateNoInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OrbitInterpRateNoInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCameraMoveDuringJump_MetaData[];
#endif
		static void NewProp_bCameraMoveDuringJump_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCameraMoveDuringJump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchZLagThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SwitchZLagThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawLandingLagState_MetaData[];
#endif
		static void NewProp_bDrawLandingLagState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawLandingLagState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ZoomEnabled_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomEnabled_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ZoomEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTargetLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTargetLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTargetLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxTargetLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchToZoomCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchToZoomCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomCurveRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZoomCurveRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMISpringArmComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpringArmComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MoveIt,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMISpringArmComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMISpringArmComponent_OnCharacterJumped, "OnCharacterJumped" }, // 568701289
		{ &Z_Construct_UFunction_UMISpringArmComponent_OnCharacterLanded, "OnCharacterLanded" }, // 4210797598
		{ &Z_Construct_UFunction_UMISpringArmComponent_ZoomIn, "ZoomIn" }, // 964006036
		{ &Z_Construct_UFunction_UMISpringArmComponent_ZoomOut, "ZoomOut" }, // 3348473256
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Camera" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Mobility Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "MISpringArmComponent.h" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bEnableOrbit_MetaData[] = {
		{ "Category", "MoveItCamera|Orbit" },
		{ "Comment", "/** Make sure to look at example character to see how to use this - it will affect every spring arm otherwise! */" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "ToolTip", "Make sure to look at example character to see how to use this - it will affect every spring arm otherwise!" },
	};
#endif
	void Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bEnableOrbit_SetBit(void* Obj)
	{
		((UMISpringArmComponent*)Obj)->bEnableOrbit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bEnableOrbit = { "bEnableOrbit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMISpringArmComponent), &Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bEnableOrbit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bEnableOrbit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bEnableOrbit_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_InputSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_InputSource_MetaData[] = {
		{ "Category", "MoveItCamera|Orbit" },
		{ "Comment", "/** Whether to get the input from the character or the controller - if you are getting warning spam then you might need to change this! */" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "ToolTip", "Whether to get the input from the character or the controller - if you are getting warning spam then you might need to change this!" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_InputSource = { "InputSource", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMISpringArmComponent, InputSource), Z_Construct_UEnum_MoveIt_EMIInputSource, METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_InputSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_InputSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_MoveForwardAxisName_MetaData[] = {
		{ "Category", "MoveItCamera|Orbit" },
		{ "Comment", "/** The name of the input used to move forward */" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "ToolTip", "The name of the input used to move forward" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_MoveForwardAxisName = { "MoveForwardAxisName", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMISpringArmComponent, MoveForwardAxisName), METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_MoveForwardAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_MoveForwardAxisName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_MoveRightAxisName_MetaData[] = {
		{ "Category", "MoveItCamera|Orbit" },
		{ "Comment", "/** The name of the input used to move right */" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "ToolTip", "The name of the input used to move right" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_MoveRightAxisName = { "MoveRightAxisName", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMISpringArmComponent, MoveRightAxisName), METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_MoveRightAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_MoveRightAxisName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bScaleByMoveForwardInput_MetaData[] = {
		{ "Category", "MoveItCamera|Orbit" },
		{ "Comment", "/** If true, applying forward input dials back influence by right input */" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "ToolTip", "If true, applying forward input dials back influence by right input" },
	};
#endif
	void Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bScaleByMoveForwardInput_SetBit(void* Obj)
	{
		((UMISpringArmComponent*)Obj)->bScaleByMoveForwardInput = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bScaleByMoveForwardInput = { "bScaleByMoveForwardInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMISpringArmComponent), &Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bScaleByMoveForwardInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bScaleByMoveForwardInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bScaleByMoveForwardInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bOrbitWhenMovingForward_MetaData[] = {
		{ "Category", "MoveItCamera|Orbit" },
		{ "Comment", "/** If true, can orbit when moving forward */" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "ToolTip", "If true, can orbit when moving forward" },
	};
#endif
	void Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bOrbitWhenMovingForward_SetBit(void* Obj)
	{
		((UMISpringArmComponent*)Obj)->bOrbitWhenMovingForward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bOrbitWhenMovingForward = { "bOrbitWhenMovingForward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMISpringArmComponent), &Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bOrbitWhenMovingForward_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bOrbitWhenMovingForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bOrbitWhenMovingForward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bOrbitWhenMovingBackward_MetaData[] = {
		{ "Category", "MoveItCamera|Orbit" },
		{ "Comment", "/** If true, can orbit when moving backward */" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "ToolTip", "If true, can orbit when moving backward" },
	};
#endif
	void Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bOrbitWhenMovingBackward_SetBit(void* Obj)
	{
		((UMISpringArmComponent*)Obj)->bOrbitWhenMovingBackward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bOrbitWhenMovingBackward = { "bOrbitWhenMovingBackward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMISpringArmComponent), &Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bOrbitWhenMovingBackward_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bOrbitWhenMovingBackward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bOrbitWhenMovingBackward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_WalkForwardMultiplier_MetaData[] = {
		{ "Category", "MoveItCamera|Orbit" },
		{ "Comment", "/** Multiplier for walking forward to increase the scaling for bScaleByMoveForwardInput */" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "ToolTip", "Multiplier for walking forward to increase the scaling for bScaleByMoveForwardInput" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_WalkForwardMultiplier = { "WalkForwardMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMISpringArmComponent, WalkForwardMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_WalkForwardMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_WalkForwardMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_WalkBackwardMultiplier_MetaData[] = {
		{ "Category", "MoveItCamera|Orbit" },
		{ "Comment", "/** Multiplier for walking forward to increase the scaling for bScaleByMoveForwardInput (except when moving backwards) */" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "ToolTip", "Multiplier for walking forward to increase the scaling for bScaleByMoveForwardInput (except when moving backwards)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_WalkBackwardMultiplier = { "WalkBackwardMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMISpringArmComponent, WalkBackwardMultiplier), METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_WalkBackwardMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_WalkBackwardMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_OrbitRate_MetaData[] = {
		{ "Category", "MoveItCamera|Orbit" },
		{ "Comment", "/** Orbit moving camera around character at this rate */" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "ToolTip", "Orbit moving camera around character at this rate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_OrbitRate = { "OrbitRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMISpringArmComponent, OrbitRate), METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_OrbitRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_OrbitRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_OrbitInterpRateWithInput_MetaData[] = {
		{ "Category", "MoveItCamera|Orbit" },
		{ "Comment", "/** How fast orbit direction and speed changes when moving (has input). 0 for instant. */" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "ToolTip", "How fast orbit direction and speed changes when moving (has input). 0 for instant." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_OrbitInterpRateWithInput = { "OrbitInterpRateWithInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMISpringArmComponent, OrbitInterpRateWithInput), METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_OrbitInterpRateWithInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_OrbitInterpRateWithInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_OrbitInterpRateNoInput_MetaData[] = {
		{ "Category", "MoveItCamera|Orbit" },
		{ "Comment", "/** How fast orbit direction and speed changes when not moving (no input). 0 for instant. */" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "ToolTip", "How fast orbit direction and speed changes when not moving (no input). 0 for instant." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_OrbitInterpRateNoInput = { "OrbitInterpRateNoInput", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMISpringArmComponent, OrbitInterpRateNoInput), METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_OrbitInterpRateNoInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_OrbitInterpRateNoInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bCameraMoveDuringJump_MetaData[] = {
		{ "Category", "MoveItCamera|Static Jump" },
		{ "Comment", "/** If true won't move camera when character jumps unless delay passes and still going up */" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "ToolTip", "If true won't move camera when character jumps unless delay passes and still going up" },
	};
#endif
	void Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bCameraMoveDuringJump_SetBit(void* Obj)
	{
		((UMISpringArmComponent*)Obj)->bCameraMoveDuringJump = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bCameraMoveDuringJump = { "bCameraMoveDuringJump", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMISpringArmComponent), &Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bCameraMoveDuringJump_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bCameraMoveDuringJump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bCameraMoveDuringJump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_SwitchZLagThreshold_MetaData[] = {
		{ "Category", "MoveItCamera|Static Jump" },
		{ "Comment", "/** How close the lag needs to be to matching the Z height before it reverts to default Z lag */" },
		{ "EditCondition", "!bCameraMoveDuringJump" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "ToolTip", "How close the lag needs to be to matching the Z height before it reverts to default Z lag" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_SwitchZLagThreshold = { "SwitchZLagThreshold", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMISpringArmComponent, SwitchZLagThreshold), METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_SwitchZLagThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_SwitchZLagThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bDrawLandingLagState_MetaData[] = {
		{ "Category", "MoveItCamera|Static Jump" },
		{ "Comment", "/** If true will tell you in upper-left if it is in the landing lag state in orange */" },
		{ "EditCondition", "!bCameraMoveDuringJump" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "ToolTip", "If true will tell you in upper-left if it is in the landing lag state in orange" },
	};
#endif
	void Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bDrawLandingLagState_SetBit(void* Obj)
	{
		((UMISpringArmComponent*)Obj)->bDrawLandingLagState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bDrawLandingLagState = { "bDrawLandingLagState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UMISpringArmComponent), &Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bDrawLandingLagState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bDrawLandingLagState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bDrawLandingLagState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_ZoomEnabled_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_ZoomEnabled_MetaData[] = {
		{ "Category", "MoveItCamera|Zoom" },
		{ "Comment", "/** If true will allow camera zoom functionality */" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "ToolTip", "If true will allow camera zoom functionality" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_ZoomEnabled = { "ZoomEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMISpringArmComponent, ZoomEnabled), Z_Construct_UEnum_MoveIt_EMIZoomType, METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_ZoomEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_ZoomEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_MinTargetLength_MetaData[] = {
		{ "Category", "MoveItCamera|Zoom" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_MinTargetLength = { "MinTargetLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMISpringArmComponent, MinTargetLength), METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_MinTargetLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_MinTargetLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_MaxTargetLength_MetaData[] = {
		{ "Category", "MoveItCamera|Zoom" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_MaxTargetLength = { "MaxTargetLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMISpringArmComponent, MaxTargetLength), METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_MaxTargetLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_MaxTargetLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_PitchToZoomCurve_MetaData[] = {
		{ "Category", "MoveItCamera|Zoom" },
		{ "Comment", "/** Multiplier for TargetArmLength using pitch->zoom */" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "ToolTip", "Multiplier for TargetArmLength using pitch->zoom" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_PitchToZoomCurve = { "PitchToZoomCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMISpringArmComponent, PitchToZoomCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_PitchToZoomCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_PitchToZoomCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_ZoomCurveRate_MetaData[] = {
		{ "Category", "MoveItCamera|Zoom" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The rate at which PitchToZoomCurve is applied (0 to disable) */" },
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
		{ "ToolTip", "The rate at which PitchToZoomCurve is applied (0 to disable)" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_ZoomCurveRate = { "ZoomCurveRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMISpringArmComponent, ZoomCurveRate), METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_ZoomCurveRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_ZoomCurveRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_CharacterOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/MISpringArmComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_CharacterOwner = { "CharacterOwner", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMISpringArmComponent, CharacterOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_CharacterOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_CharacterOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMISpringArmComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bEnableOrbit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_InputSource_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_InputSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_MoveForwardAxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_MoveRightAxisName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bScaleByMoveForwardInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bOrbitWhenMovingForward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bOrbitWhenMovingBackward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_WalkForwardMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_WalkBackwardMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_OrbitRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_OrbitInterpRateWithInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_OrbitInterpRateNoInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bCameraMoveDuringJump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_SwitchZLagThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_bDrawLandingLagState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_ZoomEnabled_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_ZoomEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_MinTargetLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_MaxTargetLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_PitchToZoomCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_ZoomCurveRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMISpringArmComponent_Statics::NewProp_CharacterOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMISpringArmComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMISpringArmComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMISpringArmComponent_Statics::ClassParams = {
		&UMISpringArmComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMISpringArmComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMISpringArmComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMISpringArmComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMISpringArmComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMISpringArmComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMISpringArmComponent, 2903957791);
	template<> MOVEIT_API UClass* StaticClass<UMISpringArmComponent>()
	{
		return UMISpringArmComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMISpringArmComponent(Z_Construct_UClass_UMISpringArmComponent, &UMISpringArmComponent::StaticClass, TEXT("/Script/MoveIt"), TEXT("UMISpringArmComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMISpringArmComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
