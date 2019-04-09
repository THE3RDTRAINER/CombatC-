// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prototype_Combat/FP_FirstPerson/FP_FirstPersonCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFP_FirstPersonCharacter() {}
// Cross Module References
	PROTOTYPE_COMBAT_API UClass* Z_Construct_UClass_AFP_FirstPersonCharacter_NoRegister();
	PROTOTYPE_COMBAT_API UClass* Z_Construct_UClass_AFP_FirstPersonCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Prototype_Combat();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AFP_FirstPersonCharacter::StaticRegisterNativesAFP_FirstPersonCharacter()
	{
	}
	UClass* Z_Construct_UClass_AFP_FirstPersonCharacter_NoRegister()
	{
		return AFP_FirstPersonCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFP_FirstPersonCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GunOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FP_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FP_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Prototype_Combat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FP_FirstPerson/FP_FirstPersonCharacter.h" },
		{ "ModuleRelativePath", "FP_FirstPerson/FP_FirstPersonCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_WeaponDamage_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FP_FirstPerson/FP_FirstPersonCharacter.h" },
		{ "ToolTip", "This is multiplied by the direction vector when the weapon trace hits something to apply velocity to the component that is hit" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_WeaponDamage = { UE4CodeGen_Private::EPropertyClass::Float, "WeaponDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFP_FirstPersonCharacter, WeaponDamage), METADATA_PARAMS(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_WeaponDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_WeaponDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_WeaponRange_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FP_FirstPerson/FP_FirstPersonCharacter.h" },
		{ "ToolTip", "This is when calculating the trace to determine what the weapon has hit" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_WeaponRange = { UE4CodeGen_Private::EPropertyClass::Float, "WeaponRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFP_FirstPersonCharacter, WeaponRange), METADATA_PARAMS(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_WeaponRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_WeaponRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FP_FirstPerson/FP_FirstPersonCharacter.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_FireAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "FireAnimation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFP_FirstPersonCharacter, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_FireAnimation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FP_FirstPerson/FP_FirstPersonCharacter.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_FireSound = { UE4CodeGen_Private::EPropertyClass::Object, "FireSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFP_FirstPersonCharacter, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_FireSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_GunOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "FP_FirstPerson/FP_FirstPersonCharacter.h" },
		{ "ToolTip", "Gun muzzle's offset from the characters location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_GunOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "GunOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFP_FirstPersonCharacter, GunOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_GunOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_GunOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "FP_FirstPerson/FP_FirstPersonCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_BaseLookUpRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseLookUpRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AFP_FirstPersonCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "FP_FirstPerson/FP_FirstPersonCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_BaseTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AFP_FirstPersonCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FP_FirstPerson/FP_FirstPersonCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_FirstPersonCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "FirstPersonCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AFP_FirstPersonCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_FP_Gun_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FP_FirstPerson/FP_FirstPersonCharacter.h" },
		{ "ToolTip", "Gun mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_FP_Gun = { UE4CodeGen_Private::EPropertyClass::Object, "FP_Gun", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AFP_FirstPersonCharacter, FP_Gun), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_FP_Gun_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_FP_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FP_FirstPerson/FP_FirstPersonCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_Mesh1P = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh1P", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(AFP_FirstPersonCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_Mesh1P_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_Mesh1P_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_WeaponDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_WeaponRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_FireAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_GunOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_FP_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::NewProp_Mesh1P,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFP_FirstPersonCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::ClassParams = {
		&AFP_FirstPersonCharacter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		nullptr, 0,
		Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFP_FirstPersonCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFP_FirstPersonCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFP_FirstPersonCharacter, 4039887509);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFP_FirstPersonCharacter(Z_Construct_UClass_AFP_FirstPersonCharacter, &AFP_FirstPersonCharacter::StaticClass, TEXT("/Script/Prototype_Combat"), TEXT("AFP_FirstPersonCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFP_FirstPersonCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
