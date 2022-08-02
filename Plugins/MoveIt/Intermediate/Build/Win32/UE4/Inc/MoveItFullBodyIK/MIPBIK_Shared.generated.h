// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVEITFULLBODYIK_MIPBIK_Shared_generated_h
#error "MIPBIK_Shared.generated.h already included, missing '#pragma once' in MIPBIK_Shared.h"
#endif
#define MOVEITFULLBODYIK_MIPBIK_Shared_generated_h

#define HostProject_Plugins_MoveIt_Source_MoveItFullBodyIK_Public_MIPBIK_Shared_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMIPBIKBoneSetting_Statics; \
	MOVEITFULLBODYIK_API static class UScriptStruct* StaticStruct();


template<> MOVEITFULLBODYIK_API UScriptStruct* StaticStruct<struct FMIPBIKBoneSetting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_MoveIt_Source_MoveItFullBodyIK_Public_MIPBIK_Shared_h


#define FOREACH_ENUM_EMIPBIKLIMITTYPE(op) \
	op(EMIPBIKLimitType::Free) \
	op(EMIPBIKLimitType::Limited) \
	op(EMIPBIKLimitType::Locked) 

enum class EMIPBIKLimitType : uint8;
template<> MOVEITFULLBODYIK_API UEnum* StaticEnum<EMIPBIKLimitType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
