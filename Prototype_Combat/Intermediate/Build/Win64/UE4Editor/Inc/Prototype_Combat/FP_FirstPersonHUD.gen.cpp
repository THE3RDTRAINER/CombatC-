// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototype_Combat/FP_FirstPerson/FP_FirstPersonHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFP_FirstPersonHUD() {}
// Cross Module References
	PROTOTYPE_COMBAT_API UClass* Z_Construct_UClass_AFP_FirstPersonHUD_NoRegister();
	PROTOTYPE_COMBAT_API UClass* Z_Construct_UClass_AFP_FirstPersonHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Prototype_Combat();
// End Cross Module References
	void AFP_FirstPersonHUD::StaticRegisterNativesAFP_FirstPersonHUD()
	{
	}
	UClass* Z_Construct_UClass_AFP_FirstPersonHUD_NoRegister()
	{
		return AFP_FirstPersonHUD::StaticClass();
	}
	struct Z_Construct_UClass_AFP_FirstPersonHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFP_FirstPersonHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Prototype_Combat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_FirstPersonHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FP_FirstPerson/FP_FirstPersonHUD.h" },
		{ "ModuleRelativePath", "FP_FirstPerson/FP_FirstPersonHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFP_FirstPersonHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFP_FirstPersonHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFP_FirstPersonHUD_Statics::ClassParams = {
		&AFP_FirstPersonHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFP_FirstPersonHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFP_FirstPersonHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFP_FirstPersonHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFP_FirstPersonHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFP_FirstPersonHUD, 2618279525);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFP_FirstPersonHUD(Z_Construct_UClass_AFP_FirstPersonHUD, &AFP_FirstPersonHUD::StaticClass, TEXT("/Script/Prototype_Combat"), TEXT("AFP_FirstPersonHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFP_FirstPersonHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
