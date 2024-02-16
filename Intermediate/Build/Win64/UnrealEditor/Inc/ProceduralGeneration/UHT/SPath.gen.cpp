// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralGeneration/Public/SPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPath() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_ASPath();
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_ASPath_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProceduralGeneration();
// End Cross Module References
	DEFINE_FUNCTION(ASPath::execGetNextPointAsWorldPos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetNextPointAsWorldPos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPath::execIncrementIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementIndex();
		P_NATIVE_END;
	}
	void ASPath::StaticRegisterNativesASPath()
	{
		UClass* Class = ASPath::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNextPointAsWorldPos", &ASPath::execGetNextPointAsWorldPos },
			{ "IncrementIndex", &ASPath::execIncrementIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASPath_GetNextPointAsWorldPos_Statics
	{
		struct SPath_eventGetNextPointAsWorldPos_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASPath_GetNextPointAsWorldPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SPath_eventGetNextPointAsWorldPos_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPath_GetNextPointAsWorldPos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPath_GetNextPointAsWorldPos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPath_GetNextPointAsWorldPos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "Comment", "// Returns the next spline point as World Position\n" },
		{ "ModuleRelativePath", "Public/SPath.h" },
		{ "ToolTip", "Returns the next spline point as World Position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPath_GetNextPointAsWorldPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPath, nullptr, "GetNextPointAsWorldPos", nullptr, nullptr, Z_Construct_UFunction_ASPath_GetNextPointAsWorldPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPath_GetNextPointAsWorldPos_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASPath_GetNextPointAsWorldPos_Statics::SPath_eventGetNextPointAsWorldPos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPath_GetNextPointAsWorldPos_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPath_GetNextPointAsWorldPos_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPath_GetNextPointAsWorldPos_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ASPath_GetNextPointAsWorldPos_Statics::SPath_eventGetNextPointAsWorldPos_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ASPath_GetNextPointAsWorldPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPath_GetNextPointAsWorldPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPath_IncrementIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPath_IncrementIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "Comment", "// Increments the spline path index.\n" },
		{ "ModuleRelativePath", "Public/SPath.h" },
		{ "ToolTip", "Increments the spline path index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPath_IncrementIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPath, nullptr, "IncrementIndex", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASPath_IncrementIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASPath_IncrementIndex_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASPath_IncrementIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASPath_IncrementIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASPath);
	UClass* Z_Construct_UClass_ASPath_NoRegister()
	{
		return ASPath::StaticClass();
	}
	struct Z_Construct_UClass_ASPath_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplinePath_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplinePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralGeneration,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPath_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASPath_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASPath_GetNextPointAsWorldPos, "GetNextPointAsWorldPos" }, // 228569990
		{ &Z_Construct_UFunction_ASPath_IncrementIndex, "IncrementIndex" }, // 2580899257
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPath_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SPath.h" },
		{ "ModuleRelativePath", "Public/SPath.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPath_Statics::NewProp_SplinePath_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SPath.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASPath_Statics::NewProp_SplinePath = { "SplinePath", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPath, SplinePath), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPath_Statics::NewProp_SplinePath_MetaData), Z_Construct_UClass_ASPath_Statics::NewProp_SplinePath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPath_Statics::NewProp_SplinePath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPath>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASPath_Statics::ClassParams = {
		&ASPath::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASPath_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASPath_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPath_Statics::Class_MetaDataParams), Z_Construct_UClass_ASPath_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPath_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASPath()
	{
		if (!Z_Registration_Info_UClass_ASPath.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASPath.OuterSingleton, Z_Construct_UClass_ASPath_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASPath.OuterSingleton;
	}
	template<> PROCEDURALGENERATION_API UClass* StaticClass<ASPath>()
	{
		return ASPath::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPath);
	ASPath::~ASPath() {}
	struct Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SPath_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SPath_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASPath, ASPath::StaticClass, TEXT("ASPath"), &Z_Registration_Info_UClass_ASPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASPath), 226922385U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SPath_h_334294530(TEXT("/Script/ProceduralGeneration"),
		Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SPath_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
