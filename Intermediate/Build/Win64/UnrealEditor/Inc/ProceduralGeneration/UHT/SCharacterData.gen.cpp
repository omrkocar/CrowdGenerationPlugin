// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralGeneration/Public/SCharacterData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCharacterData() {}
// Cross Module References
	PROCEDURALGENERATION_API UEnum* Z_Construct_UEnum_ProceduralGeneration_EAction();
	PROCEDURALGENERATION_API UScriptStruct* Z_Construct_UScriptStruct_FASCharacterData();
	UPackage* Z_Construct_UPackage__Script_ProceduralGeneration();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAction;
	static UEnum* EAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ProceduralGeneration_EAction, (UObject*)Z_Construct_UPackage__Script_ProceduralGeneration(), TEXT("EAction"));
		}
		return Z_Registration_Info_UEnum_EAction.OuterSingleton;
	}
	template<> PROCEDURALGENERATION_API UEnum* StaticEnum<EAction>()
	{
		return EAction_StaticEnum();
	}
	struct Z_Construct_UEnum_ProceduralGeneration_EAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ProceduralGeneration_EAction_Statics::Enumerators[] = {
		{ "EAction::Walk", (int64)EAction::Walk },
		{ "EAction::Sit", (int64)EAction::Sit },
		{ "EAction::Talk", (int64)EAction::Talk },
		{ "EAction::Carry", (int64)EAction::Carry },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ProceduralGeneration_EAction_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Carry.Name", "EAction::Carry" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SCharacterData.h" },
		{ "Sit.Name", "EAction::Sit" },
		{ "Talk.Name", "EAction::Talk" },
		{ "Walk.Name", "EAction::Walk" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ProceduralGeneration_EAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ProceduralGeneration,
		nullptr,
		"EAction",
		"EAction",
		Z_Construct_UEnum_ProceduralGeneration_EAction_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralGeneration_EAction_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ProceduralGeneration_EAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ProceduralGeneration_EAction_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_ProceduralGeneration_EAction()
	{
		if (!Z_Registration_Info_UEnum_EAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAction.InnerSingleton, Z_Construct_UEnum_ProceduralGeneration_EAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ASCharacterData;
class UScriptStruct* FASCharacterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ASCharacterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ASCharacterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FASCharacterData, (UObject*)Z_Construct_UPackage__Script_ProceduralGeneration(), TEXT("ASCharacterData"));
	}
	return Z_Registration_Info_UScriptStruct_ASCharacterData.OuterSingleton;
}
template<> PROCEDURALGENERATION_API UScriptStruct* StaticStruct<FASCharacterData>()
{
	return FASCharacterData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FASCharacterData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimationPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTargetDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTargetDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTargetDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTargetDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCharacterData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SCharacterData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASCharacterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASCharacterData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASCharacterData, Action), Z_Construct_UEnum_ProceduralGeneration_EAction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_Action_MetaData), Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_Action_MetaData) }; // 4048977775
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_AnimationPlayRate_MetaData[] = {
		{ "Category", "Custom" },
		{ "DisplayName", "Animation Play Rate" },
		{ "ModuleRelativePath", "Public/SCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_AnimationPlayRate = { "AnimationPlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASCharacterData, AnimationPlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_AnimationPlayRate_MetaData), Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_AnimationPlayRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_MinTargetDistance_MetaData[] = {
		{ "Category", "Custom" },
		{ "ClampMin", "0.000000" },
		{ "DisplayName", "Min Target Distance" },
		{ "ModuleRelativePath", "Public/SCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_MinTargetDistance = { "MinTargetDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASCharacterData, MinTargetDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_MinTargetDistance_MetaData), Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_MinTargetDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_MaxTargetDistance_MetaData[] = {
		{ "Category", "Custom" },
		{ "DisplayName", "Max Target Distance" },
		{ "ModuleRelativePath", "Public/SCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_MaxTargetDistance = { "MaxTargetDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASCharacterData, MaxTargetDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_MaxTargetDistance_MetaData), Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_MaxTargetDistance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASCharacterData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_Action_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_AnimationPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_MinTargetDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASCharacterData_Statics::NewProp_MaxTargetDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASCharacterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralGeneration,
		nullptr,
		&NewStructOps,
		"ASCharacterData",
		Z_Construct_UScriptStruct_FASCharacterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCharacterData_Statics::PropPointers),
		sizeof(FASCharacterData),
		alignof(FASCharacterData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCharacterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FASCharacterData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASCharacterData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FASCharacterData()
	{
		if (!Z_Registration_Info_UScriptStruct_ASCharacterData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ASCharacterData.InnerSingleton, Z_Construct_UScriptStruct_FASCharacterData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ASCharacterData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SCharacterData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SCharacterData_h_Statics::EnumInfo[] = {
		{ EAction_StaticEnum, TEXT("EAction"), &Z_Registration_Info_UEnum_EAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4048977775U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SCharacterData_h_Statics::ScriptStructInfo[] = {
		{ FASCharacterData::StaticStruct, Z_Construct_UScriptStruct_FASCharacterData_Statics::NewStructOps, TEXT("ASCharacterData"), &Z_Registration_Info_UScriptStruct_ASCharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FASCharacterData), 1102893293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SCharacterData_h_33926401(TEXT("/Script/ProceduralGeneration"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SCharacterData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SCharacterData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SCharacterData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SCharacterData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
