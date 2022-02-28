// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/UIHUD__pf2132744816.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIHUD__pf2132744816() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UUIHUD_C__pf2132744816_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UUIHUD_C__pf2132744816();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	void UUIHUD_C__pf2132744816::StaticRegisterNativesUUIHUD_C__pf2132744816()
	{
	}
	UClass* Z_Construct_UClass_UUIHUD_C__pf2132744816_NoRegister()
	{
		return UUIHUD_C__pf2132744816::StaticClass();
	}
	struct Z_Construct_UClass_UUIHUD_C__pf2132744816_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WaveCompletedPopUpAnim__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__WaveCompletedPopUpAnim__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIHUD_C__pf2132744816_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIHUD_C__pf2132744816_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UIHUD__pf2132744816.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UIHUD__pf2132744816.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "UIHUD_C" },
		{ "ReplaceConverted", "/Game/Blueprints/UIHUD.UIHUD_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIHUD_C__pf2132744816_Statics::NewProp_bpv__WaveCompletedPopUpAnim__pf_MetaData[] = {
		{ "Category", "Animations" },
		{ "DisplayName", "WaveCompletedPopUpAnim" },
		{ "ModuleRelativePath", "Public/UIHUD__pf2132744816.h" },
		{ "OverrideNativeName", "WaveCompletedPopUpAnim" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIHUD_C__pf2132744816_Statics::NewProp_bpv__WaveCompletedPopUpAnim__pf = { "WaveCompletedPopUpAnim", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIHUD_C__pf2132744816, bpv__WaveCompletedPopUpAnim__pf), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIHUD_C__pf2132744816_Statics::NewProp_bpv__WaveCompletedPopUpAnim__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIHUD_C__pf2132744816_Statics::NewProp_bpv__WaveCompletedPopUpAnim__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIHUD_C__pf2132744816_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIHUD_C__pf2132744816_Statics::NewProp_bpv__WaveCompletedPopUpAnim__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIHUD_C__pf2132744816_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIHUD_C__pf2132744816>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUIHUD_C__pf2132744816_Statics::ClassParams = {
		&UUIHUD_C__pf2132744816::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUIHUD_C__pf2132744816_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIHUD_C__pf2132744816_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIHUD_C__pf2132744816_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIHUD_C__pf2132744816_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIHUD_C__pf2132744816()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/UIHUD"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("UIHUD_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUIHUD_C__pf2132744816_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UUIHUD_C__pf2132744816, TEXT("UIHUD_C"), 3438250586);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UUIHUD_C__pf2132744816>()
	{
		return UUIHUD_C__pf2132744816::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUIHUD_C__pf2132744816(Z_Construct_UClass_UUIHUD_C__pf2132744816, &UUIHUD_C__pf2132744816::StaticClass, TEXT("/Game/Blueprints/UIHUD"), TEXT("UIHUD_C"), true, TEXT("/Game/Blueprints/UIHUD"), TEXT("/Game/Blueprints/UIHUD.UIHUD_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIHUD_C__pf2132744816);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
