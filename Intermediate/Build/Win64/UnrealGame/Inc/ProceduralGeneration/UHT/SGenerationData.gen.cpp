// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralGeneration/Public/SGenerationData.h"
#include "ProceduralGeneration/Public/SCharacterData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGenerationData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_ASCharacter_NoRegister();
	PROCEDURALGENERATION_API UScriptStruct* Z_Construct_UScriptStruct_FASCharacterData();
	PROCEDURALGENERATION_API UScriptStruct* Z_Construct_UScriptStruct_FASGroupData();
	PROCEDURALGENERATION_API UScriptStruct* Z_Construct_UScriptStruct_FASGroupGenerationData();
	PROCEDURALGENERATION_API UScriptStruct* Z_Construct_UScriptStruct_FASIndividualData();
	PROCEDURALGENERATION_API UScriptStruct* Z_Construct_UScriptStruct_FASLeaderData();
	PROCEDURALGENERATION_API UScriptStruct* Z_Construct_UScriptStruct_FASMemberData();
	UPackage* Z_Construct_UPackage__Script_ProceduralGeneration();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ASIndividualData;
class UScriptStruct* FASIndividualData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ASIndividualData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ASIndividualData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FASIndividualData, (UObject*)Z_Construct_UPackage__Script_ProceduralGeneration(), TEXT("ASIndividualData"));
	}
	return Z_Registration_Info_UScriptStruct_ASIndividualData.OuterSingleton;
}
template<> PROCEDURALGENERATION_API UScriptStruct* StaticStruct<FASIndividualData>()
{
	return FASIndividualData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FASIndividualData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASIndividualData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASIndividualData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASIndividualData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASIndividualData_Statics::NewProp_CharacterType_MetaData[] = {
		{ "Category", "Custom" },
		{ "DisplayName", "CharacterType" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FASIndividualData_Statics::NewProp_CharacterType = { "CharacterType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASIndividualData, CharacterType), Z_Construct_UClass_UClass, Z_Construct_UClass_ASCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASIndividualData_Statics::NewProp_CharacterType_MetaData), Z_Construct_UScriptStruct_FASIndividualData_Statics::NewProp_CharacterType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASIndividualData_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "Custom" },
		{ "DisplayName", "Amount" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FASIndividualData_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASIndividualData, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASIndividualData_Statics::NewProp_Amount_MetaData), Z_Construct_UScriptStruct_FASIndividualData_Statics::NewProp_Amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASIndividualData_Statics::NewProp_CharacterData_MetaData[] = {
		{ "Category", "Custom" },
		{ "DisplayName", "CharacterData" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASIndividualData_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASIndividualData, CharacterData), Z_Construct_UScriptStruct_FASCharacterData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASIndividualData_Statics::NewProp_CharacterData_MetaData), Z_Construct_UScriptStruct_FASIndividualData_Statics::NewProp_CharacterData_MetaData) }; // 1102893293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASIndividualData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASIndividualData_Statics::NewProp_CharacterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASIndividualData_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASIndividualData_Statics::NewProp_CharacterData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASIndividualData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralGeneration,
		nullptr,
		&NewStructOps,
		"ASIndividualData",
		Z_Construct_UScriptStruct_FASIndividualData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASIndividualData_Statics::PropPointers),
		sizeof(FASIndividualData),
		alignof(FASIndividualData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASIndividualData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FASIndividualData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASIndividualData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FASIndividualData()
	{
		if (!Z_Registration_Info_UScriptStruct_ASIndividualData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ASIndividualData.InnerSingleton, Z_Construct_UScriptStruct_FASIndividualData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ASIndividualData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ASLeaderData;
class UScriptStruct* FASLeaderData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ASLeaderData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ASLeaderData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FASLeaderData, (UObject*)Z_Construct_UPackage__Script_ProceduralGeneration(), TEXT("ASLeaderData"));
	}
	return Z_Registration_Info_UScriptStruct_ASLeaderData.OuterSingleton;
}
template<> PROCEDURALGENERATION_API UScriptStruct* StaticStruct<FASLeaderData>()
{
	return FASLeaderData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FASLeaderData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Leader_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Leader;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASLeaderData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASLeaderData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASLeaderData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASLeaderData_Statics::NewProp_Leader_MetaData[] = {
		{ "Category", "Custom" },
		{ "DisplayName", "Leader" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FASLeaderData_Statics::NewProp_Leader = { "Leader", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASLeaderData, Leader), Z_Construct_UClass_UClass, Z_Construct_UClass_ASCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASLeaderData_Statics::NewProp_Leader_MetaData), Z_Construct_UScriptStruct_FASLeaderData_Statics::NewProp_Leader_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASLeaderData_Statics::NewProp_CharacterData_MetaData[] = {
		{ "Category", "Custom" },
		{ "DisplayName", "CharacterData" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASLeaderData_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASLeaderData, CharacterData), Z_Construct_UScriptStruct_FASCharacterData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASLeaderData_Statics::NewProp_CharacterData_MetaData), Z_Construct_UScriptStruct_FASLeaderData_Statics::NewProp_CharacterData_MetaData) }; // 1102893293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASLeaderData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASLeaderData_Statics::NewProp_Leader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASLeaderData_Statics::NewProp_CharacterData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASLeaderData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralGeneration,
		nullptr,
		&NewStructOps,
		"ASLeaderData",
		Z_Construct_UScriptStruct_FASLeaderData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASLeaderData_Statics::PropPointers),
		sizeof(FASLeaderData),
		alignof(FASLeaderData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASLeaderData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FASLeaderData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASLeaderData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FASLeaderData()
	{
		if (!Z_Registration_Info_UScriptStruct_ASLeaderData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ASLeaderData.InnerSingleton, Z_Construct_UScriptStruct_FASLeaderData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ASLeaderData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ASMemberData;
class UScriptStruct* FASMemberData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ASMemberData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ASMemberData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FASMemberData, (UObject*)Z_Construct_UPackage__Script_ProceduralGeneration(), TEXT("ASMemberData"));
	}
	return Z_Registration_Info_UScriptStruct_ASMemberData.OuterSingleton;
}
template<> PROCEDURALGENERATION_API UScriptStruct* StaticStruct<FASMemberData>()
{
	return FASMemberData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FASMemberData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CharacterType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASMemberData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASMemberData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASMemberData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASMemberData_Statics::NewProp_CharacterType_MetaData[] = {
		{ "Category", "Custom" },
		{ "DisplayName", "CharacterType" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FASMemberData_Statics::NewProp_CharacterType = { "CharacterType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASMemberData, CharacterType), Z_Construct_UClass_UClass, Z_Construct_UClass_ASCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASMemberData_Statics::NewProp_CharacterType_MetaData), Z_Construct_UScriptStruct_FASMemberData_Statics::NewProp_CharacterType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASMemberData_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "Custom" },
		{ "DisplayName", "Amount" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FASMemberData_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASMemberData, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASMemberData_Statics::NewProp_Amount_MetaData), Z_Construct_UScriptStruct_FASMemberData_Statics::NewProp_Amount_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASMemberData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASMemberData_Statics::NewProp_CharacterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASMemberData_Statics::NewProp_Amount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASMemberData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralGeneration,
		nullptr,
		&NewStructOps,
		"ASMemberData",
		Z_Construct_UScriptStruct_FASMemberData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASMemberData_Statics::PropPointers),
		sizeof(FASMemberData),
		alignof(FASMemberData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASMemberData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FASMemberData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASMemberData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FASMemberData()
	{
		if (!Z_Registration_Info_UScriptStruct_ASMemberData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ASMemberData.InnerSingleton, Z_Construct_UScriptStruct_FASMemberData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ASMemberData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ASGroupData;
class UScriptStruct* FASGroupData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ASGroupData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ASGroupData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FASGroupData, (UObject*)Z_Construct_UPackage__Script_ProceduralGeneration(), TEXT("ASGroupData"));
	}
	return Z_Registration_Info_UScriptStruct_ASGroupData.OuterSingleton;
}
template<> PROCEDURALGENERATION_API UScriptStruct* StaticStruct<FASGroupData>()
{
	return FASGroupData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FASGroupData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemberPerRow_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MemberPerRow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootForwardOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RootForwardOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidthOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WidthOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LengthOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LengthOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HysteresisDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HysteresisDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaderDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeaderDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemberSpeedReduction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MemberSpeedReduction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASGroupData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASGroupData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASGroupData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_MemberPerRow_MetaData[] = {
		{ "Category", "Custom" },
		{ "DisplayName", "Member Per Row" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_MemberPerRow = { "MemberPerRow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASGroupData, MemberPerRow), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_MemberPerRow_MetaData), Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_MemberPerRow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_RootForwardOffset_MetaData[] = {
		{ "Category", "Custom" },
		{ "DisplayName", "Root Forward Offset" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_RootForwardOffset = { "RootForwardOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASGroupData, RootForwardOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_RootForwardOffset_MetaData), Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_RootForwardOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_WidthOffset_MetaData[] = {
		{ "Category", "Custom" },
		{ "DisplayName", "Width Offset" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_WidthOffset = { "WidthOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASGroupData, WidthOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_WidthOffset_MetaData), Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_WidthOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_LengthOffset_MetaData[] = {
		{ "Category", "Custom" },
		{ "DisplayName", "Length Offset" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_LengthOffset = { "LengthOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASGroupData, LengthOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_LengthOffset_MetaData), Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_LengthOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_HysteresisDistance_MetaData[] = {
		{ "Category", "Custom" },
		{ "DisplayName", "Hysteresis Distance" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_HysteresisDistance = { "HysteresisDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASGroupData, HysteresisDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_HysteresisDistance_MetaData), Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_HysteresisDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_LeaderDistance_MetaData[] = {
		{ "Category", "Custom" },
		{ "DisplayName", "Leader Distance" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_LeaderDistance = { "LeaderDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASGroupData, LeaderDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_LeaderDistance_MetaData), Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_LeaderDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_MemberSpeedReduction_MetaData[] = {
		{ "Category", "Custom" },
		{ "DisplayName", "Member Speed Reduction" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_MemberSpeedReduction = { "MemberSpeedReduction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASGroupData, MemberSpeedReduction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_MemberSpeedReduction_MetaData), Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_MemberSpeedReduction_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASGroupData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_MemberPerRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_RootForwardOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_WidthOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_LengthOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_HysteresisDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_LeaderDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASGroupData_Statics::NewProp_MemberSpeedReduction,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASGroupData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralGeneration,
		nullptr,
		&NewStructOps,
		"ASGroupData",
		Z_Construct_UScriptStruct_FASGroupData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASGroupData_Statics::PropPointers),
		sizeof(FASGroupData),
		alignof(FASGroupData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASGroupData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FASGroupData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASGroupData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FASGroupData()
	{
		if (!Z_Registration_Info_UScriptStruct_ASGroupData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ASGroupData.InnerSingleton, Z_Construct_UScriptStruct_FASGroupData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ASGroupData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ASGroupGenerationData;
class UScriptStruct* FASGroupGenerationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ASGroupGenerationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ASGroupGenerationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FASGroupGenerationData, (UObject*)Z_Construct_UPackage__Script_ProceduralGeneration(), TEXT("ASGroupGenerationData"));
	}
	return Z_Registration_Info_UScriptStruct_ASGroupGenerationData.OuterSingleton;
}
template<> PROCEDURALGENERATION_API UScriptStruct* StaticStruct<FASGroupGenerationData>()
{
	return FASGroupGenerationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FASGroupGenerationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeaderData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeaderData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Members_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Members;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FASGroupGenerationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "Custom" },
		{ "DisplayName", "Amount" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASGroupGenerationData, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_Amount_MetaData), Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_Amount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_GroupData_MetaData[] = {
		{ "Category", "Custom" },
		{ "DisplayName", "Group Data" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_GroupData = { "GroupData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASGroupGenerationData, GroupData), Z_Construct_UScriptStruct_FASGroupData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_GroupData_MetaData), Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_GroupData_MetaData) }; // 1608777766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_LeaderData_MetaData[] = {
		{ "Category", "Custom" },
		{ "DisplayName", "LeaderData" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_LeaderData = { "LeaderData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASGroupGenerationData, LeaderData), Z_Construct_UScriptStruct_FASLeaderData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_LeaderData_MetaData), Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_LeaderData_MetaData) }; // 775836551
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FASMemberData, METADATA_PARAMS(0, nullptr) }; // 3241773991
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_Members_MetaData[] = {
		{ "Category", "Custom" },
		{ "DisplayName", "Members" },
		{ "ModuleRelativePath", "Public/SGenerationData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FASGroupGenerationData, Members), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_Members_MetaData), Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_Members_MetaData) }; // 3241773991
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_Amount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_GroupData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_LeaderData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_Members_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewProp_Members,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralGeneration,
		nullptr,
		&NewStructOps,
		"ASGroupGenerationData",
		Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::PropPointers),
		sizeof(FASGroupGenerationData),
		alignof(FASGroupGenerationData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FASGroupGenerationData()
	{
		if (!Z_Registration_Info_UScriptStruct_ASGroupGenerationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ASGroupGenerationData.InnerSingleton, Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ASGroupGenerationData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SGenerationData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SGenerationData_h_Statics::ScriptStructInfo[] = {
		{ FASIndividualData::StaticStruct, Z_Construct_UScriptStruct_FASIndividualData_Statics::NewStructOps, TEXT("ASIndividualData"), &Z_Registration_Info_UScriptStruct_ASIndividualData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FASIndividualData), 1005521466U) },
		{ FASLeaderData::StaticStruct, Z_Construct_UScriptStruct_FASLeaderData_Statics::NewStructOps, TEXT("ASLeaderData"), &Z_Registration_Info_UScriptStruct_ASLeaderData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FASLeaderData), 775836551U) },
		{ FASMemberData::StaticStruct, Z_Construct_UScriptStruct_FASMemberData_Statics::NewStructOps, TEXT("ASMemberData"), &Z_Registration_Info_UScriptStruct_ASMemberData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FASMemberData), 3241773991U) },
		{ FASGroupData::StaticStruct, Z_Construct_UScriptStruct_FASGroupData_Statics::NewStructOps, TEXT("ASGroupData"), &Z_Registration_Info_UScriptStruct_ASGroupData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FASGroupData), 1608777766U) },
		{ FASGroupGenerationData::StaticStruct, Z_Construct_UScriptStruct_FASGroupGenerationData_Statics::NewStructOps, TEXT("ASGroupGenerationData"), &Z_Registration_Info_UScriptStruct_ASGroupGenerationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FASGroupGenerationData), 3755435243U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SGenerationData_h_3128107839(TEXT("/Script/ProceduralGeneration"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SGenerationData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SGenerationData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
