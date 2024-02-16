// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralGeneration/Public/SProceduralGeneration.h"
#include "ProceduralGeneration/Public/SGenerationData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSProceduralGeneration() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod();
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_ASProceduralGeneration();
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_ASProceduralGeneration_NoRegister();
	PROCEDURALGENERATION_API UScriptStruct* Z_Construct_UScriptStruct_FASGroupGenerationData();
	PROCEDURALGENERATION_API UScriptStruct* Z_Construct_UScriptStruct_FASIndividualData();
	UPackage* Z_Construct_UPackage__Script_ProceduralGeneration();
// End Cross Module References
	DEFINE_FUNCTION(ASProceduralGeneration::execClearMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASProceduralGeneration::execGenerateMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateMap();
		P_NATIVE_END;
	}
	void ASProceduralGeneration::StaticRegisterNativesASProceduralGeneration()
	{
		UClass* Class = ASProceduralGeneration::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearMap", &ASProceduralGeneration::execClearMap },
			{ "GenerateMap", &ASProceduralGeneration::execGenerateMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASProceduralGeneration_ClearMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASProceduralGeneration_ClearMap_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Custom" },
		{ "DisplayName", "Clear Map" },
		{ "ModuleRelativePath", "Public/SProceduralGeneration.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASProceduralGeneration_ClearMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASProceduralGeneration, nullptr, "ClearMap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASProceduralGeneration_ClearMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASProceduralGeneration_ClearMap_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASProceduralGeneration_ClearMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASProceduralGeneration_ClearMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASProceduralGeneration_GenerateMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASProceduralGeneration_GenerateMap_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SProceduralGeneration.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASProceduralGeneration_GenerateMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASProceduralGeneration, nullptr, "GenerateMap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASProceduralGeneration_GenerateMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASProceduralGeneration_GenerateMap_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASProceduralGeneration_GenerateMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASProceduralGeneration_GenerateMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASProceduralGeneration);
	UClass* Z_Construct_UClass_ASProceduralGeneration_NoRegister()
	{
		return ASProceduralGeneration::StaticClass();
	}
	struct Z_Construct_UClass_ASProceduralGeneration_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerationSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GenerationSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocationSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetLocationSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateAtRuntime_MetaData[];
#endif
		static void NewProp_bGenerateAtRuntime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateAtRuntime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseSpawnRadius_MetaData[];
#endif
		static void NewProp_UseSpawnRadius_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSpawnRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnRadius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnCollisionHandleMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCollisionHandleMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnCollisionHandleMethod;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndividualGenerationData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndividualGenerationData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IndividualGenerationData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupGenerationData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupGenerationData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupGenerationData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedCharacters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedCharacters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedCharacters;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASProceduralGeneration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralGeneration,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASProceduralGeneration_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASProceduralGeneration_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASProceduralGeneration_ClearMap, "ClearMap" }, // 999782734
		{ &Z_Construct_UFunction_ASProceduralGeneration_GenerateMap, "GenerateMap" }, // 1226465560
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASProceduralGeneration_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProceduralGeneration_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SProceduralGeneration.h" },
		{ "ModuleRelativePath", "Public/SProceduralGeneration.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_GenerationSeed_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SProceduralGeneration.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_GenerationSeed = { "GenerationSeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASProceduralGeneration, GenerationSeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_GenerationSeed_MetaData), Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_GenerationSeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_TargetLocationSeed_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SProceduralGeneration.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_TargetLocationSeed = { "TargetLocationSeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASProceduralGeneration, TargetLocationSeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_TargetLocationSeed_MetaData), Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_TargetLocationSeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_bGenerateAtRuntime_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SProceduralGeneration.h" },
	};
#endif
	void Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_bGenerateAtRuntime_SetBit(void* Obj)
	{
		((ASProceduralGeneration*)Obj)->bGenerateAtRuntime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_bGenerateAtRuntime = { "bGenerateAtRuntime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASProceduralGeneration), &Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_bGenerateAtRuntime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_bGenerateAtRuntime_MetaData), Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_bGenerateAtRuntime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_UseSpawnRadius_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SProceduralGeneration.h" },
	};
#endif
	void Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_UseSpawnRadius_SetBit(void* Obj)
	{
		((ASProceduralGeneration*)Obj)->UseSpawnRadius = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_UseSpawnRadius = { "UseSpawnRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASProceduralGeneration), &Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_UseSpawnRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_UseSpawnRadius_MetaData), Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_UseSpawnRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnRadius_MetaData[] = {
		{ "Category", "Custom" },
		{ "EditCondition", "UseSpawnRadius" },
		{ "ModuleRelativePath", "Public/SProceduralGeneration.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnRadius = { "SpawnRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASProceduralGeneration, SpawnRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnRadius_MetaData), Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnRadius_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnCollisionHandleMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnCollisionHandleMethod_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SProceduralGeneration.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnCollisionHandleMethod = { "SpawnCollisionHandleMethod", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASProceduralGeneration, SpawnCollisionHandleMethod), Z_Construct_UEnum_Engine_ESpawnActorCollisionHandlingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnCollisionHandleMethod_MetaData), Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnCollisionHandleMethod_MetaData) }; // 1983674720
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_IndividualGenerationData_Inner = { "IndividualGenerationData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FASIndividualData, METADATA_PARAMS(0, nullptr) }; // 1005521466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_IndividualGenerationData_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SProceduralGeneration.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_IndividualGenerationData = { "IndividualGenerationData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASProceduralGeneration, IndividualGenerationData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_IndividualGenerationData_MetaData), Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_IndividualGenerationData_MetaData) }; // 1005521466
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_GroupGenerationData_Inner = { "GroupGenerationData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FASGroupGenerationData, METADATA_PARAMS(0, nullptr) }; // 3755435243
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_GroupGenerationData_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SProceduralGeneration.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_GroupGenerationData = { "GroupGenerationData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASProceduralGeneration, GroupGenerationData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_GroupGenerationData_MetaData), Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_GroupGenerationData_MetaData) }; // 3755435243
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnedCharacters_Inner = { "SpawnedCharacters", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnedCharacters_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SProceduralGeneration.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnedCharacters = { "SpawnedCharacters", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASProceduralGeneration, SpawnedCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnedCharacters_MetaData), Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnedCharacters_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnedActors_Inner = { "SpawnedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/SProceduralGeneration.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnedActors = { "SpawnedActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASProceduralGeneration, SpawnedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnedActors_MetaData), Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnedActors_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASProceduralGeneration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_GenerationSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_TargetLocationSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_bGenerateAtRuntime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_UseSpawnRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnCollisionHandleMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnCollisionHandleMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_IndividualGenerationData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_IndividualGenerationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_GroupGenerationData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_GroupGenerationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnedCharacters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnedCharacters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProceduralGeneration_Statics::NewProp_SpawnedActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASProceduralGeneration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASProceduralGeneration>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASProceduralGeneration_Statics::ClassParams = {
		&ASProceduralGeneration::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASProceduralGeneration_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASProceduralGeneration_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASProceduralGeneration_Statics::Class_MetaDataParams), Z_Construct_UClass_ASProceduralGeneration_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASProceduralGeneration_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASProceduralGeneration()
	{
		if (!Z_Registration_Info_UClass_ASProceduralGeneration.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASProceduralGeneration.OuterSingleton, Z_Construct_UClass_ASProceduralGeneration_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASProceduralGeneration.OuterSingleton;
	}
	template<> PROCEDURALGENERATION_API UClass* StaticClass<ASProceduralGeneration>()
	{
		return ASProceduralGeneration::StaticClass();
	}
	ASProceduralGeneration::ASProceduralGeneration(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASProceduralGeneration);
	ASProceduralGeneration::~ASProceduralGeneration() {}
	struct Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SProceduralGeneration_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SProceduralGeneration_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASProceduralGeneration, ASProceduralGeneration::StaticClass, TEXT("ASProceduralGeneration"), &Z_Registration_Info_UClass_ASProceduralGeneration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASProceduralGeneration), 3764054393U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SProceduralGeneration_h_1907211895(TEXT("/Script/ProceduralGeneration"),
		Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SProceduralGeneration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SProceduralGeneration_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
