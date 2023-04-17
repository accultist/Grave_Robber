// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Grave_Robber/Grave_RobberPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrave_RobberPlayerController() {}
// Cross Module References
	GRAVE_ROBBER_API UClass* Z_Construct_UClass_AGrave_RobberPlayerController_NoRegister();
	GRAVE_ROBBER_API UClass* Z_Construct_UClass_AGrave_RobberPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Grave_Robber();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
// End Cross Module References
	void AGrave_RobberPlayerController::StaticRegisterNativesAGrave_RobberPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrave_RobberPlayerController);
	UClass* Z_Construct_UClass_AGrave_RobberPlayerController_NoRegister()
	{
		return AGrave_RobberPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AGrave_RobberPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortPressThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShortPressThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FXCursor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FXCursor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrave_RobberPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Grave_Robber,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrave_RobberPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Grave_RobberPlayerController.h" },
		{ "ModuleRelativePath", "Grave_RobberPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrave_RobberPlayerController_Statics::NewProp_ShortPressThreshold_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Time Threshold to know if it was a short press */" },
		{ "ModuleRelativePath", "Grave_RobberPlayerController.h" },
		{ "ToolTip", "Time Threshold to know if it was a short press" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrave_RobberPlayerController_Statics::NewProp_ShortPressThreshold = { "ShortPressThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrave_RobberPlayerController, ShortPressThreshold), METADATA_PARAMS(Z_Construct_UClass_AGrave_RobberPlayerController_Statics::NewProp_ShortPressThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrave_RobberPlayerController_Statics::NewProp_ShortPressThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrave_RobberPlayerController_Statics::NewProp_FXCursor_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** FX Class that we will spawn when clicking */" },
		{ "ModuleRelativePath", "Grave_RobberPlayerController.h" },
		{ "ToolTip", "FX Class that we will spawn when clicking" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrave_RobberPlayerController_Statics::NewProp_FXCursor = { "FXCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrave_RobberPlayerController, FXCursor), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrave_RobberPlayerController_Statics::NewProp_FXCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrave_RobberPlayerController_Statics::NewProp_FXCursor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrave_RobberPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrave_RobberPlayerController_Statics::NewProp_ShortPressThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrave_RobberPlayerController_Statics::NewProp_FXCursor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrave_RobberPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrave_RobberPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrave_RobberPlayerController_Statics::ClassParams = {
		&AGrave_RobberPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGrave_RobberPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrave_RobberPlayerController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrave_RobberPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrave_RobberPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrave_RobberPlayerController()
	{
		if (!Z_Registration_Info_UClass_AGrave_RobberPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrave_RobberPlayerController.OuterSingleton, Z_Construct_UClass_AGrave_RobberPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGrave_RobberPlayerController.OuterSingleton;
	}
	template<> GRAVE_ROBBER_API UClass* StaticClass<AGrave_RobberPlayerController>()
	{
		return AGrave_RobberPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrave_RobberPlayerController);
	struct Z_CompiledInDeferFile_FID_Grave_Robber_Source_Grave_Robber_Grave_RobberPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Grave_Robber_Source_Grave_Robber_Grave_RobberPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGrave_RobberPlayerController, AGrave_RobberPlayerController::StaticClass, TEXT("AGrave_RobberPlayerController"), &Z_Registration_Info_UClass_AGrave_RobberPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrave_RobberPlayerController), 1914394829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Grave_Robber_Source_Grave_Robber_Grave_RobberPlayerController_h_2842290427(TEXT("/Script/Grave_Robber"),
		Z_CompiledInDeferFile_FID_Grave_Robber_Source_Grave_Robber_Grave_RobberPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Grave_Robber_Source_Grave_Robber_Grave_RobberPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
