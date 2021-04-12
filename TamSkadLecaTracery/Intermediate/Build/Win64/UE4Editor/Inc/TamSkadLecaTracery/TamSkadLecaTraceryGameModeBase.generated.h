// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TAMSKADLECATRACERY_TamSkadLecaTraceryGameModeBase_generated_h
#error "TamSkadLecaTraceryGameModeBase.generated.h already included, missing '#pragma once' in TamSkadLecaTraceryGameModeBase.h"
#endif
#define TAMSKADLECATRACERY_TamSkadLecaTraceryGameModeBase_generated_h

#define TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_43_DELEGATE \
struct TamSkadLecaTraceryGameModeBase_eventOnAddTeamScoreDelegate_Parms \
{ \
	int32 TeamID; \
}; \
static inline void FOnAddTeamScoreDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnAddTeamScoreDelegate, int32 TeamID) \
{ \
	TamSkadLecaTraceryGameModeBase_eventOnAddTeamScoreDelegate_Parms Parms; \
	Parms.TeamID=TeamID; \
	OnAddTeamScoreDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_37_DELEGATE \
struct TamSkadLecaTraceryGameModeBase_eventOnEndGameWithResultDelegate_Parms \
{ \
	int32 TeamID; \
}; \
static inline void FOnEndGameWithResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEndGameWithResultDelegate, int32 TeamID) \
{ \
	TamSkadLecaTraceryGameModeBase_eventOnEndGameWithResultDelegate_Parms Parms; \
	Parms.TeamID=TeamID; \
	OnEndGameWithResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_15_SPARSE_DATA
#define TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddRedTeamScore); \
	DECLARE_FUNCTION(execAddGreenTeamScore); \
	DECLARE_FUNCTION(execGetRedTeamScore); \
	DECLARE_FUNCTION(execGetGreenTeamScore);


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddRedTeamScore); \
	DECLARE_FUNCTION(execAddGreenTeamScore); \
	DECLARE_FUNCTION(execGetRedTeamScore); \
	DECLARE_FUNCTION(execGetGreenTeamScore);


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATamSkadLecaTraceryGameModeBase(); \
	friend struct Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATamSkadLecaTraceryGameModeBase, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TamSkadLecaTracery"), NO_API) \
	DECLARE_SERIALIZER(ATamSkadLecaTraceryGameModeBase)


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATamSkadLecaTraceryGameModeBase(); \
	friend struct Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATamSkadLecaTraceryGameModeBase, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TamSkadLecaTracery"), NO_API) \
	DECLARE_SERIALIZER(ATamSkadLecaTraceryGameModeBase)


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATamSkadLecaTraceryGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATamSkadLecaTraceryGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATamSkadLecaTraceryGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATamSkadLecaTraceryGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATamSkadLecaTraceryGameModeBase(ATamSkadLecaTraceryGameModeBase&&); \
	NO_API ATamSkadLecaTraceryGameModeBase(const ATamSkadLecaTraceryGameModeBase&); \
public:


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATamSkadLecaTraceryGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATamSkadLecaTraceryGameModeBase(ATamSkadLecaTraceryGameModeBase&&); \
	NO_API ATamSkadLecaTraceryGameModeBase(const ATamSkadLecaTraceryGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATamSkadLecaTraceryGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATamSkadLecaTraceryGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATamSkadLecaTraceryGameModeBase)


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GreenTeamScore() { return STRUCT_OFFSET(ATamSkadLecaTraceryGameModeBase, GreenTeamScore); } \
	FORCEINLINE static uint32 __PPO__RedTeamScore() { return STRUCT_OFFSET(ATamSkadLecaTraceryGameModeBase, RedTeamScore); } \
	FORCEINLINE static uint32 __PPO__GreenTeamID() { return STRUCT_OFFSET(ATamSkadLecaTraceryGameModeBase, GreenTeamID); } \
	FORCEINLINE static uint32 __PPO__RedTeamID() { return STRUCT_OFFSET(ATamSkadLecaTraceryGameModeBase, RedTeamID); } \
	FORCEINLINE static uint32 __PPO__OnEndGameWithResultDelegate() { return STRUCT_OFFSET(ATamSkadLecaTraceryGameModeBase, OnEndGameWithResultDelegate); } \
	FORCEINLINE static uint32 __PPO__OnAddTeamScoreDelegate() { return STRUCT_OFFSET(ATamSkadLecaTraceryGameModeBase, OnAddTeamScoreDelegate); }


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_12_PROLOG
#define TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_15_SPARSE_DATA \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_15_RPC_WRAPPERS \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_15_INCLASS \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_15_SPARSE_DATA \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TAMSKADLECATRACERY_API UClass* StaticClass<class ATamSkadLecaTraceryGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TamSkadLecaTracery_Source_TamSkadLecaTracery_TamSkadLecaTraceryGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
