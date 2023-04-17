// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Grave_Robber/Grave_RobberGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrave_RobberGameMode() {}
// Cross Module References
	GRAVE_ROBBER_API UClass* Z_Construct_UClass_AGrave_RobberGameMode_NoRegister();
	GRAVE_ROBBER_API UClass* Z_Construct_UClass_AGrave_RobberGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Grave_Robber();
// End Cross Module References
	void AGrave_RobberGameMode::StaticRegisterNativesAGrave_RobberGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrave_RobberGameMode);
	UClass* Z_Construct_UClass_AGrave_RobberGameMode_NoRegister()
	{
		return AGrave_RobberGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGrave_RobberGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrave_RobberGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Grave_Robber,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrave_RobberGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Grave_RobberGameMode.h" },
		{ "ModuleRelativePath", "Grave_RobberGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrave_RobberGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrave_RobberGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrave_RobberGameMode_Statics::ClassParams = {
		&AGrave_RobberGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGrave_RobberGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrave_RobberGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrave_RobberGameMode()
	{
		if (!Z_Registration_Info_UClass_AGrave_RobberGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrave_RobberGameMode.OuterSingleton, Z_Construct_UClass_AGrave_RobberGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGrave_RobberGameMode.OuterSingleton;
	}
	template<> GRAVE_ROBBER_API UClass* StaticClass<AGrave_RobberGameMode>()
	{
		return AGrave_RobberGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrave_RobberGameMode);
	struct Z_CompiledInDeferFile_FID_Grave_Robber_Source_Grave_Robber_Grave_RobberGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Grave_Robber_Source_Grave_Robber_Grave_RobberGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGrave_RobberGameMode, AGrave_RobberGameMode::StaticClass, TEXT("AGrave_RobberGameMode"), &Z_Registration_Info_UClass_AGrave_RobberGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrave_RobberGameMode), 1442833794U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Grave_Robber_Source_Grave_Robber_Grave_RobberGameMode_h_640639879(TEXT("/Script/Grave_Robber"),
		Z_CompiledInDeferFile_FID_Grave_Robber_Source_Grave_Robber_Grave_RobberGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Grave_Robber_Source_Grave_Robber_Grave_RobberGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
