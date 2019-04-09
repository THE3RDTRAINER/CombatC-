// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototype_Combat/FP_FirstPerson/FP_FirstPersonGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFP_FirstPersonGameMode() {}
// Cross Module References
	PROTOTYPE_COMBAT_API UClass* Z_Construct_UClass_AFP_FirstPersonGameMode_NoRegister();
	PROTOTYPE_COMBAT_API UClass* Z_Construct_UClass_AFP_FirstPersonGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Prototype_Combat();
// End Cross Module References
	void AFP_FirstPersonGameMode::StaticRegisterNativesAFP_FirstPersonGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFP_FirstPersonGameMode_NoRegister()
	{
		return AFP_FirstPersonGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFP_FirstPersonGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFP_FirstPersonGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Prototype_Combat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_FirstPersonGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FP_FirstPerson/FP_FirstPersonGameMode.h" },
		{ "ModuleRelativePath", "FP_FirstPerson/FP_FirstPersonGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFP_FirstPersonGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFP_FirstPersonGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFP_FirstPersonGameMode_Statics::ClassParams = {
		&AFP_FirstPersonGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFP_FirstPersonGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFP_FirstPersonGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFP_FirstPersonGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFP_FirstPersonGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFP_FirstPersonGameMode, 2894548647);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFP_FirstPersonGameMode(Z_Construct_UClass_AFP_FirstPersonGameMode, &AFP_FirstPersonGameMode::StaticClass, TEXT("/Script/Prototype_Combat"), TEXT("AFP_FirstPersonGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFP_FirstPersonGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
