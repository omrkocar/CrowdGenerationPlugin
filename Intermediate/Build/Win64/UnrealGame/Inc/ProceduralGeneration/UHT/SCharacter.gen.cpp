// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralGeneration/Public/SCharacter.h"
#include "ProceduralGeneration/Public/SCharacterData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCharacter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_ASCharacter();
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_ASCharacter_NoRegister();
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_ASPath_NoRegister();
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_USGroupComponent_NoRegister();
	PROCEDURALGENERATION_API UScriptStruct* Z_Construct_UScriptStruct_FASCharacterData();
	UPackage* Z_Construct_UPackage__Script_ProceduralGeneration();
// End Cross Module References
	DEFINE_FUNCTION(ASCharacter::execIsPartOfGroup)
	{
		P_GET_OBJECT_REF(USGroupComponent,Z_Param_Out_GroupComp);
		P_GET_UBOOL_REF(Z_Param_Out_IsLeader);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPartOfGroup(Z_Param_Out_GroupComp,Z_Param_Out_IsLeader);
		P_NATIVE_END;
	}
	void ASCharacter::StaticRegisterNativesASCharacter()
	{
		UClass* Class = ASCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsPartOfGroup", &ASCharacter::execIsPartOfGroup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics
	{
		struct SCharacter_eventIsPartOfGroup_Parms
		{
			USGroupComponent* GroupComp;
			bool IsLeader;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GroupComp;
		static void NewProp_IsLeader_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLeader;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::NewProp_GroupComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::NewProp_GroupComp = { "GroupComp", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SCharacter_eventIsPartOfGroup_Parms, GroupComp), Z_Construct_UClass_USGroupComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::NewProp_GroupComp_MetaData), Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::NewProp_GroupComp_MetaData) };
	void Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::NewProp_IsLeader_SetBit(void* Obj)
	{
		((SCharacter_eventIsPartOfGroup_Parms*)Obj)->IsLeader = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::NewProp_IsLeader = { "IsLeader", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SCharacter_eventIsPartOfGroup_Parms), &Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::NewProp_IsLeader_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SCharacter_eventIsPartOfGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SCharacter_eventIsPartOfGroup_Parms), &Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::NewProp_GroupComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::NewProp_IsLeader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASCharacter, nullptr, "IsPartOfGroup", nullptr, nullptr, Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::SCharacter_eventIsPartOfGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::SCharacter_eventIsPartOfGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASCharacter_IsPartOfGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASCharacter_IsPartOfGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASCharacter);
	UClass* Z_Construct_UClass_ASCharacter_NoRegister()
	{
		return ASCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GroupComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CharacterSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationStartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationStartPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralGeneration,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASCharacter_IsPartOfGroup, "IsPartOfGroup" }, // 3323990533
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SCharacter.h" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_GroupComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_GroupComponent = { "GroupComponent", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCharacter, GroupComponent), Z_Construct_UClass_USGroupComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_GroupComponent_MetaData), Z_Construct_UClass_ASCharacter_Statics::NewProp_GroupComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_TargetActor_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCharacter, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_TargetActor_MetaData), Z_Construct_UClass_ASCharacter_Statics::NewProp_TargetActor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_InitialPosition_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_InitialPosition = { "InitialPosition", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCharacter, InitialPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_InitialPosition_MetaData), Z_Construct_UClass_ASCharacter_Statics::NewProp_InitialPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCharacter, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_TargetLocation_MetaData), Z_Construct_UClass_ASCharacter_Statics::NewProp_TargetLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCharacter, Path), Z_Construct_UClass_ASPath_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_Path_MetaData), Z_Construct_UClass_ASCharacter_Statics::NewProp_Path_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_CharacterData_MetaData[] = {
		{ "Category", "Custom" },
		{ "ClampMax", "2" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCharacter, CharacterData), Z_Construct_UScriptStruct_FASCharacterData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_CharacterData_MetaData), Z_Construct_UClass_ASCharacter_Statics::NewProp_CharacterData_MetaData) }; // 1102893293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_CharacterSeed_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_CharacterSeed = { "CharacterSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCharacter, CharacterSeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_CharacterSeed_MetaData), Z_Construct_UClass_ASCharacter_Statics::NewProp_CharacterSeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASCharacter_Statics::NewProp_AnimationStartPosition_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASCharacter_Statics::NewProp_AnimationStartPosition = { "AnimationStartPosition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASCharacter, AnimationStartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::NewProp_AnimationStartPosition_MetaData), Z_Construct_UClass_ASCharacter_Statics::NewProp_AnimationStartPosition_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_GroupComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_InitialPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_TargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_CharacterData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_CharacterSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASCharacter_Statics::NewProp_AnimationStartPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASCharacter_Statics::ClassParams = {
		&ASCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASCharacter()
	{
		if (!Z_Registration_Info_UClass_ASCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASCharacter.OuterSingleton, Z_Construct_UClass_ASCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASCharacter.OuterSingleton;
	}
	template<> PROCEDURALGENERATION_API UClass* StaticClass<ASCharacter>()
	{
		return ASCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASCharacter);
	ASCharacter::~ASCharacter() {}
	struct Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_PACKAGE_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_PACKAGE_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASCharacter, ASCharacter::StaticClass, TEXT("ASCharacter"), &Z_Registration_Info_UClass_ASCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASCharacter), 31819923U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_PACKAGE_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SCharacter_h_3175488179(TEXT("/Script/ProceduralGeneration"),
		Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_PACKAGE_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_PACKAGE_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
