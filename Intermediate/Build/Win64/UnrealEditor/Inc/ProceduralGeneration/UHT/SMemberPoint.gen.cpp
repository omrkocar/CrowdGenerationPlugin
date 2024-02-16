// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralGeneration/Public/SMemberPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMemberPoint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_ASMemberPoint();
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_ASMemberPoint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProceduralGeneration();
// End Cross Module References
	void ASMemberPoint::StaticRegisterNativesASMemberPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASMemberPoint);
	UClass* Z_Construct_UClass_ASMemberPoint_NoRegister()
	{
		return ASMemberPoint::StaticClass();
	}
	struct Z_Construct_UClass_ASMemberPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASMemberPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralGeneration,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASMemberPoint_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMemberPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SMemberPoint.h" },
		{ "ModuleRelativePath", "Public/SMemberPoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASMemberPoint_Statics::NewProp_RootComp_MetaData[] = {
		{ "Category", "Group" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SMemberPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASMemberPoint_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASMemberPoint, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASMemberPoint_Statics::NewProp_RootComp_MetaData), Z_Construct_UClass_ASMemberPoint_Statics::NewProp_RootComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASMemberPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMemberPoint_Statics::NewProp_RootComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASMemberPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASMemberPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASMemberPoint_Statics::ClassParams = {
		&ASMemberPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASMemberPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASMemberPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASMemberPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_ASMemberPoint_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASMemberPoint_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASMemberPoint()
	{
		if (!Z_Registration_Info_UClass_ASMemberPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASMemberPoint.OuterSingleton, Z_Construct_UClass_ASMemberPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASMemberPoint.OuterSingleton;
	}
	template<> PROCEDURALGENERATION_API UClass* StaticClass<ASMemberPoint>()
	{
		return ASMemberPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASMemberPoint);
	ASMemberPoint::~ASMemberPoint() {}
	struct Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_PACKAGE_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SMemberPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_PACKAGE_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SMemberPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASMemberPoint, ASMemberPoint::StaticClass, TEXT("ASMemberPoint"), &Z_Registration_Info_UClass_ASMemberPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASMemberPoint), 2910046744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_PACKAGE_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SMemberPoint_h_2147389870(TEXT("/Script/ProceduralGeneration"),
		Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_PACKAGE_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SMemberPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_PACKAGE_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SMemberPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
