// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralGeneration/Public/SGroupComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGroupComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_ASCharacter_NoRegister();
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_ASGroup_NoRegister();
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_USGroupComponent();
	PROCEDURALGENERATION_API UClass* Z_Construct_UClass_USGroupComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProceduralGeneration();
// End Cross Module References
	DEFINE_FUNCTION(USGroupComponent::execGetLeader)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASCharacter**)Z_Param__Result=P_THIS->GetLeader();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USGroupComponent::execIsLeader)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLeader();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USGroupComponent::execGetGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const ASGroup**)Z_Param__Result=P_THIS->GetGroup();
		P_NATIVE_END;
	}
	void USGroupComponent::StaticRegisterNativesUSGroupComponent()
	{
		UClass* Class = USGroupComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGroup", &USGroupComponent::execGetGroup },
			{ "GetLeader", &USGroupComponent::execGetLeader },
			{ "IsLeader", &USGroupComponent::execIsLeader },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USGroupComponent_GetGroup_Statics
	{
		struct SGroupComponent_eventGetGroup_Parms
		{
			const ASGroup* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGroupComponent_GetGroup_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGroupComponent_GetGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGroupComponent_eventGetGroup_Parms, ReturnValue), Z_Construct_UClass_ASGroup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGroupComponent_GetGroup_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_USGroupComponent_GetGroup_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGroupComponent_GetGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGroupComponent_GetGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGroupComponent_GetGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SGroupComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGroupComponent_GetGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USGroupComponent, nullptr, "GetGroup", nullptr, nullptr, Z_Construct_UFunction_USGroupComponent_GetGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGroupComponent_GetGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGroupComponent_GetGroup_Statics::SGroupComponent_eventGetGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGroupComponent_GetGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGroupComponent_GetGroup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGroupComponent_GetGroup_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USGroupComponent_GetGroup_Statics::SGroupComponent_eventGetGroup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USGroupComponent_GetGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGroupComponent_GetGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USGroupComponent_GetLeader_Statics
	{
		struct SGroupComponent_eventGetLeader_Parms
		{
			ASCharacter* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGroupComponent_GetLeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGroupComponent_eventGetLeader_Parms, ReturnValue), Z_Construct_UClass_ASCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGroupComponent_GetLeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGroupComponent_GetLeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGroupComponent_GetLeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SGroupComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGroupComponent_GetLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USGroupComponent, nullptr, "GetLeader", nullptr, nullptr, Z_Construct_UFunction_USGroupComponent_GetLeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGroupComponent_GetLeader_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGroupComponent_GetLeader_Statics::SGroupComponent_eventGetLeader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGroupComponent_GetLeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGroupComponent_GetLeader_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGroupComponent_GetLeader_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USGroupComponent_GetLeader_Statics::SGroupComponent_eventGetLeader_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USGroupComponent_GetLeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGroupComponent_GetLeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USGroupComponent_IsLeader_Statics
	{
		struct SGroupComponent_eventIsLeader_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USGroupComponent_IsLeader_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SGroupComponent_eventIsLeader_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USGroupComponent_IsLeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SGroupComponent_eventIsLeader_Parms), &Z_Construct_UFunction_USGroupComponent_IsLeader_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGroupComponent_IsLeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGroupComponent_IsLeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USGroupComponent_IsLeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SGroupComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGroupComponent_IsLeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USGroupComponent, nullptr, "IsLeader", nullptr, nullptr, Z_Construct_UFunction_USGroupComponent_IsLeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGroupComponent_IsLeader_Statics::PropPointers), sizeof(Z_Construct_UFunction_USGroupComponent_IsLeader_Statics::SGroupComponent_eventIsLeader_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGroupComponent_IsLeader_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGroupComponent_IsLeader_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGroupComponent_IsLeader_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USGroupComponent_IsLeader_Statics::SGroupComponent_eventIsLeader_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USGroupComponent_IsLeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGroupComponent_IsLeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USGroupComponent);
	UClass* Z_Construct_UClass_USGroupComponent_NoRegister()
	{
		return USGroupComponent::StaticClass();
	}
	struct Z_Construct_UClass_USGroupComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USGroupComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralGeneration,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGroupComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USGroupComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USGroupComponent_GetGroup, "GetGroup" }, // 1410130866
		{ &Z_Construct_UFunction_USGroupComponent_GetLeader, "GetLeader" }, // 1869478092
		{ &Z_Construct_UFunction_USGroupComponent_IsLeader, "IsLeader" }, // 940734811
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGroupComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGroupComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SGroupComponent.h" },
		{ "ModuleRelativePath", "Public/SGroupComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGroupComponent_Statics::NewProp_Group_MetaData[] = {
		{ "Category", "Custom" },
		{ "ModuleRelativePath", "Public/SGroupComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGroupComponent_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGroupComponent, Group), Z_Construct_UClass_ASGroup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGroupComponent_Statics::NewProp_Group_MetaData), Z_Construct_UClass_USGroupComponent_Statics::NewProp_Group_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGroupComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGroupComponent_Statics::NewProp_Group,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USGroupComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGroupComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USGroupComponent_Statics::ClassParams = {
		&USGroupComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USGroupComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USGroupComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGroupComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USGroupComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGroupComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USGroupComponent()
	{
		if (!Z_Registration_Info_UClass_USGroupComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGroupComponent.OuterSingleton, Z_Construct_UClass_USGroupComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USGroupComponent.OuterSingleton;
	}
	template<> PROCEDURALGENERATION_API UClass* StaticClass<USGroupComponent>()
	{
		return USGroupComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USGroupComponent);
	USGroupComponent::~USGroupComponent() {}
	struct Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SGroupComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SGroupComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USGroupComponent, USGroupComponent::StaticClass, TEXT("USGroupComponent"), &Z_Registration_Info_UClass_USGroupComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGroupComponent), 1400535594U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SGroupComponent_h_839176623(TEXT("/Script/ProceduralGeneration"),
		Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SGroupComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_ProceduralGenerationPlugin_Newest_ProceduralGeneration_HostProject_Plugins_ProceduralGeneration_Source_ProceduralGeneration_Public_SGroupComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
