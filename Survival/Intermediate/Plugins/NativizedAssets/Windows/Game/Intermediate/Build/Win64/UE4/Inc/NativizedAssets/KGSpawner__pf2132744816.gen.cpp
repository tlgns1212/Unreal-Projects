// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/KGSpawner__pf2132744816.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKGSpawner__pf2132744816() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UDelegateFunction_AKGSpawner_C__pf2132744816___ActorDestroyedSignature__DelegateSignature__SC_0__DelegateSignature();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AKGSpawner_C__pf2132744816();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AKGSpawner_C__pf2132744816_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AKGSpawner_C__pf2132744816___ActorDestroyedSignature__DelegateSignature__SC_0__DelegateSignature_Statics
	{
		struct KGSpawner_C__pf2132744816_event__ActorDestroyedSignature__DelegateSignature__SC_0_Parms
		{
			AActor* bpp__DestroyedActor__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__DestroyedActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AKGSpawner_C__pf2132744816___ActorDestroyedSignature__DelegateSignature__SC_0__DelegateSignature_Statics::NewProp_bpp__DestroyedActor__pf = { "bpp__DestroyedActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(KGSpawner_C__pf2132744816_event__ActorDestroyedSignature__DelegateSignature__SC_0_Parms, bpp__DestroyedActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AKGSpawner_C__pf2132744816___ActorDestroyedSignature__DelegateSignature__SC_0__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AKGSpawner_C__pf2132744816___ActorDestroyedSignature__DelegateSignature__SC_0__DelegateSignature_Statics::NewProp_bpp__DestroyedActor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AKGSpawner_C__pf2132744816___ActorDestroyedSignature__DelegateSignature__SC_0__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KGSpawner__pf2132744816.h" },
		{ "OverrideNativeName", "ActorDestroyedSignature__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AKGSpawner_C__pf2132744816___ActorDestroyedSignature__DelegateSignature__SC_0__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKGSpawner_C__pf2132744816, nullptr, "ActorDestroyedSignature__DelegateSignature", nullptr, nullptr, sizeof(KGSpawner_C__pf2132744816_event__ActorDestroyedSignature__DelegateSignature__SC_0_Parms), Z_Construct_UDelegateFunction_AKGSpawner_C__pf2132744816___ActorDestroyedSignature__DelegateSignature__SC_0__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AKGSpawner_C__pf2132744816___ActorDestroyedSignature__DelegateSignature__SC_0__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AKGSpawner_C__pf2132744816___ActorDestroyedSignature__DelegateSignature__SC_0__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AKGSpawner_C__pf2132744816___ActorDestroyedSignature__DelegateSignature__SC_0__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AKGSpawner_C__pf2132744816___ActorDestroyedSignature__DelegateSignature__SC_0__DelegateSignature()
	{
		UObject* Outer = Z_Construct_UClass_AKGSpawner_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ActorDestroyedSignature__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AKGSpawner_C__pf2132744816___ActorDestroyedSignature__DelegateSignature__SC_0__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AKGSpawner_C__pf2132744816::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKGSpawner_C__pf2132744816::execbpf__BeginRespawnCountdown__pf)
	{
		P_GET_OBJECT(AActor,Z_Param_bpp__DestroyedActor__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BeginRespawnCountdown__pf(Z_Param_bpp__DestroyedActor__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKGSpawner_C__pf2132744816::execbpf__ExecuteUbergraph_KGSpawner__pf_1)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_KGSpawner__pf_1(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_AKGSpawner_C__pf2132744816_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AKGSpawner_C__pf2132744816::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AKGSpawner_C__pf2132744816_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void AKGSpawner_C__pf2132744816::StaticRegisterNativesAKGSpawner_C__pf2132744816()
	{
		UClass* Class = AKGSpawner_C__pf2132744816::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginRespawnCountdown", &AKGSpawner_C__pf2132744816::execbpf__BeginRespawnCountdown__pf },
			{ "ExecuteUbergraph_KGSpawner_1", &AKGSpawner_C__pf2132744816::execbpf__ExecuteUbergraph_KGSpawner__pf_1 },
			{ "ReceiveBeginPlay", &AKGSpawner_C__pf2132744816::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__BeginRespawnCountdown__pf_Statics
	{
		struct KGSpawner_C__pf2132744816_eventbpf__BeginRespawnCountdown__pf_Parms
		{
			AActor* bpp__DestroyedActor__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__DestroyedActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__BeginRespawnCountdown__pf_Statics::NewProp_bpp__DestroyedActor__pf = { "bpp__DestroyedActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(KGSpawner_C__pf2132744816_eventbpf__BeginRespawnCountdown__pf_Parms, bpp__DestroyedActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__BeginRespawnCountdown__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__BeginRespawnCountdown__pf_Statics::NewProp_bpp__DestroyedActor__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__BeginRespawnCountdown__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/KGSpawner__pf2132744816.h" },
		{ "OverrideNativeName", "BeginRespawnCountdown" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__BeginRespawnCountdown__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKGSpawner_C__pf2132744816, nullptr, "BeginRespawnCountdown", nullptr, nullptr, sizeof(KGSpawner_C__pf2132744816_eventbpf__BeginRespawnCountdown__pf_Parms), Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__BeginRespawnCountdown__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__BeginRespawnCountdown__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__BeginRespawnCountdown__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__BeginRespawnCountdown__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__BeginRespawnCountdown__pf()
	{
		UObject* Outer = Z_Construct_UClass_AKGSpawner_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BeginRespawnCountdown" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__BeginRespawnCountdown__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__ExecuteUbergraph_KGSpawner__pf_1_Statics
	{
		struct KGSpawner_C__pf2132744816_eventbpf__ExecuteUbergraph_KGSpawner__pf_1_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__EntryPoint__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__ExecuteUbergraph_KGSpawner__pf_1_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(KGSpawner_C__pf2132744816_eventbpf__ExecuteUbergraph_KGSpawner__pf_1_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__ExecuteUbergraph_KGSpawner__pf_1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__ExecuteUbergraph_KGSpawner__pf_1_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__ExecuteUbergraph_KGSpawner__pf_1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KGSpawner__pf2132744816.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_KGSpawner_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__ExecuteUbergraph_KGSpawner__pf_1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKGSpawner_C__pf2132744816, nullptr, "ExecuteUbergraph_KGSpawner_1", nullptr, nullptr, sizeof(KGSpawner_C__pf2132744816_eventbpf__ExecuteUbergraph_KGSpawner__pf_1_Parms), Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__ExecuteUbergraph_KGSpawner__pf_1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__ExecuteUbergraph_KGSpawner__pf_1_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__ExecuteUbergraph_KGSpawner__pf_1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__ExecuteUbergraph_KGSpawner__pf_1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__ExecuteUbergraph_KGSpawner__pf_1()
	{
		UObject* Outer = Z_Construct_UClass_AKGSpawner_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_KGSpawner_1" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__ExecuteUbergraph_KGSpawner__pf_1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/KGSpawner__pf2132744816.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKGSpawner_C__pf2132744816, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AKGSpawner_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AKGSpawner_C__pf2132744816_NoRegister()
	{
		return AKGSpawner_C__pf2132744816::StaticClass();
	}
	struct Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RespawnDelay__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__RespawnDelay__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ActorToSpawn__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__ActorToSpawn__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetTransform_ReturnValue__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetTransform_ReturnValue__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_DestroyedActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_CustomEvent_DestroyedActor__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_AKGSpawner_C__pf2132744816___ActorDestroyedSignature__DelegateSignature__SC_0__DelegateSignature, "ActorDestroyedSignature__DelegateSignature" }, // 3928383690
		{ &Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__BeginRespawnCountdown__pf, "BeginRespawnCountdown" }, // 904525608
		{ &Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__ExecuteUbergraph_KGSpawner__pf_1, "ExecuteUbergraph_KGSpawner_1" }, // 130675711
		{ &Z_Construct_UFunction_AKGSpawner_C__pf2132744816_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 975278986
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KGSpawner__pf2132744816.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KGSpawner__pf2132744816.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "KGSpawner_C" },
		{ "ReplaceConverted", "/Game/Blueprints/KGSpawner.KGSpawner_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KGSpawner__pf2132744816.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGSpawner_C__pf2132744816, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_bpv__RespawnDelay__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Respawn Delay" },
		{ "ModuleRelativePath", "Public/KGSpawner__pf2132744816.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "RespawnDelay" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_bpv__RespawnDelay__pf = { "RespawnDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGSpawner_C__pf2132744816, bpv__RespawnDelay__pf), METADATA_PARAMS(Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_bpv__RespawnDelay__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_bpv__RespawnDelay__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_bpv__ActorToSpawn__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Actor to Spawn" },
		{ "ModuleRelativePath", "Public/KGSpawner__pf2132744816.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ActorToSpawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_bpv__ActorToSpawn__pf = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGSpawner_C__pf2132744816, bpv__ActorToSpawn__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_bpv__ActorToSpawn__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_bpv__ActorToSpawn__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGSpawner__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_CreateDelegate_OutputDelegate" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf = { "K2Node_CreateDelegate_OutputDelegate", nullptr, (EPropertyFlags)0x0010000000282000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGSpawner_C__pf2132744816, b0l__K2Node_CreateDelegate_OutputDelegate__pf), Z_Construct_UDelegateFunction_AKGSpawner_C__pf2132744816___ActorDestroyedSignature__DelegateSignature__SC_0__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetTransform_ReturnValue__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGSpawner__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_GetTransform_ReturnValue" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetTransform_ReturnValue__pf = { "CallFunc_GetTransform_ReturnValue", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGSpawner_C__pf2132744816, b0l__CallFunc_GetTransform_ReturnValue__pf), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetTransform_ReturnValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetTransform_ReturnValue__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_DestroyedActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGSpawner__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_DestroyedActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_DestroyedActor__pf = { "K2Node_CustomEvent_DestroyedActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGSpawner_C__pf2132744816, b0l__K2Node_CustomEvent_DestroyedActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_DestroyedActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_DestroyedActor__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_bpv__RespawnDelay__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_bpv__ActorToSpawn__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetTransform_ReturnValue__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::NewProp_b0l__K2Node_CustomEvent_DestroyedActor__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKGSpawner_C__pf2132744816>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::ClassParams = {
		&AKGSpawner_C__pf2132744816::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKGSpawner_C__pf2132744816()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/KGSpawner"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("KGSpawner_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AKGSpawner_C__pf2132744816, TEXT("KGSpawner_C"), 1530641339);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AKGSpawner_C__pf2132744816>()
	{
		return AKGSpawner_C__pf2132744816::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKGSpawner_C__pf2132744816(Z_Construct_UClass_AKGSpawner_C__pf2132744816, &AKGSpawner_C__pf2132744816::StaticClass, TEXT("/Game/Blueprints/KGSpawner"), TEXT("KGSpawner_C"), true, TEXT("/Game/Blueprints/KGSpawner"), TEXT("/Game/Blueprints/KGSpawner.KGSpawner_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKGSpawner_C__pf2132744816);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
