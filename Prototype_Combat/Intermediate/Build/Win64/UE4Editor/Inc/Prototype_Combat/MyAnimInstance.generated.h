// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROTOTYPE_COMBAT_MyAnimInstance_generated_h
#error "MyAnimInstance.generated.h already included, missing '#pragma once' in MyAnimInstance.h"
#endif
#define PROTOTYPE_COMBAT_MyAnimInstance_generated_h

#define Prototype_Combat_Source_Prototype_Combat_Public_MyAnimInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateMovementSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMovementSpeed(); \
		P_NATIVE_END; \
	}


#define Prototype_Combat_Source_Prototype_Combat_Public_MyAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateMovementSpeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMovementSpeed(); \
		P_NATIVE_END; \
	}


#define Prototype_Combat_Source_Prototype_Combat_Public_MyAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyAnimInstance(); \
	friend struct Z_Construct_UClass_UMyAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMyAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Prototype_Combat"), NO_API) \
	DECLARE_SERIALIZER(UMyAnimInstance)


#define Prototype_Combat_Source_Prototype_Combat_Public_MyAnimInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMyAnimInstance(); \
	friend struct Z_Construct_UClass_UMyAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMyAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Prototype_Combat"), NO_API) \
	DECLARE_SERIALIZER(UMyAnimInstance)


#define Prototype_Combat_Source_Prototype_Combat_Public_MyAnimInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyAnimInstance(UMyAnimInstance&&); \
	NO_API UMyAnimInstance(const UMyAnimInstance&); \
public:


#define Prototype_Combat_Source_Prototype_Combat_Public_MyAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyAnimInstance(UMyAnimInstance&&); \
	NO_API UMyAnimInstance(const UMyAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyAnimInstance)


#define Prototype_Combat_Source_Prototype_Combat_Public_MyAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MovementSpeed() { return STRUCT_OFFSET(UMyAnimInstance, MovementSpeed); } \
	FORCEINLINE static uint32 __PPO__MeleeAttackMontage() { return STRUCT_OFFSET(UMyAnimInstance, MeleeAttackMontage); }


#define Prototype_Combat_Source_Prototype_Combat_Public_MyAnimInstance_h_12_PROLOG
#define Prototype_Combat_Source_Prototype_Combat_Public_MyAnimInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Combat_Source_Prototype_Combat_Public_MyAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Prototype_Combat_Source_Prototype_Combat_Public_MyAnimInstance_h_15_RPC_WRAPPERS \
	Prototype_Combat_Source_Prototype_Combat_Public_MyAnimInstance_h_15_INCLASS \
	Prototype_Combat_Source_Prototype_Combat_Public_MyAnimInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype_Combat_Source_Prototype_Combat_Public_MyAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Combat_Source_Prototype_Combat_Public_MyAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Prototype_Combat_Source_Prototype_Combat_Public_MyAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype_Combat_Source_Prototype_Combat_Public_MyAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	Prototype_Combat_Source_Prototype_Combat_Public_MyAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype_Combat_Source_Prototype_Combat_Public_MyAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
