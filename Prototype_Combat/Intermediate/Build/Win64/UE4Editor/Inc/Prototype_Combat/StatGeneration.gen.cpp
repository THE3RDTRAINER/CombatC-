// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototype_Combat/StatGeneration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatGeneration() {}
// Cross Module References
	PROTOTYPE_COMBAT_API UClass* Z_Construct_UClass_UStatGeneration_NoRegister();
	PROTOTYPE_COMBAT_API UClass* Z_Construct_UClass_UStatGeneration();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Prototype_Combat();
// End Cross Module References
	void UStatGeneration::StaticRegisterNativesUStatGeneration()
	{
	}
	UClass* Z_Construct_UClass_UStatGeneration_NoRegister()
	{
		return UStatGeneration::StaticClass();
	}
	struct Z_Construct_UClass_UStatGeneration_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__sharpness_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__sharpness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__durability_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp__durability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatGeneration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Prototype_Combat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatGeneration_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "StatGeneration.h" },
		{ "ModuleRelativePath", "StatGeneration.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatGeneration_Statics::NewProp__Health_MetaData[] = {
		{ "Category", "StatGeneration" },
		{ "ModuleRelativePath", "StatGeneration.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UStatGeneration_Statics::NewProp__Health = { UE4CodeGen_Private::EPropertyClass::Int, "_Health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UStatGeneration, _Health), METADATA_PARAMS(Z_Construct_UClass_UStatGeneration_Statics::NewProp__Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStatGeneration_Statics::NewProp__Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatGeneration_Statics::NewProp__sharpness_MetaData[] = {
		{ "Category", "StatGeneration" },
		{ "ModuleRelativePath", "StatGeneration.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UStatGeneration_Statics::NewProp__sharpness = { UE4CodeGen_Private::EPropertyClass::Int, "_sharpness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UStatGeneration, _sharpness), METADATA_PARAMS(Z_Construct_UClass_UStatGeneration_Statics::NewProp__sharpness_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStatGeneration_Statics::NewProp__sharpness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatGeneration_Statics::NewProp__durability_MetaData[] = {
		{ "Category", "StatGeneration" },
		{ "ModuleRelativePath", "StatGeneration.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UStatGeneration_Statics::NewProp__durability = { UE4CodeGen_Private::EPropertyClass::Int, "_durability", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UStatGeneration, _durability), METADATA_PARAMS(Z_Construct_UClass_UStatGeneration_Statics::NewProp__durability_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStatGeneration_Statics::NewProp__durability_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatGeneration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatGeneration_Statics::NewProp__Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatGeneration_Statics::NewProp__sharpness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatGeneration_Statics::NewProp__durability,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatGeneration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatGeneration>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStatGeneration_Statics::ClassParams = {
		&UStatGeneration::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		nullptr, 0,
		Z_Construct_UClass_UStatGeneration_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UStatGeneration_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UStatGeneration_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStatGeneration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatGeneration()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStatGeneration_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStatGeneration, 2733498544);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStatGeneration(Z_Construct_UClass_UStatGeneration, &UStatGeneration::StaticClass, TEXT("/Script/Prototype_Combat"), TEXT("UStatGeneration"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatGeneration);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
