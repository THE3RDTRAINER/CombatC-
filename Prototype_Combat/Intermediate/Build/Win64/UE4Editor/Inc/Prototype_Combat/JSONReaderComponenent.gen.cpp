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
	PROTOTYPE_COMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FSword();
	UPackage* Z_Construct_UPackage__Script_Prototype_Combat();
	PROTOTYPE_COMBAT_API UClass* Z_Construct_UClass_UJSONReaderComponenent_NoRegister();
	PROTOTYPE_COMBAT_API UClass* Z_Construct_UClass_UJSONReaderComponenent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PROTOTYPE_COMBAT_API UClass* Z_Construct_UClass_USwordStats_NoRegister();
	PROTOTYPE_COMBAT_API UClass* Z_Construct_UClass_USwordStats();
// End Cross Module References
class UScriptStruct* FSword::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROTOTYPE_COMBAT_API uint32 Get_Z_Construct_UScriptStruct_FSword_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSword, Z_Construct_UPackage__Script_Prototype_Combat(), TEXT("Sword"), sizeof(FSword), Get_Z_Construct_UScriptStruct_FSword_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSword(FSword::StaticStruct, TEXT("/Script/Prototype_Combat"), TEXT("Sword"), false, nullptr, nullptr);
static struct FScriptStruct_Prototype_Combat_StaticRegisterNativesFSword
{
	FScriptStruct_Prototype_Combat_StaticRegisterNativesFSword()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Sword")),new UScriptStruct::TCppStructOps<FSword>);
	}
} ScriptStruct_Prototype_Combat_StaticRegisterNativesFSword;
	struct Z_Construct_UScriptStruct_FSword_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sharpness_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_sharpness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_durability_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_durability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_price_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt16PropertyParams NewProp_price;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pommel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_pommel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hilt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_hilt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_crossGuard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_crossGuard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_blade_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_blade;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSword_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "JSONReaderComponenent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSword_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSword>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSword_Statics::NewProp_sharpness_MetaData[] = {
		{ "ModuleRelativePath", "JSONReaderComponenent.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FSword_Statics::NewProp_sharpness = { UE4CodeGen_Private::EPropertyClass::Int16, "sharpness", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSword, sharpness), METADATA_PARAMS(Z_Construct_UScriptStruct_FSword_Statics::NewProp_sharpness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSword_Statics::NewProp_sharpness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSword_Statics::NewProp_durability_MetaData[] = {
		{ "ModuleRelativePath", "JSONReaderComponenent.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FSword_Statics::NewProp_durability = { UE4CodeGen_Private::EPropertyClass::Int16, "durability", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSword, durability), METADATA_PARAMS(Z_Construct_UScriptStruct_FSword_Statics::NewProp_durability_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSword_Statics::NewProp_durability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSword_Statics::NewProp_price_MetaData[] = {
		{ "ModuleRelativePath", "JSONReaderComponenent.h" },
	};
#endif
	const UE4CodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FSword_Statics::NewProp_price = { UE4CodeGen_Private::EPropertyClass::Int16, "price", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSword, price), METADATA_PARAMS(Z_Construct_UScriptStruct_FSword_Statics::NewProp_price_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSword_Statics::NewProp_price_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSword_Statics::NewProp_pommel_MetaData[] = {
		{ "ModuleRelativePath", "JSONReaderComponenent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSword_Statics::NewProp_pommel = { UE4CodeGen_Private::EPropertyClass::Str, "pommel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSword, pommel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSword_Statics::NewProp_pommel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSword_Statics::NewProp_pommel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSword_Statics::NewProp_hilt_MetaData[] = {
		{ "ModuleRelativePath", "JSONReaderComponenent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSword_Statics::NewProp_hilt = { UE4CodeGen_Private::EPropertyClass::Str, "hilt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSword, hilt), METADATA_PARAMS(Z_Construct_UScriptStruct_FSword_Statics::NewProp_hilt_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSword_Statics::NewProp_hilt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSword_Statics::NewProp_crossGuard_MetaData[] = {
		{ "ModuleRelativePath", "JSONReaderComponenent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSword_Statics::NewProp_crossGuard = { UE4CodeGen_Private::EPropertyClass::Str, "crossGuard", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSword, crossGuard), METADATA_PARAMS(Z_Construct_UScriptStruct_FSword_Statics::NewProp_crossGuard_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSword_Statics::NewProp_crossGuard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSword_Statics::NewProp_blade_MetaData[] = {
		{ "ModuleRelativePath", "JSONReaderComponenent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSword_Statics::NewProp_blade = { UE4CodeGen_Private::EPropertyClass::Str, "blade", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FSword, blade), METADATA_PARAMS(Z_Construct_UScriptStruct_FSword_Statics::NewProp_blade_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FSword_Statics::NewProp_blade_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSword_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSword_Statics::NewProp_sharpness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSword_Statics::NewProp_durability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSword_Statics::NewProp_price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSword_Statics::NewProp_pommel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSword_Statics::NewProp_hilt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSword_Statics::NewProp_crossGuard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSword_Statics::NewProp_blade,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSword_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Prototype_Combat,
		nullptr,
		&NewStructOps,
		"Sword",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSword),
		alignof(FSword),
		Z_Construct_UScriptStruct_FSword_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FSword_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSword_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSword_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSword()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSword_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Prototype_Combat();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Sword"), sizeof(FSword), Get_Z_Construct_UScriptStruct_FSword_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSword_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSword_CRC() { return 3683363990U; }
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
	void USwordStats::StaticRegisterNativesUSwordStats()
	{
	}
	UClass* Z_Construct_UClass_USwordStats_NoRegister()
	{
		return USwordStats::StaticClass();
	}
	struct Z_Construct_UClass_USwordStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USwordStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UJSONReaderComponenent,
		(UObject* (*)())Z_Construct_UPackage__Script_Prototype_Combat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwordStats_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "JSONReaderComponenent.h" },
		{ "ModuleRelativePath", "JSONReaderComponenent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USwordStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwordStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USwordStats_Statics::ClassParams = {
		&USwordStats::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00A000A4u,
		nullptr, 0,
		nullptr, 0,
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_USwordStats_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USwordStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USwordStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USwordStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USwordStats, 3199609208);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USwordStats(Z_Construct_UClass_USwordStats, &USwordStats::StaticClass, TEXT("/Script/Prototype_Combat"), TEXT("USwordStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USwordStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
