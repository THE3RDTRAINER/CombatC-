// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototype_Combat/Prototype_CombatGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrototype_CombatGameModeBase() {}
// Cross Module References
	PROTOTYPE_COMBAT_API UClass* Z_Construct_UClass_APrototype_CombatGameModeBase_NoRegister();
	PROTOTYPE_COMBAT_API UClass* Z_Construct_UClass_APrototype_CombatGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Prototype_Combat();
// End Cross Module References
	void APrototype_CombatGameModeBase::StaticRegisterNativesAPrototype_CombatGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APrototype_CombatGameModeBase_NoRegister()
	{
		return APrototype_CombatGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APrototype_CombatGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrototype_CombatGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Prototype_Combat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrototype_CombatGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Prototype_CombatGameModeBase.h" },
		{ "ModuleRelativePath", "Prototype_CombatGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrototype_CombatGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrototype_CombatGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APrototype_CombatGameModeBase_Statics::ClassParams = {
		&APrototype_CombatGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APrototype_CombatGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APrototype_CombatGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrototype_CombatGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APrototype_CombatGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APrototype_CombatGameModeBase, 312371790);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrototype_CombatGameModeBase(Z_Construct_UClass_APrototype_CombatGameModeBase, &APrototype_CombatGameModeBase::StaticClass, TEXT("/Script/Prototype_Combat"), TEXT("APrototype_CombatGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrototype_CombatGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
