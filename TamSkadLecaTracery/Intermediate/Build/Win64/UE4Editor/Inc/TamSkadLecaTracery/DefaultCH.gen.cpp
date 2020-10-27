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
// End Cross Module References
	void ADefaultCH::StaticRegisterNativesADefaultCH()
	{
	}
	UClass* Z_Construct_UClass_ADefaultCH_NoRegister()
	{
		return ADefaultCH::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultCH_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(ADefaultCH, 4293740231);
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
