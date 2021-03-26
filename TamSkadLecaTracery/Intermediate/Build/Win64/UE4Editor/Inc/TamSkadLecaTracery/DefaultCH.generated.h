// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimInstance;
struct FChStates;
#ifdef TAMSKADLECATRACERY_DefaultCH_generated_h
#error "DefaultCH.generated.h already included, missing '#pragma once' in DefaultCH.h"
#endif
#define TAMSKADLECATRACERY_DefaultCH_generated_h

#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChStates_Statics; \
	TAMSKADLECATRACERY_API static class UScriptStruct* StaticStruct();


template<> TAMSKADLECATRACERY_API UScriptStruct* StaticStruct<struct FChStates>();

#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_SPARSE_DATA
#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_RPC_WRAPPERS \
	virtual void UpdateChStates_Implementation(FChStates NewStates); \
	virtual void UpdateYRot_Implementation(); \
 \
	DECLARE_FUNCTION(execSetupVariables); \
	DECLARE_FUNCTION(execOnRep_SetStates); \
	DECLARE_FUNCTION(execUpdateChStates); \
	DECLARE_FUNCTION(execUpdateYRot); \
	DECLARE_FUNCTION(execSetHp); \
	DECLARE_FUNCTION(execGetHp);


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetupVariables); \
	DECLARE_FUNCTION(execOnRep_SetStates); \
	DECLARE_FUNCTION(execUpdateChStates); \
	DECLARE_FUNCTION(execUpdateYRot); \
	DECLARE_FUNCTION(execSetHp); \
	DECLARE_FUNCTION(execGetHp);


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_EVENT_PARMS \
	struct DefaultCH_eventUpdateChStates_Parms \
	{ \
		FChStates NewStates; \
	};


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_CALLBACK_WRAPPERS
#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADefaultCH(); \
	friend struct Z_Construct_UClass_ADefaultCH_Statics; \
public: \
	DECLARE_CLASS(ADefaultCH, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TamSkadLecaTracery"), NO_API) \
	DECLARE_SERIALIZER(ADefaultCH) \
	virtual UObject* _getUObject() const override { return const_cast<ADefaultCH*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RotationY=NETFIELD_REP_START, \
		States, \
		NETFIELD_REP_END=States	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_INCLASS \
private: \
	static void StaticRegisterNativesADefaultCH(); \
	friend struct Z_Construct_UClass_ADefaultCH_Statics; \
public: \
	DECLARE_CLASS(ADefaultCH, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TamSkadLecaTracery"), NO_API) \
	DECLARE_SERIALIZER(ADefaultCH) \
	virtual UObject* _getUObject() const override { return const_cast<ADefaultCH*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RotationY=NETFIELD_REP_START, \
		States, \
		NETFIELD_REP_END=States	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_STANDARD_CONSTRUCTORS \
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


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADefaultCH(ADefaultCH&&); \
	NO_API ADefaultCH(const ADefaultCH&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADefaultCH); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADefaultCH); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADefaultCH)


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RotationY() { return STRUCT_OFFSET(ADefaultCH, RotationY); } \
	FORCEINLINE static uint32 __PPO__States() { return STRUCT_OFFSET(ADefaultCH, States); } \
	FORCEINLINE static uint32 __PPO__Fov() { return STRUCT_OFFSET(ADefaultCH, Fov); } \
	FORCEINLINE static uint32 __PPO__AimFov() { return STRUCT_OFFSET(ADefaultCH, AimFov); } \
	FORCEINLINE static uint32 __PPO__HP() { return STRUCT_OFFSET(ADefaultCH, HP); } \
	FORCEINLINE static uint32 __PPO__CurrentStatus() { return STRUCT_OFFSET(ADefaultCH, CurrentStatus); }


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_38_PROLOG \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_EVENT_PARMS


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_PRIVATE_PROPERTY_OFFSET \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_SPARSE_DATA \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_RPC_WRAPPERS \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_CALLBACK_WRAPPERS \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_INCLASS \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_PRIVATE_PROPERTY_OFFSET \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_SPARSE_DATA \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_CALLBACK_WRAPPERS \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_INCLASS_NO_PURE_DECLS \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TAMSKADLECATRACERY_API UClass* StaticClass<class ADefaultCH>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TamSkadLecaTracery_Source_TamSkadLecaTracery_DefaultCH_h


#define FOREACH_ENUM_E_PLAYERSTATUS(op) \
	op(E_PlayerStatus::Idle) \
	op(E_PlayerStatus::Firing) \
	op(E_PlayerStatus::Reloading) \
	op(E_PlayerStatus::Dead) 

enum class E_PlayerStatus : uint8;
template<> TAMSKADLECATRACERY_API UEnum* StaticEnum<E_PlayerStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
