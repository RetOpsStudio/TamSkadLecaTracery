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
	TAMSKADLECATRACERY_API UClass* Z_Construct_UClass_ADefaultCH_NoRegister();
	TAMSKADLECATRACERY_API UClass* Z_Construct_UClass_ADefaultCH();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TamSkadLecaTracery();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ADefaultCH::execCalculateMovementDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculateMovementDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultCH::execSetupVariables)
	{
		P_GET_OBJECT(UAnimInstance,Z_Param_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupVariables(Z_Param_Ref);
		P_NATIVE_END;
	}
	void ADefaultCH::StaticRegisterNativesADefaultCH()
	{
		UClass* Class = ADefaultCH::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateMovementDirection", &ADefaultCH::execCalculateMovementDirection },
			{ "SetupVariables", &ADefaultCH::execSetupVariables },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADefaultCH_CalculateMovementDirection_Statics
	{
		struct DefaultCH_eventCalculateMovementDirection_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADefaultCH_CalculateMovementDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DefaultCH_eventCalculateMovementDirection_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultCH_CalculateMovementDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultCH_CalculateMovementDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultCH_CalculateMovementDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "DefaultCH.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultCH_CalculateMovementDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultCH, nullptr, "CalculateMovementDirection", nullptr, nullptr, sizeof(DefaultCH_eventCalculateMovementDirection_Parms), Z_Construct_UFunction_ADefaultCH_CalculateMovementDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultCH_CalculateMovementDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultCH_CalculateMovementDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultCH_CalculateMovementDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultCH_CalculateMovementDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADefaultCH_CalculateMovementDirection_Statics::FuncParams);
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultCH_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TamSkadLecaTracery,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADefaultCH_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefaultCH_CalculateMovementDirection, "CalculateMovementDirection" }, // 78751880
		{ &Z_Construct_UFunction_ADefaultCH_SetupVariables, "SetupVariables" }, // 4227976932
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultCH_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DefaultCH.h" },
		{ "ModuleRelativePath", "DefaultCH.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultCH_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultCH>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefaultCH_Statics::ClassParams = {
		&ADefaultCH::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
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
	IMPLEMENT_CLASS(ADefaultCH, 52858648);
	template<> TAMSKADLECATRACERY_API UClass* StaticClass<ADefaultCH>()
	{
		return ADefaultCH::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefaultCH(Z_Construct_UClass_ADefaultCH, &ADefaultCH::StaticClass, TEXT("/Script/TamSkadLecaTracery"), TEXT("ADefaultCH"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultCH);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
