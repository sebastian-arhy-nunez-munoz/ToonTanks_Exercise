// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOONTANKS_Tank_generated_h
#error "Tank.generated.h already included, missing '#pragma once' in Tank.h"
#endif
#define TOONTANKS_Tank_generated_h

#define ToonTanks_4_26_Source_ToonTanks_Tank_h_16_SPARSE_DATA
#define ToonTanks_4_26_Source_ToonTanks_Tank_h_16_RPC_WRAPPERS
#define ToonTanks_4_26_Source_ToonTanks_Tank_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define ToonTanks_4_26_Source_ToonTanks_Tank_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATank(); \
	friend struct Z_Construct_UClass_ATank_Statics; \
public: \
	DECLARE_CLASS(ATank, ABasePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(ATank)


#define ToonTanks_4_26_Source_ToonTanks_Tank_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATank(); \
	friend struct Z_Construct_UClass_ATank_Statics; \
public: \
	DECLARE_CLASS(ATank, ABasePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ToonTanks"), NO_API) \
	DECLARE_SERIALIZER(ATank)


#define ToonTanks_4_26_Source_ToonTanks_Tank_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATank(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATank) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank(ATank&&); \
	NO_API ATank(const ATank&); \
public:


#define ToonTanks_4_26_Source_ToonTanks_Tank_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATank(ATank&&); \
	NO_API ATank(const ATank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATank); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATank)


#define ToonTanks_4_26_Source_ToonTanks_Tank_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ATank, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ATank, Camera); } \
	FORCEINLINE static uint32 __PPO__Speed() { return STRUCT_OFFSET(ATank, Speed); } \
	FORCEINLINE static uint32 __PPO__TurnRate() { return STRUCT_OFFSET(ATank, TurnRate); }


#define ToonTanks_4_26_Source_ToonTanks_Tank_h_13_PROLOG
#define ToonTanks_4_26_Source_ToonTanks_Tank_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_4_26_Source_ToonTanks_Tank_h_16_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_4_26_Source_ToonTanks_Tank_h_16_SPARSE_DATA \
	ToonTanks_4_26_Source_ToonTanks_Tank_h_16_RPC_WRAPPERS \
	ToonTanks_4_26_Source_ToonTanks_Tank_h_16_INCLASS \
	ToonTanks_4_26_Source_ToonTanks_Tank_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ToonTanks_4_26_Source_ToonTanks_Tank_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ToonTanks_4_26_Source_ToonTanks_Tank_h_16_PRIVATE_PROPERTY_OFFSET \
	ToonTanks_4_26_Source_ToonTanks_Tank_h_16_SPARSE_DATA \
	ToonTanks_4_26_Source_ToonTanks_Tank_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ToonTanks_4_26_Source_ToonTanks_Tank_h_16_INCLASS_NO_PURE_DECLS \
	ToonTanks_4_26_Source_ToonTanks_Tank_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOONTANKS_API UClass* StaticClass<class ATank>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ToonTanks_4_26_Source_ToonTanks_Tank_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
