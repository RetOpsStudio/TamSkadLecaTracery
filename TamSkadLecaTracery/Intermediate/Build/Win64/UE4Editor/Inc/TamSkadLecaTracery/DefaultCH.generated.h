// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimInstance;
#ifdef TAMSKADLECATRACERY_DefaultCH_generated_h
#error "DefaultCH.generated.h already included, missing '#pragma once' in DefaultCH.h"
#endif
#define TAMSKADLECATRACERY_DefaultCH_generated_h

#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_17_SPARSE_DATA
#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalculateMovementDirection); \
	DECLARE_FUNCTION(execSetupVariables); \
	DECLARE_FUNCTION(execSetHp); \
	DECLARE_FUNCTION(execGetHp);


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateMovementDirection); \
	DECLARE_FUNCTION(execSetupVariables); \
	DECLARE_FUNCTION(execSetHp); \
	DECLARE_FUNCTION(execGetHp);


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefaultCH(); \
	friend struct Z_Construct_UClass_ADefaultCH_Statics; \
public: \
	DECLARE_CLASS(ADefaultCH, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TamSkadLecaTracery"), NO_API) \
	DECLARE_SERIALIZER(ADefaultCH) \
	virtual UObject* _getUObject() const override { return const_cast<ADefaultCH*>(this); }


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_17_INCLASS \
private: \
	static void StaticRegisterNativesADefaultCH(); \
	friend struct Z_Construct_UClass_ADefaultCH_Statics; \
public: \
	DECLARE_CLASS(ADefaultCH, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TamSkadLecaTracery"), NO_API) \
	DECLARE_SERIALIZER(ADefaultCH) \
	virtual UObject* _getUObject() const override { return const_cast<ADefaultCH*>(this); }


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADefaultCH(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADefaultCH) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultCH); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultCH); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultCH(ADefaultCH&&); \
	NO_API ADefaultCH(const ADefaultCH&); \
public:


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultCH(ADefaultCH&&); \
	NO_API ADefaultCH(const ADefaultCH&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultCH); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultCH); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefaultCH)


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartingWeapon() { return STRUCT_OFFSET(ADefaultCH, StartingWeapon); } \
	FORCEINLINE static uint32 __PPO__Fov() { return STRUCT_OFFSET(ADefaultCH, Fov); } \
	FORCEINLINE static uint32 __PPO__AimFov() { return STRUCT_OFFSET(ADefaultCH, AimFov); } \
	FORCEINLINE static uint32 __PPO__HP() { return STRUCT_OFFSET(ADefaultCH, HP); }


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_14_PROLOG
#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_17_PRIVATE_PROPERTY_OFFSET \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_17_SPARSE_DATA \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_17_RPC_WRAPPERS \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_17_INCLASS \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_17_PRIVATE_PROPERTY_OFFSET \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_17_SPARSE_DATA \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_17_INCLASS_NO_PURE_DECLS \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TAMSKADLECATRACERY_API UClass* StaticClass<class ADefaultCH>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
