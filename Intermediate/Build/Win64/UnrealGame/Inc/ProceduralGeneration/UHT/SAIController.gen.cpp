// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralGeneration/Public/SAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_ASAIController();
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_ASAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProceduralGeneration();
// End Cross Module References
	void ASAIController::StaticRegisterNativesASAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASAIController);
	UClass* Z_Construct_UClass_ASAIController_NoRegister()
	{
		return ASAIController::StaticClass();
	}
	struct Z_Construct_UClass_ASAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralGeneration,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SAIController.h" },
		{ "ModuleRelativePath", "Public/SAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASAIController_Statics::ClassParams = {
		&ASAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASAIController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASAIController()
	{
		if (!Z_Registration_Info_UClass_ASAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASAIController.OuterSingleton, Z_Construct_UClass_ASAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASAIController.OuterSingleton;
	}
	template<> PROCEDURALGENERATION_API UClass* StaticClass<ASAIController>()
	{
		return ASAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASAIController);
	ASAIController::~ASAIController() {}
	struct Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASAIController, ASAIController::StaticClass, TEXT("ASAIController"), &Z_Registration_Info_UClass_ASAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASAIController), 332617505U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SAIController_h_2151633473(TEXT("/Script/ProceduralGeneration"),
		Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
