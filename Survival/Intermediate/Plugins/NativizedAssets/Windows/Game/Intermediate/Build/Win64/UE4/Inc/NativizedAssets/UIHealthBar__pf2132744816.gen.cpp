// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/UIHealthBar__pf2132744816.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIHealthBar__pf2132744816() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UUIHealthBar_C__pf2132744816_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UUIHealthBar_C__pf2132744816();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AKGCharacterBase_C__pf2132744816_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUIHealthBar_C__pf2132744816::execbpf__GetPercent_0__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->bpf__GetPercent_0__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIHealthBar_C__pf2132744816::execbpf__SetOwningKnightCharacter__pf)
	{
		P_GET_OBJECT(AKGCharacterBase_C__pf2132744816,Z_Param_bpp__OwningKnight__pf__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SetOwningKnightCharacter__pf(Z_Param_bpp__OwningKnight__pf__const);
		P_NATIVE_END;
	}
	void UUIHealthBar_C__pf2132744816::StaticRegisterNativesUUIHealthBar_C__pf2132744816()
	{
		UClass* Class = UUIHealthBar_C__pf2132744816::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPercent_0", &UUIHealthBar_C__pf2132744816::execbpf__GetPercent_0__pf },
			{ "SetOwningKnightCharacter", &UUIHealthBar_C__pf2132744816::execbpf__SetOwningKnightCharacter__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__GetPercent_0__pf_Statics
	{
		struct UIHealthBar_C__pf2132744816_eventbpf__GetPercent_0__pf_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__GetPercent_0__pf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UIHealthBar_C__pf2132744816_eventbpf__GetPercent_0__pf_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__GetPercent_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__GetPercent_0__pf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__GetPercent_0__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/UIHealthBar__pf2132744816.h" },
		{ "OverrideNativeName", "GetPercent_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__GetPercent_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIHealthBar_C__pf2132744816, nullptr, "GetPercent_0", nullptr, nullptr, sizeof(UIHealthBar_C__pf2132744816_eventbpf__GetPercent_0__pf_Parms), Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__GetPercent_0__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__GetPercent_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__GetPercent_0__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__GetPercent_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__GetPercent_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_UUIHealthBar_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "GetPercent_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__GetPercent_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__SetOwningKnightCharacter__pf_Statics
	{
		struct UIHealthBar_C__pf2132744816_eventbpf__SetOwningKnightCharacter__pf_Parms
		{
			const AKGCharacterBase_C__pf2132744816* bpp__OwningKnight__pf__const;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OwningKnight__pf__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OwningKnight__pf__const;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__SetOwningKnightCharacter__pf_Statics::NewProp_bpp__OwningKnight__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__SetOwningKnightCharacter__pf_Statics::NewProp_bpp__OwningKnight__pf__const = { "bpp__OwningKnight__pf__const", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(UIHealthBar_C__pf2132744816_eventbpf__SetOwningKnightCharacter__pf_Parms, bpp__OwningKnight__pf__const), Z_Construct_UClass_AKGCharacterBase_C__pf2132744816_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__SetOwningKnightCharacter__pf_Statics::NewProp_bpp__OwningKnight__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__SetOwningKnightCharacter__pf_Statics::NewProp_bpp__OwningKnight__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__SetOwningKnightCharacter__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__SetOwningKnightCharacter__pf_Statics::NewProp_bpp__OwningKnight__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__SetOwningKnightCharacter__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/UIHealthBar__pf2132744816.h" },
		{ "OverrideNativeName", "SetOwningKnightCharacter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__SetOwningKnightCharacter__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIHealthBar_C__pf2132744816, nullptr, "SetOwningKnightCharacter", nullptr, nullptr, sizeof(UIHealthBar_C__pf2132744816_eventbpf__SetOwningKnightCharacter__pf_Parms), Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__SetOwningKnightCharacter__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__SetOwningKnightCharacter__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__SetOwningKnightCharacter__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__SetOwningKnightCharacter__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__SetOwningKnightCharacter__pf()
	{
		UObject* Outer = Z_Construct_UClass_UUIHealthBar_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SetOwningKnightCharacter" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__SetOwningKnightCharacter__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUIHealthBar_C__pf2132744816_NoRegister()
	{
		return UUIHealthBar_C__pf2132744816::StaticClass();
	}
	struct Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ProgressBar_36__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ProgressBar_36__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultHealth__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__DefaultHealth__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__OwningxKnight__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__OwningxKnight__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_OwningKnight__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_OwningKnight__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__GetPercent_0__pf, "GetPercent_0" }, // 2164088585
		{ &Z_Construct_UFunction_UUIHealthBar_C__pf2132744816_bpf__SetOwningKnightCharacter__pf, "SetOwningKnightCharacter" }, // 2997040082
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UIHealthBar__pf2132744816.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UIHealthBar__pf2132744816.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "UIHealthBar_C" },
		{ "ReplaceConverted", "/Game/Blueprints/UIHealthBar.UIHealthBar_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::NewProp_bpv__ProgressBar_36__pf_MetaData[] = {
		{ "Category", "UIHealthBar" },
		{ "DisplayName", "ProgressBar_36" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIHealthBar__pf2132744816.h" },
		{ "OverrideNativeName", "ProgressBar_36" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::NewProp_bpv__ProgressBar_36__pf = { "ProgressBar_36", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIHealthBar_C__pf2132744816, bpv__ProgressBar_36__pf), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::NewProp_bpv__ProgressBar_36__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::NewProp_bpv__ProgressBar_36__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::NewProp_bpv__DefaultHealth__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Default Health" },
		{ "ModuleRelativePath", "Public/UIHealthBar__pf2132744816.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "DefaultHealth" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::NewProp_bpv__DefaultHealth__pf = { "DefaultHealth", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIHealthBar_C__pf2132744816, bpv__DefaultHealth__pf), METADATA_PARAMS(Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::NewProp_bpv__DefaultHealth__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::NewProp_bpv__DefaultHealth__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::NewProp_bpv__OwningxKnight__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Owning Knight" },
		{ "ModuleRelativePath", "Public/UIHealthBar__pf2132744816.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Owning Knight" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::NewProp_bpv__OwningxKnight__pfT = { "Owning Knight", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIHealthBar_C__pf2132744816, bpv__OwningxKnight__pfT), Z_Construct_UClass_AKGCharacterBase_C__pf2132744816_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::NewProp_bpv__OwningxKnight__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::NewProp_bpv__OwningxKnight__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_OwningKnight__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIHealthBar__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_OwningKnight" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_OwningKnight__pf = { "K2Node_CustomEvent_OwningKnight", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIHealthBar_C__pf2132744816, b0l__K2Node_CustomEvent_OwningKnight__pf), Z_Construct_UClass_AKGCharacterBase_C__pf2132744816_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_OwningKnight__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_OwningKnight__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::NewProp_bpv__ProgressBar_36__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::NewProp_bpv__DefaultHealth__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::NewProp_bpv__OwningxKnight__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_OwningKnight__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIHealthBar_C__pf2132744816>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::ClassParams = {
		&UUIHealthBar_C__pf2132744816::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIHealthBar_C__pf2132744816()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/UIHealthBar"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("UIHealthBar_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUIHealthBar_C__pf2132744816_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UUIHealthBar_C__pf2132744816, TEXT("UIHealthBar_C"), 2369451318);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UUIHealthBar_C__pf2132744816>()
	{
		return UUIHealthBar_C__pf2132744816::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUIHealthBar_C__pf2132744816(Z_Construct_UClass_UUIHealthBar_C__pf2132744816, &UUIHealthBar_C__pf2132744816::StaticClass, TEXT("/Game/Blueprints/UIHealthBar"), TEXT("UIHealthBar_C"), true, TEXT("/Game/Blueprints/UIHealthBar"), TEXT("/Game/Blueprints/UIHealthBar.UIHealthBar_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIHealthBar_C__pf2132744816);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
