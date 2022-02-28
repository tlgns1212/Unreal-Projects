// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BaseSword__pf2132744816.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseSword__pf2132744816() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABaseSword_C__pf2132744816_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABaseSword_C__pf2132744816();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
// End Cross Module References
	DEFINE_FUNCTION(ABaseSword_C__pf2132744816::execbpf__TryDealDamage__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__TryDealDamage__pf();
		P_NATIVE_END;
	}
	void ABaseSword_C__pf2132744816::StaticRegisterNativesABaseSword_C__pf2132744816()
	{
		UClass* Class = ABaseSword_C__pf2132744816::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TryDealDamage", &ABaseSword_C__pf2132744816::execbpf__TryDealDamage__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseSword_C__pf2132744816_bpf__TryDealDamage__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseSword_C__pf2132744816_bpf__TryDealDamage__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BaseSword__pf2132744816.h" },
		{ "OverrideNativeName", "TryDealDamage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseSword_C__pf2132744816_bpf__TryDealDamage__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseSword_C__pf2132744816, nullptr, "TryDealDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseSword_C__pf2132744816_bpf__TryDealDamage__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseSword_C__pf2132744816_bpf__TryDealDamage__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseSword_C__pf2132744816_bpf__TryDealDamage__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABaseSword_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "TryDealDamage" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseSword_C__pf2132744816_bpf__TryDealDamage__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseSword_C__pf2132744816_NoRegister()
	{
		return ABaseSword_C__pf2132744816::StaticClass();
	}
	struct Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SwordMesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SwordMesh__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Array_Index_Variable__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_MakeArray_Array__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeArray_Array__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__K2Node_MakeArray_Array__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Loop_Counter_Variable__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__K2Node_MakeArray_Array_1__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeArray_Array_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__K2Node_MakeArray_Array_1__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_SphereOverlapActors_OutActors__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_SphereOverlapActors_OutActors__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_SphereOverlapActors_OutActors__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseSword_C__pf2132744816_bpf__TryDealDamage__pf, "TryDealDamage" }, // 2098489388
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseSword__pf2132744816.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseSword__pf2132744816.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BaseSword_C" },
		{ "ReplaceConverted", "/Game/Blueprints/BaseSword.BaseSword_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_bpv__SwordMesh__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseSword__pf2132744816.h" },
		{ "OverrideNativeName", "SwordMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_bpv__SwordMesh__pf = { "SwordMesh", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseSword_C__pf2132744816, bpv__SwordMesh__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_bpv__SwordMesh__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_bpv__SwordMesh__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseSword__pf2132744816.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseSword_C__pf2132744816, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseSword__pf2132744816.h" },
		{ "OverrideNativeName", "Temp_int_Array_Index_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf = { "Temp_int_Array_Index_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseSword_C__pf2132744816, b0l__Temp_int_Array_Index_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_Inner = { "b0l__K2Node_MakeArray_Array__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseSword__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_MakeArray_Array" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf = { "K2Node_MakeArray_Array", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseSword_C__pf2132744816, b0l__K2Node_MakeArray_Array__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseSword__pf2132744816.h" },
		{ "OverrideNativeName", "Temp_int_Loop_Counter_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf = { "Temp_int_Loop_Counter_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseSword_C__pf2132744816, b0l__Temp_int_Loop_Counter_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__K2Node_MakeArray_Array_1__pf_Inner = { "b0l__K2Node_MakeArray_Array_1__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__K2Node_MakeArray_Array_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseSword__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_MakeArray_Array_1" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__K2Node_MakeArray_Array_1__pf = { "K2Node_MakeArray_Array_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseSword_C__pf2132744816, b0l__K2Node_MakeArray_Array_1__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__K2Node_MakeArray_Array_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__K2Node_MakeArray_Array_1__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__CallFunc_SphereOverlapActors_OutActors__pf_Inner = { "b0l__CallFunc_SphereOverlapActors_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__CallFunc_SphereOverlapActors_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseSword__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_SphereOverlapActors_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__CallFunc_SphereOverlapActors_OutActors__pf = { "CallFunc_SphereOverlapActors_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseSword_C__pf2132744816, b0l__CallFunc_SphereOverlapActors_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__CallFunc_SphereOverlapActors_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__CallFunc_SphereOverlapActors_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseSword__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseSword_C__pf2132744816, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_bpv__SwordMesh__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__Temp_int_Array_Index_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__Temp_int_Loop_Counter_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__K2Node_MakeArray_Array_1__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__K2Node_MakeArray_Array_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__CallFunc_SphereOverlapActors_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__CallFunc_SphereOverlapActors_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseSword_C__pf2132744816>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::ClassParams = {
		&ABaseSword_C__pf2132744816::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseSword_C__pf2132744816()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/BaseSword"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BaseSword_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseSword_C__pf2132744816_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABaseSword_C__pf2132744816, TEXT("BaseSword_C"), 629827467);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABaseSword_C__pf2132744816>()
	{
		return ABaseSword_C__pf2132744816::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseSword_C__pf2132744816(Z_Construct_UClass_ABaseSword_C__pf2132744816, &ABaseSword_C__pf2132744816::StaticClass, TEXT("/Game/Blueprints/BaseSword"), TEXT("BaseSword_C"), true, TEXT("/Game/Blueprints/BaseSword"), TEXT("/Game/Blueprints/BaseSword.BaseSword_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseSword_C__pf2132744816);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
