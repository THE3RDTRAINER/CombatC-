// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototype_Combat/JSONReaderComponenent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJSONReaderComponenent() {}
// Cross Module References
	PROTOTYPE_COMBAT_API UClass* Z_Construct_UClass_UJSONReaderComponenent_NoRegister();
	PROTOTYPE_COMBAT_API UClass* Z_Construct_UClass_UJSONReaderComponenent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Prototype_Combat();
// End Cross Module References
	void UJSONReaderComponenent::StaticRegisterNativesUJSONReaderComponenent()
	{
	}
	UClass* Z_Construct_UClass_UJSONReaderComponenent_NoRegister()
	{
		return UJSONReaderComponenent::StaticClass();
	}
	struct Z_Construct_UClass_UJSONReaderComponenent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJSONReaderComponenent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Prototype_Combat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJSONReaderComponenent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "JSONReaderComponenent.h" },
		{ "ModuleRelativePath", "JSONReaderComponenent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJSONReaderComponenent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJSONReaderComponenent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJSONReaderComponenent_Statics::ClassParams = {
		&UJSONReaderComponenent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UJSONReaderComponenent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UJSONReaderComponenent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJSONReaderComponenent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJSONReaderComponenent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJSONReaderComponenent, 192274830);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJSONReaderComponenent(Z_Construct_UClass_UJSONReaderComponenent, &UJSONReaderComponenent::StaticClass, TEXT("/Script/Prototype_Combat"), TEXT("UJSONReaderComponenent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJSONReaderComponenent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
