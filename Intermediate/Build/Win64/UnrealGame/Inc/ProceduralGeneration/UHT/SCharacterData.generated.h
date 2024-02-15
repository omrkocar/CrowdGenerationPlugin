// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SCharacterData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROCEDURALGENERATION_SCharacterData_generated_h
#error "SCharacterData.generated.h already included, missing '#pragma once' in SCharacterData.h"
#endif
#define PROCEDURALGENERATION_SCharacterData_generated_h

#define FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SCharacterData_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FASCharacterData_Statics; \
	PROCEDURALGENERATION_API static class UScriptStruct* StaticStruct();


template<> PROCEDURALGENERATION_API UScriptStruct* StaticStruct<struct FASCharacterData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SCharacterData_h


#define FOREACH_ENUM_EACTION(op) \
	op(EAction::Walk) \
	op(EAction::Sit) \
	op(EAction::Talk) \
	op(EAction::Carry) 

enum class EAction : uint8;
template<> struct TIsUEnumClass<EAction> { enum { Value = true }; };
template<> PROCEDURALGENERATION_API UEnum* StaticEnum<EAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
