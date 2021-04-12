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
	TAMSKADLECATRACERY_API UClass* Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_NoRegister();
	TAMSKADLECATRACERY_API UClass* Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_TamSkadLecaTracery();
// End Cross Module References
	void ATamSkadLecaTraceryGameModeBase::StaticRegisterNativesATamSkadLecaTraceryGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_NoRegister()
	{
		return ATamSkadLecaTraceryGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_TamSkadLecaTracery,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TamSkadLecaTraceryGameModeBase.h" },
		{ "ModuleRelativePath", "TamSkadLecaTraceryGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATamSkadLecaTraceryGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATamSkadLecaTraceryGameModeBase_Statics::ClassParams = {
		&ATamSkadLecaTraceryGameModeBase::StaticClass,
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
	IMPLEMENT_CLASS(ATamSkadLecaTraceryGameModeBase, 375443722);
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
