// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTamSkadLecaTracery_init() {}
	TAMSKADLECATRACERY_API UFunction* Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnEndGameWithResultDelegate__DelegateSignature();
	TAMSKADLECATRACERY_API UFunction* Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnAddTeamScoreDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TamSkadLecaTracery()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnEndGameWithResultDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ATamSkadLecaTraceryGameModeBase_OnAddTeamScoreDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/TamSkadLecaTracery",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xCF7115C4,
				0x9CF3ED9B,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
