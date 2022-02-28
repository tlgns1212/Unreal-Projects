// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/KGHealthPickUp__pf2132744816.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKGHealthPickUp__pf2132744816() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AKGCharacterBase_C__pf2132744816_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AKGHealthPickUp_C__pf2132744816::execbpf__ReceiveActorBeginOverlap__pf)
	{
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveActorBeginOverlap__pf(Z_Param_bpp__OtherActor__pf);
		P_NATIVE_END;
	}
	static FName NAME_AKGHealthPickUp_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf = FName(TEXT("ReceiveActorBeginOverlap"));
	void AKGHealthPickUp_C__pf2132744816::eventbpf__ReceiveActorBeginOverlap__pf(AActor* bpp__OtherActor__pf)
	{
		KGHealthPickUp_C__pf2132744816_eventbpf__ReceiveActorBeginOverlap__pf_Parms Parms;
		Parms.bpp__OtherActor__pf=bpp__OtherActor__pf;
		ProcessEvent(FindFunctionChecked(NAME_AKGHealthPickUp_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf),&Parms);
	}
	void AKGHealthPickUp_C__pf2132744816::StaticRegisterNativesAKGHealthPickUp_C__pf2132744816()
	{
		UClass* Class = AKGHealthPickUp_C__pf2132744816::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveActorBeginOverlap", &AKGHealthPickUp_C__pf2132744816::execbpf__ReceiveActorBeginOverlap__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AKGHealthPickUp_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKGHealthPickUp_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(KGHealthPickUp_C__pf2132744816_eventbpf__ReceiveActorBeginOverlap__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKGHealthPickUp_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKGHealthPickUp_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf_Statics::NewProp_bpp__OtherActor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKGHealthPickUp_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** t *tEvent when this actor overlaps another actor, for example a player walking into a trigger.t *tFor events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.t *t@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events.t */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "ActorBeginOverlap" },
		{ "ModuleRelativePath", "Public/KGHealthPickUp__pf2132744816.h" },
		{ "OverrideNativeName", "ReceiveActorBeginOverlap" },
		{ "ToolTip", "Event when this actor overlaps another actor, for example a player walking into a trigger.For events when objects have a blocking collision, for example a player hitting a wall, see 'Hit' events.@note Components on both this and the other Actor must have bGenerateOverlapEvents set to true to generate overlap events." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKGHealthPickUp_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816, nullptr, "ReceiveActorBeginOverlap", nullptr, nullptr, sizeof(KGHealthPickUp_C__pf2132744816_eventbpf__ReceiveActorBeginOverlap__pf_Parms), Z_Construct_UFunction_AKGHealthPickUp_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGHealthPickUp_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKGHealthPickUp_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGHealthPickUp_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKGHealthPickUp_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf()
	{
		UObject* Outer = Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveActorBeginOverlap" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKGHealthPickUp_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_NoRegister()
	{
		return AKGHealthPickUp_C__pf2132744816::StaticClass();
	}
	struct Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__P_Health__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__P_Health__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Sphere__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Sphere__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HealthOffering__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__HealthOffering__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_Event_OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AKGHealthPickUp_C__pf2132744816_bpf__ReceiveActorBeginOverlap__pf, "ReceiveActorBeginOverlap" }, // 4247550930
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KGHealthPickUp__pf2132744816.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KGHealthPickUp__pf2132744816.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "KGHealthPickUp_C" },
		{ "ReplaceConverted", "/Game/Blueprints/KGHealthPickUp.KGHealthPickUp_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_bpv__P_Health__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KGHealthPickUp__pf2132744816.h" },
		{ "OverrideNativeName", "P_Health" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_bpv__P_Health__pf = { "P_Health", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGHealthPickUp_C__pf2132744816, bpv__P_Health__pf), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_bpv__P_Health__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_bpv__P_Health__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_bpv__Sphere__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KGHealthPickUp__pf2132744816.h" },
		{ "OverrideNativeName", "Sphere" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_bpv__Sphere__pf = { "Sphere", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGHealthPickUp_C__pf2132744816, bpv__Sphere__pf), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_bpv__Sphere__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_bpv__Sphere__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_bpv__HealthOffering__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Health Offering" },
		{ "ModuleRelativePath", "Public/KGHealthPickUp__pf2132744816.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "HealthOffering" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_bpv__HealthOffering__pf = { "HealthOffering", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGHealthPickUp_C__pf2132744816, bpv__HealthOffering__pf), METADATA_PARAMS(Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_bpv__HealthOffering__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_bpv__HealthOffering__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGHealthPickUp__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_Event_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf = { "K2Node_Event_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGHealthPickUp_C__pf2132744816, b0l__K2Node_Event_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGHealthPickUp__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsKGCharacter_Base" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base__pf = { "K2Node_DynamicCast_AsKGCharacter_Base", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGHealthPickUp_C__pf2132744816, b0l__K2Node_DynamicCast_AsKGCharacter_Base__pf), Z_Construct_UClass_AKGCharacterBase_C__pf2132744816_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGHealthPickUp__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AKGHealthPickUp_C__pf2132744816*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AKGHealthPickUp_C__pf2132744816), &Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_bpv__P_Health__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_bpv__Sphere__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_bpv__HealthOffering__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_b0l__K2Node_Event_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKGHealthPickUp_C__pf2132744816>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::ClassParams = {
		&AKGHealthPickUp_C__pf2132744816::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/KGHealthPickUp"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("KGHealthPickUp_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AKGHealthPickUp_C__pf2132744816, TEXT("KGHealthPickUp_C"), 4005816460);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AKGHealthPickUp_C__pf2132744816>()
	{
		return AKGHealthPickUp_C__pf2132744816::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKGHealthPickUp_C__pf2132744816(Z_Construct_UClass_AKGHealthPickUp_C__pf2132744816, &AKGHealthPickUp_C__pf2132744816::StaticClass, TEXT("/Game/Blueprints/KGHealthPickUp"), TEXT("KGHealthPickUp_C"), true, TEXT("/Game/Blueprints/KGHealthPickUp"), TEXT("/Game/Blueprints/KGHealthPickUp.KGHealthPickUp_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKGHealthPickUp_C__pf2132744816);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
