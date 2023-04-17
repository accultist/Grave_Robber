// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Grave_Robber/Grave_RobberCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrave_RobberCharacter() {}
// Cross Module References
	GRAVE_ROBBER_API UClass* Z_Construct_UClass_AGrave_RobberCharacter_NoRegister();
	GRAVE_ROBBER_API UClass* Z_Construct_UClass_AGrave_RobberCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Grave_Robber();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void AGrave_RobberCharacter::StaticRegisterNativesAGrave_RobberCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrave_RobberCharacter);
	UClass* Z_Construct_UClass_AGrave_RobberCharacter_NoRegister()
	{
		return AGrave_RobberCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGrave_RobberCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrave_RobberCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Grave_Robber,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrave_RobberCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Grave_RobberCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Grave_RobberCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrave_RobberCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Top down camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grave_RobberCharacter.h" },
		{ "ToolTip", "Top down camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrave_RobberCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrave_RobberCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrave_RobberCharacter_Statics::NewProp_TopDownCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrave_RobberCharacter_Statics::NewProp_TopDownCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrave_RobberCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera above the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Grave_RobberCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrave_RobberCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrave_RobberCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrave_RobberCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrave_RobberCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrave_RobberCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrave_RobberCharacter_Statics::NewProp_TopDownCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrave_RobberCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrave_RobberCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrave_RobberCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrave_RobberCharacter_Statics::ClassParams = {
		&AGrave_RobberCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGrave_RobberCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrave_RobberCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrave_RobberCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrave_RobberCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrave_RobberCharacter()
	{
		if (!Z_Registration_Info_UClass_AGrave_RobberCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrave_RobberCharacter.OuterSingleton, Z_Construct_UClass_AGrave_RobberCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGrave_RobberCharacter.OuterSingleton;
	}
	template<> GRAVE_ROBBER_API UClass* StaticClass<AGrave_RobberCharacter>()
	{
		return AGrave_RobberCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrave_RobberCharacter);
	struct Z_CompiledInDeferFile_FID_Grave_Robber_Source_Grave_Robber_Grave_RobberCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Grave_Robber_Source_Grave_Robber_Grave_RobberCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGrave_RobberCharacter, AGrave_RobberCharacter::StaticClass, TEXT("AGrave_RobberCharacter"), &Z_Registration_Info_UClass_AGrave_RobberCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrave_RobberCharacter), 2878528368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Grave_Robber_Source_Grave_Robber_Grave_RobberCharacter_h_3467805990(TEXT("/Script/Grave_Robber"),
		Z_CompiledInDeferFile_FID_Grave_Robber_Source_Grave_Robber_Grave_RobberCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Grave_Robber_Source_Grave_Robber_Grave_RobberCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
