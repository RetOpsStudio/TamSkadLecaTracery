// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TamSkadLecaTracery/TamSkadLecaTraceryGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTamSkadLecaTraceryGameModeBase() {}
// Cross Module References
	TAMSKADLECATRACERY_API UFunction* Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnAddTeamScoreDelegate__DelegateSignature();
	TAMSKADLECATRACERY_API UClass* Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase();
	TAMSKADLECATRACERY_API UEnum* Z_Construct_UEnum_TamSkadLecaTracery_E_TeamID();
	TAMSKADLECATRACERY_API UFunction* Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnEndGameWithResultDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TamSkadLecaTracery();
	TAMSKADLECATRACERY_API UClass* Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnAddTeamScoreDelegate__DelegateSignature_Statics
	{
		struct TamSkadLecaTraceryGameModeBase_eventOnAddTeamScoreDelegate_Parms
		{
			E_TeamID TeamID;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TeamID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TeamID_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnAddTeamScoreDelegate__DelegateSignature_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TamSkadLecaTraceryGameModeBase_eventOnAddTeamScoreDelegate_Parms, TeamID), Z_Construct_UEnum_TamSkadLecaTracery_E_TeamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnAddTeamScoreDelegate__DelegateSignature_Statics::NewProp_TeamID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnAddTeamScoreDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnAddTeamScoreDelegate__DelegateSignature_Statics::NewProp_TeamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnAddTeamScoreDelegate__DelegateSignature_Statics::NewProp_TeamID_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnAddTeamScoreDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09*  @TeamID id of team whos score has changed (casted to int from FGenericTeamID)\n\x09*\x09""delegate fired on end game with result\n\x09*/" },
		{ "ModuleRelativePath", "TamSkadLecaTraceryGameModeBase.h" },
		{ "ToolTip", "*  @TeamID id of team whos score has changed (casted to int from FGenericTeamID)\n*       delegate fired on end game with result" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnAddTeamScoreDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase, nullptr, "OnAddTeamScoreDelegate__DelegateSignature", nullptr, nullptr, sizeof(TamSkadLecaTraceryGameModeBase_eventOnAddTeamScoreDelegate_Parms), Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnAddTeamScoreDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnAddTeamScoreDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnAddTeamScoreDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnAddTeamScoreDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnAddTeamScoreDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnAddTeamScoreDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnEndGameWithResultDelegate__DelegateSignature_Statics
	{
		struct TamSkadLecaTraceryGameModeBase_eventOnEndGameWithResultDelegate_Parms
		{
			E_TeamID TeamID;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TeamID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TeamID_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnEndGameWithResultDelegate__DelegateSignature_Statics::NewProp_TeamID = { "TeamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TamSkadLecaTraceryGameModeBase_eventOnEndGameWithResultDelegate_Parms, TeamID), Z_Construct_UEnum_TamSkadLecaTracery_E_TeamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnEndGameWithResultDelegate__DelegateSignature_Statics::NewProp_TeamID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnEndGameWithResultDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnEndGameWithResultDelegate__DelegateSignature_Statics::NewProp_TeamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnEndGameWithResultDelegate__DelegateSignature_Statics::NewProp_TeamID_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnEndGameWithResultDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09*  @TeamID id of team who have won (casted to int from FGenericTeamID)\n\x09*\x09""delegate fired on end game with result\n\x09*/" },
		{ "ModuleRelativePath", "TamSkadLecaTraceryGameModeBase.h" },
		{ "ToolTip", "*  @TeamID id of team who have won (casted to int from FGenericTeamID)\n*       delegate fired on end game with result" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnEndGameWithResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase, nullptr, "OnEndGameWithResultDelegate__DelegateSignature", nullptr, nullptr, sizeof(TamSkadLecaTraceryGameModeBase_eventOnEndGameWithResultDelegate_Parms), Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnEndGameWithResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnEndGameWithResultDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnEndGameWithResultDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnEndGameWithResultDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnEndGameWithResultDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnEndGameWithResultDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* E_TeamID_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TamSkadLecaTracery_E_TeamID, Z_Construct_UPackage__Script_TamSkadLecaTracery(), TEXT("E_TeamID"));
		}
		return Singleton;
	}
	template<> TAMSKADLECATRACERY_API UEnum* StaticEnum<E_TeamID>()
	{
		return E_TeamID_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_E_TeamID(E_TeamID_StaticEnum, TEXT("/Script/TamSkadLecaTracery"), TEXT("E_TeamID"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TamSkadLecaTracery_E_TeamID_Hash() { return 2425554476U; }
	UEnum* Z_Construct_UEnum_TamSkadLecaTracery_E_TeamID()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TamSkadLecaTracery();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("E_TeamID"), 0, Get_Z_Construct_UEnum_TamSkadLecaTracery_E_TeamID_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "E_TeamID::GreenTeamID", (int64)E_TeamID::GreenTeamID },
				{ "E_TeamID::RedTeamID", (int64)E_TeamID::RedTeamID },
				{ "E_TeamID::None", (int64)E_TeamID::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * \n */" },
				{ "GreenTeamID.Comment", "/**\n * \n */" },
				{ "GreenTeamID.DisplayName", "GreenTeamID" },
				{ "GreenTeamID.Name", "E_TeamID::GreenTeamID" },
				{ "ModuleRelativePath", "TamSkadLecaTraceryGameModeBase.h" },
				{ "None.Comment", "/**\n * \n */" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "E_TeamID::None" },
				{ "RedTeamID.Comment", "/**\n * \n */" },
				{ "RedTeamID.DisplayName", "RedTeamID" },
				{ "RedTeamID.Name", "E_TeamID::RedTeamID" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TamSkadLecaTracery,
				nullptr,
				"E_TeamID",
				"E_TeamID",
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
	DEFINE_FUNCTION(ATamSkadLecaTraceryGameModeBase::execAddRedTeamScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ScoreToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRedTeamScore(Z_Param_ScoreToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATamSkadLecaTraceryGameModeBase::execAddGreenTeamScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ScoreToAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGreenTeamScore(Z_Param_ScoreToAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATamSkadLecaTraceryGameModeBase::execGetRedTeamScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRedTeamScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATamSkadLecaTraceryGameModeBase::execGetGreenTeamScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGreenTeamScore();
		P_NATIVE_END;
	}
	void ATamSkadLecaTraceryGameModeBase::StaticRegisterNativesATamSkadLecaTraceryGameModeBase()
	{
		UClass* Class = ATamSkadLecaTraceryGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGreenTeamScore", &ATamSkadLecaTraceryGameModeBase::execAddGreenTeamScore },
			{ "AddRedTeamScore", &ATamSkadLecaTraceryGameModeBase::execAddRedTeamScore },
			{ "GetGreenTeamScore", &ATamSkadLecaTraceryGameModeBase::execGetGreenTeamScore },
			{ "GetRedTeamScore", &ATamSkadLecaTraceryGameModeBase::execGetRedTeamScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddGreenTeamScore_Statics
	{
		struct TamSkadLecaTraceryGameModeBase_eventAddGreenTeamScore_Parms
		{
			int32 ScoreToAdd;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ScoreToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddGreenTeamScore_Statics::NewProp_ScoreToAdd = { "ScoreToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TamSkadLecaTraceryGameModeBase_eventAddGreenTeamScore_Parms, ScoreToAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddGreenTeamScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddGreenTeamScore_Statics::NewProp_ScoreToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddGreenTeamScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "Comment", "/*Add score to green team and fires delegate OnAddTeamScoreDelegate*/" },
		{ "ModuleRelativePath", "TamSkadLecaTraceryGameModeBase.h" },
		{ "ToolTip", "Add score to green team and fires delegate OnAddTeamScoreDelegate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddGreenTeamScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase, nullptr, "AddGreenTeamScore", nullptr, nullptr, sizeof(TamSkadLecaTraceryGameModeBase_eventAddGreenTeamScore_Parms), Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddGreenTeamScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddGreenTeamScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddGreenTeamScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddGreenTeamScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddGreenTeamScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddGreenTeamScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddRedTeamScore_Statics
	{
		struct TamSkadLecaTraceryGameModeBase_eventAddRedTeamScore_Parms
		{
			int32 ScoreToAdd;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ScoreToAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddRedTeamScore_Statics::NewProp_ScoreToAdd = { "ScoreToAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TamSkadLecaTraceryGameModeBase_eventAddRedTeamScore_Parms, ScoreToAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddRedTeamScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddRedTeamScore_Statics::NewProp_ScoreToAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddRedTeamScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "Comment", "/*Add score to red team and fires delegate OnAddTeamScoreDelegate*/" },
		{ "ModuleRelativePath", "TamSkadLecaTraceryGameModeBase.h" },
		{ "ToolTip", "Add score to red team and fires delegate OnAddTeamScoreDelegate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddRedTeamScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase, nullptr, "AddRedTeamScore", nullptr, nullptr, sizeof(TamSkadLecaTraceryGameModeBase_eventAddRedTeamScore_Parms), Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddRedTeamScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddRedTeamScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddRedTeamScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddRedTeamScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddRedTeamScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddRedTeamScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetGreenTeamScore_Statics
	{
		struct TamSkadLecaTraceryGameModeBase_eventGetGreenTeamScore_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetGreenTeamScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TamSkadLecaTraceryGameModeBase_eventGetGreenTeamScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetGreenTeamScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetGreenTeamScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetGreenTeamScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "Comment", "/*return green team score*/" },
		{ "ModuleRelativePath", "TamSkadLecaTraceryGameModeBase.h" },
		{ "ToolTip", "return green team score" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetGreenTeamScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase, nullptr, "GetGreenTeamScore", nullptr, nullptr, sizeof(TamSkadLecaTraceryGameModeBase_eventGetGreenTeamScore_Parms), Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetGreenTeamScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetGreenTeamScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetGreenTeamScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetGreenTeamScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetGreenTeamScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetGreenTeamScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetRedTeamScore_Statics
	{
		struct TamSkadLecaTraceryGameModeBase_eventGetRedTeamScore_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetRedTeamScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TamSkadLecaTraceryGameModeBase_eventGetRedTeamScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetRedTeamScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetRedTeamScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetRedTeamScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Score" },
		{ "Comment", "/*return red team score*/" },
		{ "ModuleRelativePath", "TamSkadLecaTraceryGameModeBase.h" },
		{ "ToolTip", "return red team score" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetRedTeamScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase, nullptr, "GetRedTeamScore", nullptr, nullptr, sizeof(TamSkadLecaTraceryGameModeBase_eventGetRedTeamScore_Parms), Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetRedTeamScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetRedTeamScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetRedTeamScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetRedTeamScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetRedTeamScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetRedTeamScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_NoRegister()
	{
		return ATamSkadLecaTraceryGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAddTeamScoreDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddTeamScoreDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnEndGameWithResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndGameWithResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedTeamScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RedTeamScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GreenTeamScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GreenTeamScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_TamSkadLecaTracery,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddGreenTeamScore, "AddGreenTeamScore" }, // 3439565314
		{ &Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_AddRedTeamScore, "AddRedTeamScore" }, // 3112080045
		{ &Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetGreenTeamScore, "GetGreenTeamScore" }, // 1993337643
		{ &Z_Construct_UFunction_ATamSkadLecaTraceryGameModeBase_GetRedTeamScore, "GetRedTeamScore" }, // 2301506465
		{ &Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnAddTeamScoreDelegate__DelegateSignature, "OnAddTeamScoreDelegate__DelegateSignature" }, // 1470691073
		{ &Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnEndGameWithResultDelegate__DelegateSignature, "OnEndGameWithResultDelegate__DelegateSignature" }, // 3011454228
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TamSkadLecaTraceryGameModeBase.h" },
		{ "ModuleRelativePath", "TamSkadLecaTraceryGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::NewProp_OnAddTeamScoreDelegate_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "TamSkadLecaTraceryGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::NewProp_OnAddTeamScoreDelegate = { "OnAddTeamScoreDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATamSkadLecaTraceryGameModeBase, OnAddTeamScoreDelegate), Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnAddTeamScoreDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::NewProp_OnAddTeamScoreDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::NewProp_OnAddTeamScoreDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::NewProp_OnEndGameWithResultDelegate_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "TamSkadLecaTraceryGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::NewProp_OnEndGameWithResultDelegate = { "OnEndGameWithResultDelegate", nullptr, (EPropertyFlags)0x0020080010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATamSkadLecaTraceryGameModeBase, OnEndGameWithResultDelegate), Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnEndGameWithResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::NewProp_OnEndGameWithResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::NewProp_OnEndGameWithResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::NewProp_RedTeamScore_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "TamSkadLecaTraceryGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::NewProp_RedTeamScore = { "RedTeamScore", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATamSkadLecaTraceryGameModeBase, RedTeamScore), METADATA_PARAMS(Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::NewProp_RedTeamScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::NewProp_RedTeamScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::NewProp_GreenTeamScore_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "TamSkadLecaTraceryGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::NewProp_GreenTeamScore = { "GreenTeamScore", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATamSkadLecaTraceryGameModeBase, GreenTeamScore), METADATA_PARAMS(Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::NewProp_GreenTeamScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::NewProp_GreenTeamScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::NewProp_OnAddTeamScoreDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::NewProp_OnEndGameWithResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::NewProp_RedTeamScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::NewProp_GreenTeamScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATamSkadLecaTraceryGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::ClassParams = {
		&ATamSkadLecaTraceryGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATamSkadLecaTraceryGameModeBase, 640054082);
	template<> TAMSKADLECATRACERY_API UClass* StaticClass<ATamSkadLecaTraceryGameModeBase>()
	{
		return ATamSkadLecaTraceryGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATamSkadLecaTraceryGameModeBase(Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase, &ATamSkadLecaTraceryGameModeBase::StaticClass, TEXT("/Script/TamSkadLecaTracery"), TEXT("ATamSkadLecaTraceryGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATamSkadLecaTraceryGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
