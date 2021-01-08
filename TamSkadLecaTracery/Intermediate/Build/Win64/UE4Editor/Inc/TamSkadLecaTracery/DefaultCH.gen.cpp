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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TAMSKADLECATRACERY_API UClass* Z_Construct_UClass_AGunParentV2_NoRegister();
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
	void ADefaultCH::StaticRegisterNativesADefaultCH()
	{
		UClass* Class = ADefaultCH::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateMovementDirection", &ADefaultCH::execCalculateMovementDirection },
			{ "GetHp", &ADefaultCH::execGetHp },
			{ "SetHp", &ADefaultCH::execSetHp },
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimFov_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AimFov;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fov_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Fov;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StartingWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultCH_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TamSkadLecaTracery,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADefaultCH_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefaultCH_CalculateMovementDirection, "CalculateMovementDirection" }, // 78751880
		{ &Z_Construct_UFunction_ADefaultCH_GetHp, "GetHp" }, // 2909591495
		{ &Z_Construct_UFunction_ADefaultCH_SetHp, "SetHp" }, // 2384601985
		{ &Z_Construct_UFunction_ADefaultCH_SetupVariables, "SetupVariables" }, // 4227976932
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultCH_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DefaultCH.h" },
		{ "ModuleRelativePath", "DefaultCH.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultCH_Statics::NewProp_HP_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "DefaultCH.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADefaultCH_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultCH, HP), METADATA_PARAMS(Z_Construct_UClass_ADefaultCH_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultCH_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultCH_Statics::NewProp_AimFov_MetaData[] = {
		{ "Category", "Aiming" },
		{ "ModuleRelativePath", "DefaultCH.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultCH_Statics::NewProp_AimFov = { "AimFov", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultCH, AimFov), METADATA_PARAMS(Z_Construct_UClass_ADefaultCH_Statics::NewProp_AimFov_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultCH_Statics::NewProp_AimFov_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultCH_Statics::NewProp_Fov_MetaData[] = {
		{ "Category", "Aiming" },
		{ "Comment", "/*UPROPERTY(BlueprintReadWrite)\n\x09""AActor* Weapon = nullptr;*/" },
		{ "ModuleRelativePath", "DefaultCH.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite)\n       AActor* Weapon = nullptr;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultCH_Statics::NewProp_Fov = { "Fov", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultCH, Fov), METADATA_PARAMS(Z_Construct_UClass_ADefaultCH_Statics::NewProp_Fov_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultCH_Statics::NewProp_Fov_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultCH_Statics::NewProp_StartingWeapon_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "//calculates direction for ABP \"Direction\"\n" },
		{ "ModuleRelativePath", "DefaultCH.h" },
		{ "ToolTip", "calculates direction for ABP \"Direction\"" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADefaultCH_Statics::NewProp_StartingWeapon = { "StartingWeapon", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADefaultCH, StartingWeapon), Z_Construct_UClass_AGunParentV2_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ADefaultCH_Statics::NewProp_StartingWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultCH_Statics::NewProp_StartingWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultCH_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultCH_Statics::NewProp_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultCH_Statics::NewProp_AimFov,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultCH_Statics::NewProp_Fov,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultCH_Statics::NewProp_StartingWeapon,
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
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultCH_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ADefaultCH, 1698437201);
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
