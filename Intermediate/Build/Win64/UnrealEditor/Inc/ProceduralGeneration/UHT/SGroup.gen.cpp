// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralGeneration/Public/SGroup.h"
#include "ProceduralGeneration/Public/SGenerationData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGroup() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_ASCharacter_NoRegister();
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_ASGroup();
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_ASGroup_NoRegister();
	PROCEDURALGENERATION_API UScriptStruct* Z_Construct_UScriptStruct_FASGroupData();
	UPackage* Z_Construct_UPackage__Script_ProceduralGeneration();
// End Cross Module References
	void ASGroup::StaticRegisterNativesASGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASGroup);
	UClass* Z_Construct_UClass_ASGroup_NoRegister()
	{
		return ASGroup::StaticClass();
	}
	struct Z_Construct_UClass_ASGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Leader_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Leader;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Members_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Members_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Members;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GroupPoints_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupPoints_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupPoints_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GroupPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointParent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PointParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralGeneration,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGroup_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGroup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SGroup.h" },
		{ "ModuleRelativePath", "Public/SGroup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGroup_Statics::NewProp_RootComp_MetaData[] = {
		{ "Category", "Group" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SGroup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGroup_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGroup, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGroup_Statics::NewProp_RootComp_MetaData), Z_Construct_UClass_ASGroup_Statics::NewProp_RootComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGroup_Statics::NewProp_Leader_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Public/SGroup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGroup_Statics::NewProp_Leader = { "Leader", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGroup, Leader), Z_Construct_UClass_ASCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGroup_Statics::NewProp_Leader_MetaData), Z_Construct_UClass_ASGroup_Statics::NewProp_Leader_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGroup_Statics::NewProp_Members_Inner = { "Members", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGroup_Statics::NewProp_Members_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Public/SGroup.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASGroup_Statics::NewProp_Members = { "Members", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGroup, Members), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGroup_Statics::NewProp_Members_MetaData), Z_Construct_UClass_ASGroup_Statics::NewProp_Members_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGroup_Statics::NewProp_GroupPoints_ValueProp = { "GroupPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASGroup_Statics::NewProp_GroupPoints_Key_KeyProp = { "GroupPoints_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGroup_Statics::NewProp_GroupPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/SGroup.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASGroup_Statics::NewProp_GroupPoints = { "GroupPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGroup, GroupPoints), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGroup_Statics::NewProp_GroupPoints_MetaData), Z_Construct_UClass_ASGroup_Statics::NewProp_GroupPoints_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGroup_Statics::NewProp_CurrentWidth_MetaData[] = {
		{ "ModuleRelativePath", "Public/SGroup.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASGroup_Statics::NewProp_CurrentWidth = { "CurrentWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGroup, CurrentWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGroup_Statics::NewProp_CurrentWidth_MetaData), Z_Construct_UClass_ASGroup_Statics::NewProp_CurrentWidth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGroup_Statics::NewProp_GroupData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SGroup.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASGroup_Statics::NewProp_GroupData = { "GroupData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGroup, GroupData), Z_Construct_UScriptStruct_FASGroupData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGroup_Statics::NewProp_GroupData_MetaData), Z_Construct_UClass_ASGroup_Statics::NewProp_GroupData_MetaData) }; // 1608777766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGroup_Statics::NewProp_PointParent_MetaData[] = {
		{ "ModuleRelativePath", "Public/SGroup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGroup_Statics::NewProp_PointParent = { "PointParent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASGroup, PointParent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGroup_Statics::NewProp_PointParent_MetaData), Z_Construct_UClass_ASGroup_Statics::NewProp_PointParent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGroup_Statics::NewProp_RootComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGroup_Statics::NewProp_Leader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGroup_Statics::NewProp_Members_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGroup_Statics::NewProp_Members,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGroup_Statics::NewProp_GroupPoints_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGroup_Statics::NewProp_GroupPoints_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGroup_Statics::NewProp_GroupPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGroup_Statics::NewProp_CurrentWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGroup_Statics::NewProp_GroupData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGroup_Statics::NewProp_PointParent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASGroup_Statics::ClassParams = {
		&ASGroup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASGroup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASGroup_Statics::Class_MetaDataParams), Z_Construct_UClass_ASGroup_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASGroup_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASGroup()
	{
		if (!Z_Registration_Info_UClass_ASGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASGroup.OuterSingleton, Z_Construct_UClass_ASGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASGroup.OuterSingleton;
	}
	template<> PROCEDURALGENERATION_API UClass* StaticClass<ASGroup>()
	{
		return ASGroup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASGroup);
	ASGroup::~ASGroup() {}
	struct Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_PACKAGE_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SGroup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_PACKAGE_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SGroup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASGroup, ASGroup::StaticClass, TEXT("ASGroup"), &Z_Registration_Info_UClass_ASGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASGroup), 3028556657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_PACKAGE_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SGroup_h_4208832773(TEXT("/Script/ProceduralGeneration"),
		Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_PACKAGE_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_PACKAGE_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SGroup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
