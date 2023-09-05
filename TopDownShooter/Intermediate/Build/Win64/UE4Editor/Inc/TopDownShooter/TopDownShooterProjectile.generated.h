// Copyright Epic Games, Inc. All Rights Reserved.
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
#ifdef TOPDOWNSHOOTER_TopDownShooterProjectile_generated_h
#error "TopDownShooterProjectile.generated.h already included, missing '#pragma once' in TopDownShooterProjectile.h"
#endif
#define TOPDOWNSHOOTER_TopDownShooterProjectile_generated_h

#define TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h_15_SPARSE_DATA
#define TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATopDownShooterProjectile(); \
	friend struct Z_Construct_UClass_ATopDownShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(ATopDownShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownShooter"), NO_API) \
	DECLARE_SERIALIZER(ATopDownShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATopDownShooterProjectile(); \
	friend struct Z_Construct_UClass_ATopDownShooterProjectile_Statics; \
public: \
	DECLARE_CLASS(ATopDownShooterProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownShooter"), NO_API) \
	DECLARE_SERIALIZER(ATopDownShooterProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATopDownShooterProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATopDownShooterProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownShooterProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownShooterProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopDownShooterProjectile(ATopDownShooterProjectile&&); \
	NO_API ATopDownShooterProjectile(const ATopDownShooterProjectile&); \
public:


#define TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopDownShooterProjectile(ATopDownShooterProjectile&&); \
	NO_API ATopDownShooterProjectile(const ATopDownShooterProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopDownShooterProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopDownShooterProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATopDownShooterProjectile)


#define TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(ATopDownShooterProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATopDownShooterProjectile, ProjectileMovement); }


#define TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h_12_PROLOG
#define TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h_15_SPARSE_DATA \
	TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h_15_RPC_WRAPPERS \
	TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h_15_INCLASS \
	TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h_15_SPARSE_DATA \
	TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h_15_INCLASS_NO_PURE_DECLS \
	TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNSHOOTER_API UClass* StaticClass<class ATopDownShooterProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TopDownShooter_Source_TopDownShooter_TopDownShooterProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
