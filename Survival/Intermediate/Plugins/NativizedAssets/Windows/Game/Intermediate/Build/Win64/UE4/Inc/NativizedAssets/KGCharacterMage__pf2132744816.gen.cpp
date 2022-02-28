// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/KGCharacterMage__pf2132744816.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKGCharacterMage__pf2132744816() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AKGCharacterMage_C__pf2132744816_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AKGCharacterMage_C__pf2132744816();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AKGCharacterBase_C__pf2132744816();
// End Cross Module References
	void AKGCharacterMage_C__pf2132744816::StaticRegisterNativesAKGCharacterMage_C__pf2132744816()
	{
	}
	UClass* Z_Construct_UClass_AKGCharacterMage_C__pf2132744816_NoRegister()
	{
		return AKGCharacterMage_C__pf2132744816::StaticClass();
	}
	struct Z_Construct_UClass_AKGCharacterMage_C__pf2132744816_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKGCharacterMage_C__pf2132744816_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AKGCharacterBase_C__pf2132744816,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGCharacterMage_C__pf2132744816_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "KGCharacterMage__pf2132744816.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KGCharacterMage__pf2132744816.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "KGCharacterMage_C" },
		{ "ReplaceConverted", "/Game/Blueprints/KGCharacterMage.KGCharacterMage_C" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKGCharacterMage_C__pf2132744816_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKGCharacterMage_C__pf2132744816>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKGCharacterMage_C__pf2132744816_Statics::ClassParams = {
		&AKGCharacterMage_C__pf2132744816::StaticClass,
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
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKGCharacterMage_C__pf2132744816_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKGCharacterMage_C__pf2132744816_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKGCharacterMage_C__pf2132744816()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/KGCharacterMage"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("KGCharacterMage_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKGCharacterMage_C__pf2132744816_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AKGCharacterMage_C__pf2132744816, TEXT("KGCharacterMage_C"), 2040805333);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AKGCharacterMage_C__pf2132744816>()
	{
		return AKGCharacterMage_C__pf2132744816::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKGCharacterMage_C__pf2132744816(Z_Construct_UClass_AKGCharacterMage_C__pf2132744816, &AKGCharacterMage_C__pf2132744816::StaticClass, TEXT("/Game/Blueprints/KGCharacterMage"), TEXT("KGCharacterMage_C"), true, TEXT("/Game/Blueprints/KGCharacterMage"), TEXT("/Game/Blueprints/KGCharacterMage.KGCharacterMage_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKGCharacterMage_C__pf2132744816);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
