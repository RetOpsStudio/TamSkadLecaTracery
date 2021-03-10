// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TamSkadLecaTracery/DefaultCH.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultCH() {}
// Cross Module References
	TAMSKADLECATRACERY_API UEnum* Z_Construct_UEnum_TamSkadLecaTracery_E_PlayerStatus();
	UPackage* Z_Construct_UPackage__Script_TamSkadLecaTracery();
	TAMSKADLECATRACERY_API UScriptStruct* Z_Construct_UScriptStruct_FChStates();
	TAMSKADLECATRACERY_API UClass* Z_Construct_UClass_ADefaultCH_NoRegister();
	TAMSKADLECATRACERY_API UClass* Z_Construct_UClass_ADefaultCH();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TAMSKADLECATRACERY_API UClass* Z_Construct_UClass_AGunParentV2_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISightTargetInterface_NoRegister();
// End Cross Module References
	static UEnum* E_PlayerStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TamSkadLecaTracery_E_PlayerStatus, Z_Construct_UPackage__Script_TamSkadLecaTracery(), TEXT("E_PlayerStatus"));
		}
		return Singleton;
	}
	template<> TAMSKADLECATRACERY_API UEnum* StaticEnum<E_PlayerStatus>()
	{
		return E_PlayerStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E_PlayerStatus(E_PlayerStatus_StaticEnum, TEXT("/Script/TamSkadLecaTracery"), TEXT("E_PlayerStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TamSkadLecaTracery_E_PlayerStatus_Hash() { return 3839695652U; }
	UEnum* Z_Construct_UEnum_TamSkadLecaTracery_E_PlayerStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TamSkadLecaTracery();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("E_PlayerStatus"), 0, Get_Z_Construct_UEnum_TamSkadLecaTracery_E_PlayerStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "E_PlayerStatus::Idle", (int64)E_PlayerStatus::Idle },
				{ "E_PlayerStatus::Firing", (int64)E_PlayerStatus::Firing },
				{ "E_PlayerStatus::Reloading", (int64)E_PlayerStatus::Reloading },
				{ "E_PlayerStatus::Dead", (int64)E_PlayerStatus::Dead },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// enum used to switch between animation states\n" },
				{ "Dead.DisplayName", "Dead" },
				{ "Dead.Name", "E_PlayerStatus::Dead" },
				{ "Firing.DisplayName", "Firing" },
				{ "Firing.Name", "E_PlayerStatus::Firing" },
				{ "Idle.DisplayName", "Idle" },
				{ "Idle.Name", "E_PlayerStatus::Idle" },
				{ "ModuleRelativePath", "DefaultCH.h" },
				{ "Reloading.DisplayName", "Reloading" },
				{ "Reloading.Name", "E_PlayerStatus::Reloading" },
				{ "ToolTip", "enum used to switch between animation states" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TamSkadLecaTracery,
				nullptr,
				"E_PlayerStatus",
				"E_PlayerStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FChStates::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TAMSKADLECATRACERY_API uint32 Get_Z_Construct_UScriptStruct_FChStates_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChStates, Z_Construct_UPackage__Script_TamSkadLecaTracery(), TEXT("ChStates"), sizeof(FChStates), Get_Z_Construct_UScriptStruct_FChStates_Hash());
	}
	return Singleton;
}
template<> TAMSKADLECATRACERY_API UScriptStruct* StaticStruct<FChStates>()
{
	return FChStates::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChStates(FChStates::StaticStruct, TEXT("/Script/TamSkadLecaTracery"), TEXT("ChStates"), false, nullptr, nullptr);
static struct FScriptStruct_TamSkadLecaTracery_StaticRegisterNativesFChStates
{
	FScriptStruct_TamSkadLecaTracery_StaticRegisterNativesFChStates()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChStates")),new UScriptStruct::TCppStructOps<FChStates>);
	}
} ScriptStruct_TamSkadLecaTracery_StaticRegisterNativesFChStates;
	struct Z_Construct_UScriptStruct_FChStates_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b_IsJumping_MetaData[];
#endif
		static void NewProp_b_IsJumping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b_IsJumping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b_IsCrouching_MetaData[];
#endif
		static void NewProp_b_IsCrouching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b_IsCrouching;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChStates_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// struct used to replicate player animation states\n" },
		{ "ModuleRelativePath", "DefaultCH.h" },
		{ "ToolTip", "struct used to replicate player animation states" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChStates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChStates>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChStates_Statics::NewProp_CurrentStatus_MetaData[] = {
		{ "Category", "ChStates" },
		{ "ModuleRelativePath", "DefaultCH.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChStates_Statics::NewProp_CurrentStatus = { "CurrentStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChStates, CurrentStatus), Z_Construct_UEnum_TamSkadLecaTracery_E_PlayerStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FChStates_Statics::NewProp_CurrentStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChStates_Statics::NewProp_CurrentStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChStates_Statics::NewProp_CurrentStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChStates_Statics::NewProp_b_IsJumping_MetaData[] = {
		{ "Category", "ChStates" },
		{ "ModuleRelativePath", "DefaultCH.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChStates_Statics::NewProp_b_IsJumping_SetBit(void* Obj)
	{
		((FChStates*)Obj)->b_IsJumping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChStates_Statics::NewProp_b_IsJumping = { "b_IsJumping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChStates), &Z_Construct_UScriptStruct_FChStates_Statics::NewProp_b_IsJumping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChStates_Statics::NewProp_b_IsJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChStates_Statics::NewProp_b_IsJumping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChStates_Statics::NewProp_b_IsCrouching_MetaData[] = {
		{ "Category", "ChStates" },
		{ "ModuleRelativePath", "DefaultCH.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChStates_Statics::NewProp_b_IsCrouching_SetBit(void* Obj)
	{
		((FChStates*)Obj)->b_IsCrouching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChStates_Statics::NewProp_b_IsCrouching = { "b_IsCrouching", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FChStates), &Z_Construct_UScriptStruct_FChStates_Statics::NewProp_b_IsCrouching_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChStates_Statics::NewProp_b_IsCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChStates_Statics::NewProp_b_IsCrouching_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChStates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChStates_Statics::NewProp_CurrentStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChStates_Statics::NewProp_CurrentStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChStates_Statics::NewProp_b_IsJumping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChStates_Statics::NewProp_b_IsCrouching,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChStates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TamSkadLecaTracery,
		nullptr,
		&NewStructOps,
		"ChStates",
		sizeof(FChStates),
		alignof(FChStates),
		Z_Construct_UScriptStruct_FChStates_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChStates_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChStates_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChStates_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChStates()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChStates_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TamSkadLecaTracery();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChStates"), sizeof(FChStates), Get_Z_Construct_UScriptStruct_FChStates_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChStates_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChStates_Hash() { return 1065920554U; }
	DEFINE_FUNCTION(ADefaultCH::execSetupVariables)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupVariables(Z_Param_Ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultCH::execOnRep_SetStates)
	{
		P_GET_STRUCT(FChStates,Z_Param_NewStates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SetStates(Z_Param_NewStates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultCH::execUpdateChStates)
	{
		P_GET_STRUCT(FChStates,Z_Param_NewStates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateChStates_Implementation(Z_Param_NewStates);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultCH::execUpdateYRot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateYRot_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultCH::execSetHp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewHp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHp(Z_Param_NewHp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultCH::execGetHp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHp();
		P_NATIVE_END;
	}
	static FName NAME_ADefaultCH_Event_StatesUpdated = FName(TEXT("Event_StatesUpdated"));
	void ADefaultCH::Event_StatesUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADefaultCH_Event_StatesUpdated),NULL);
	}
	static FName NAME_ADefaultCH_UpdateChStates = FName(TEXT("UpdateChStates"));
	void ADefaultCH::UpdateChStates(FChStates NewStates)
	{
		DefaultCH_eventUpdateChStates_Parms Parms;
		Parms.NewStates=NewStates;
		ProcessEvent(FindFunctionChecked(NAME_ADefaultCH_UpdateChStates),&Parms);
	}
	static FName NAME_ADefaultCH_UpdateYRot = FName(TEXT("UpdateYRot"));
	void ADefaultCH::UpdateYRot()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADefaultCH_UpdateYRot),NULL);
	}
	void ADefaultCH::StaticRegisterNativesADefaultCH()
	{
		UClass* Class = ADefaultCH::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHp", &ADefaultCH::execGetHp },
			{ "OnRep_SetStates", &ADefaultCH::execOnRep_SetStates },
			{ "SetHp", &ADefaultCH::execSetHp },
			{ "SetupVariables", &ADefaultCH::execSetupVariables },
			{ "UpdateChStates", &ADefaultCH::execUpdateChStates },
			{ "UpdateYRot", &ADefaultCH::execUpdateYRot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADefaultCH_Event_StatesUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultCH_Event_StatesUpdated_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Event_StatesUpdated" },
		{ "ModuleRelativePath", "DefaultCH.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultCH_Event_StatesUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultCH, nullptr, "Event_StatesUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultCH_Event_StatesUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultCH_Event_StatesUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultCH_Event_StatesUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultCH_Event_StatesUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultCH_GetHp_Statics
	{
		struct DefaultCH_eventGetHp_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ADefaultCH_GetHp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultCH_eventGetHp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultCH_GetHp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultCH_GetHp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultCH_GetHp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "DefaultCH.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultCH_GetHp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultCH, nullptr, "GetHp", nullptr, nullptr, sizeof(DefaultCH_eventGetHp_Parms), Z_Construct_UFunction_ADefaultCH_GetHp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultCH_GetHp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultCH_GetHp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultCH_GetHp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultCH_GetHp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultCH_GetHp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultCH_OnRep_SetStates_Statics
	{
		struct DefaultCH_eventOnRep_SetStates_Parms
		{
			FChStates NewStates;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewStates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADefaultCH_OnRep_SetStates_Statics::NewProp_NewStates = { "NewStates", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultCH_eventOnRep_SetStates_Parms, NewStates), Z_Construct_UScriptStruct_FChStates, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultCH_OnRep_SetStates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultCH_OnRep_SetStates_Statics::NewProp_NewStates,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultCH_OnRep_SetStates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DefaultCH.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultCH_OnRep_SetStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultCH, nullptr, "OnRep_SetStates", nullptr, nullptr, sizeof(DefaultCH_eventOnRep_SetStates_Parms), Z_Construct_UFunction_ADefaultCH_OnRep_SetStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultCH_OnRep_SetStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultCH_OnRep_SetStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultCH_OnRep_SetStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultCH_OnRep_SetStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultCH_OnRep_SetStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultCH_SetHp_Statics
	{
		struct DefaultCH_eventSetHp_Parms
		{
			int32 NewHp;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NewHp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ADefaultCH_SetHp_Statics::NewProp_NewHp = { "NewHp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultCH_eventSetHp_Parms, NewHp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultCH_SetHp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultCH_SetHp_Statics::NewProp_NewHp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultCH_SetHp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "DefaultCH.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultCH_SetHp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultCH, nullptr, "SetHp", nullptr, nullptr, sizeof(DefaultCH_eventSetHp_Parms), Z_Construct_UFunction_ADefaultCH_SetHp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultCH_SetHp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultCH_SetHp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultCH_SetHp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultCH_SetHp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultCH_SetHp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultCH_SetupVariables_Statics
	{
		struct DefaultCH_eventSetupVariables_Parms
		{
			UAnimInstance* Ref;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ref;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefaultCH_SetupVariables_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultCH_eventSetupVariables_Parms, Ref), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultCH_SetupVariables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultCH_SetupVariables_Statics::NewProp_Ref,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultCH_SetupVariables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "DefaultCH.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultCH_SetupVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultCH, nullptr, "SetupVariables", nullptr, nullptr, sizeof(DefaultCH_eventSetupVariables_Parms), Z_Construct_UFunction_ADefaultCH_SetupVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultCH_SetupVariables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultCH_SetupVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultCH_SetupVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultCH_SetupVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultCH_SetupVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultCH_UpdateChStates_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewStates;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADefaultCH_UpdateChStates_Statics::NewProp_NewStates = { "NewStates", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultCH_eventUpdateChStates_Parms, NewStates), Z_Construct_UScriptStruct_FChStates, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultCH_UpdateChStates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultCH_UpdateChStates_Statics::NewProp_NewStates,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultCH_UpdateChStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "// Used for replicating struct with animation states\n" },
		{ "ModuleRelativePath", "DefaultCH.h" },
		{ "ToolTip", "Used for replicating struct with animation states" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultCH_UpdateChStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultCH, nullptr, "UpdateChStates", nullptr, nullptr, sizeof(DefaultCH_eventUpdateChStates_Parms), Z_Construct_UFunction_ADefaultCH_UpdateChStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultCH_UpdateChStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultCH_UpdateChStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultCH_UpdateChStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultCH_UpdateChStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultCH_UpdateChStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultCH_UpdateYRot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultCH_UpdateYRot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "Comment", "// Used for replicating RotationY variable\n" },
		{ "ModuleRelativePath", "DefaultCH.h" },
		{ "ToolTip", "Used for replicating RotationY variable" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultCH_UpdateYRot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultCH, nullptr, "UpdateYRot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultCH_UpdateYRot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultCH_UpdateYRot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultCH_UpdateYRot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultCH_UpdateYRot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADefaultCH_NoRegister()
	{
		return ADefaultCH::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultCH_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StartingWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimFov_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimFov;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fov_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Fov;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_States;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultCH_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TamSkadLecaTracery,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADefaultCH_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefaultCH_Event_StatesUpdated, "Event_StatesUpdated" }, // 2797154006
		{ &Z_Construct_UFunction_ADefaultCH_GetHp, "GetHp" }, // 2909591495
		{ &Z_Construct_UFunction_ADefaultCH_OnRep_SetStates, "OnRep_SetStates" }, // 1025404486
		{ &Z_Construct_UFunction_ADefaultCH_SetHp, "SetHp" }, // 2384601985
		{ &Z_Construct_UFunction_ADefaultCH_SetupVariables, "SetupVariables" }, // 4227976932
		{ &Z_Construct_UFunction_ADefaultCH_UpdateChStates, "UpdateChStates" }, // 3523256259
		{ &Z_Construct_UFunction_ADefaultCH_UpdateYRot, "UpdateYRot" }, // 2197305985
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultCH_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DefaultCH.h" },
		{ "ModuleRelativePath", "DefaultCH.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultCH_Statics::NewProp_CurrentStatus_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ABP" },
		{ "ModuleRelativePath", "DefaultCH.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADefaultCH_Statics::NewProp_CurrentStatus = { "CurrentStatus", nullptr, (EPropertyFlags)0x0040000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultCH, CurrentStatus), Z_Construct_UEnum_TamSkadLecaTracery_E_PlayerStatus, METADATA_PARAMS(Z_Construct_UClass_ADefaultCH_Statics::NewProp_CurrentStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultCH_Statics::NewProp_CurrentStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADefaultCH_Statics::NewProp_CurrentStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultCH_Statics::NewProp_HP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "DefaultCH.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADefaultCH_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultCH, HP), METADATA_PARAMS(Z_Construct_UClass_ADefaultCH_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultCH_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultCH_Statics::NewProp_StartingWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "DefaultCH.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADefaultCH_Statics::NewProp_StartingWeapon = { "StartingWeapon", nullptr, (EPropertyFlags)0x0044000000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultCH, StartingWeapon), Z_Construct_UClass_AGunParentV2_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADefaultCH_Statics::NewProp_StartingWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultCH_Statics::NewProp_StartingWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultCH_Statics::NewProp_AimFov_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Aiming" },
		{ "Comment", "// FOV when Aim down sights\n" },
		{ "ModuleRelativePath", "DefaultCH.h" },
		{ "ToolTip", "FOV when Aim down sights" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultCH_Statics::NewProp_AimFov = { "AimFov", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultCH, AimFov), METADATA_PARAMS(Z_Construct_UClass_ADefaultCH_Statics::NewProp_AimFov_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultCH_Statics::NewProp_AimFov_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultCH_Statics::NewProp_Fov_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Aiming" },
		{ "Comment", "//Normal FOV\n" },
		{ "ModuleRelativePath", "DefaultCH.h" },
		{ "ToolTip", "Normal FOV" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultCH_Statics::NewProp_Fov = { "Fov", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultCH, Fov), METADATA_PARAMS(Z_Construct_UClass_ADefaultCH_Statics::NewProp_Fov_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultCH_Statics::NewProp_Fov_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultCH_Statics::NewProp_States_MetaData[] = {
		{ "Category", "Networking" },
		{ "Comment", "// struct used to replicate animation states\n" },
		{ "ModuleRelativePath", "DefaultCH.h" },
		{ "ToolTip", "struct used to replicate animation states" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADefaultCH_Statics::NewProp_States = { "States", "OnRep_SetStates", (EPropertyFlags)0x0020080100000025, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultCH, States), Z_Construct_UScriptStruct_FChStates, METADATA_PARAMS(Z_Construct_UClass_ADefaultCH_Statics::NewProp_States_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultCH_Statics::NewProp_States_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultCH_Statics::NewProp_RotationY_MetaData[] = {
		{ "Category", "Networking" },
		{ "Comment", "// used to replicate aim direction on Y axis (up and down)\n" },
		{ "ModuleRelativePath", "DefaultCH.h" },
		{ "ToolTip", "used to replicate aim direction on Y axis (up and down)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultCH_Statics::NewProp_RotationY = { "RotationY", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultCH, RotationY), METADATA_PARAMS(Z_Construct_UClass_ADefaultCH_Statics::NewProp_RotationY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultCH_Statics::NewProp_RotationY_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultCH_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultCH_Statics::NewProp_CurrentStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultCH_Statics::NewProp_CurrentStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultCH_Statics::NewProp_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultCH_Statics::NewProp_StartingWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultCH_Statics::NewProp_AimFov,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultCH_Statics::NewProp_Fov,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultCH_Statics::NewProp_States,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultCH_Statics::NewProp_RotationY,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADefaultCH_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAISightTargetInterface_NoRegister, (int32)VTABLE_OFFSET(ADefaultCH, IAISightTargetInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultCH_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultCH>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefaultCH_Statics::ClassParams = {
		&ADefaultCH::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADefaultCH_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultCH_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADefaultCH_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultCH_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefaultCH()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADefaultCH_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADefaultCH, 1687768886);
	template<> TAMSKADLECATRACERY_API UClass* StaticClass<ADefaultCH>()
	{
		return ADefaultCH::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefaultCH(Z_Construct_UClass_ADefaultCH, &ADefaultCH::StaticClass, TEXT("/Script/TamSkadLecaTracery"), TEXT("ADefaultCH"), false, nullptr, nullptr, nullptr);

	void ADefaultCH::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RotationY(TEXT("RotationY"));
		static const FName Name_States(TEXT("States"));

		const bool bIsValid = true
			&& Name_RotationY == ClassReps[(int32)ENetFields_Private::RotationY].Property->GetFName()
			&& Name_States == ClassReps[(int32)ENetFields_Private::States].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ADefaultCH"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultCH);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
