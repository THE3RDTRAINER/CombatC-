// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PROTOTYPE_COMBAT_ColliderActor_generated_h
#error "ColliderActor.generated.h already included, missing '#pragma once' in ColliderActor.h"
#endif
#define PROTOTYPE_COMBAT_ColliderActor_generated_h

#define Prototype_Combat_Source_Prototype_Combat_ColliderActor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCompHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCompHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Prototype_Combat_Source_Prototype_Combat_ColliderActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCompHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCompHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Prototype_Combat_Source_Prototype_Combat_ColliderActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAColliderActor(); \
	friend struct Z_Construct_UClass_AColliderActor_Statics; \
public: \
	DECLARE_CLASS(AColliderActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Prototype_Combat"), NO_API) \
	DECLARE_SERIALIZER(AColliderActor)


#define Prototype_Combat_Source_Prototype_Combat_ColliderActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAColliderActor(); \
	friend struct Z_Construct_UClass_AColliderActor_Statics; \
public: \
	DECLARE_CLASS(AColliderActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Prototype_Combat"), NO_API) \
	DECLARE_SERIALIZER(AColliderActor)


#define Prototype_Combat_Source_Prototype_Combat_ColliderActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AColliderActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AColliderActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AColliderActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AColliderActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AColliderActor(AColliderActor&&); \
	NO_API AColliderActor(const AColliderActor&); \
public:


#define Prototype_Combat_Source_Prototype_Combat_ColliderActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AColliderActor(AColliderActor&&); \
	NO_API AColliderActor(const AColliderActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AColliderActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AColliderActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AColliderActor)


#define Prototype_Combat_Source_Prototype_Combat_ColliderActor_h_14_PRIVATE_PROPERTY_OFFSET
#define Prototype_Combat_Source_Prototype_Combat_ColliderActor_h_11_PROLOG
#define Prototype_Combat_Source_Prototype_Combat_ColliderActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Combat_Source_Prototype_Combat_ColliderActor_h_14_PRIVATE_PROPERTY_OFFSET \
	Prototype_Combat_Source_Prototype_Combat_ColliderActor_h_14_RPC_WRAPPERS \
	Prototype_Combat_Source_Prototype_Combat_ColliderActor_h_14_INCLASS \
	Prototype_Combat_Source_Prototype_Combat_ColliderActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Prototype_Combat_Source_Prototype_Combat_ColliderActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Prototype_Combat_Source_Prototype_Combat_ColliderActor_h_14_PRIVATE_PROPERTY_OFFSET \
	Prototype_Combat_Source_Prototype_Combat_ColliderActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Prototype_Combat_Source_Prototype_Combat_ColliderActor_h_14_INCLASS_NO_PURE_DECLS \
	Prototype_Combat_Source_Prototype_Combat_ColliderActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Prototype_Combat_Source_Prototype_Combat_ColliderActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
