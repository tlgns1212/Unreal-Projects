// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/KGPlayerControllerBase__pf2132744816.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKGPlayerControllerBase__pf2132744816() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UDelegateFunction_AKGPlayerControllerBase_C__pf2132744816_NewWave__pf__KGGameMode_C__pf__SinglecastDelegate__DelegateSignature();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UUIHUD_C__pf2132744816_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AKGCharacterBase_C__pf2132744816_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AKGGameMode_C__pf2132744816_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AKGPlayerControllerBase_C__pf2132744816_NewWave__pf__KGGameMode_C__pf__SinglecastDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AKGPlayerControllerBase_C__pf2132744816_NewWave__pf__KGGameMode_C__pf__SinglecastDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "NewWave__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AKGPlayerControllerBase_C__pf2132744816_NewWave__pf__KGGameMode_C__pf__SinglecastDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816, nullptr, "NewWave__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AKGPlayerControllerBase_C__pf2132744816_NewWave__pf__KGGameMode_C__pf__SinglecastDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AKGPlayerControllerBase_C__pf2132744816_NewWave__pf__KGGameMode_C__pf__SinglecastDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AKGPlayerControllerBase_C__pf2132744816_NewWave__pf__KGGameMode_C__pf__SinglecastDelegate__DelegateSignature()
	{
		UObject* Outer = Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "NewWave__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AKGPlayerControllerBase_C__pf2132744816_NewWave__pf__KGGameMode_C__pf__SinglecastDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AKGPlayerControllerBase_C__pf2132744816::execbpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKGPlayerControllerBase_C__pf2132744816::execbpf__InpActEvt_MeleeAttack_K2Node_InputActionEvent_1__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_MeleeAttack_K2Node_InputActionEvent_1__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKGPlayerControllerBase_C__pf2132744816::execbpf__InpActEvt_MagicAttack_K2Node_InputActionEvent_0__pf)
	{
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpActEvt_MagicAttack_K2Node_InputActionEvent_0__pf(Z_Param_bpp__Key__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKGPlayerControllerBase_C__pf2132744816::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKGPlayerControllerBase_C__pf2132744816::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKGPlayerControllerBase_C__pf2132744816::execbpf__ProcessMouse__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ProcessMouse__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKGPlayerControllerBase_C__pf2132744816::execbpf__InpAxisEvt_Up_K2Node_InputAxisEvent_0__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__AxisValue__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpAxisEvt_Up_K2Node_InputAxisEvent_0__pf(Z_Param_bpp__AxisValue__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKGPlayerControllerBase_C__pf2132744816::execbpf__InpAxisEvt_Right_K2Node_InputAxisEvent_1__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__AxisValue__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__InpAxisEvt_Right_K2Node_InputAxisEvent_1__pf(Z_Param_bpp__AxisValue__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AKGPlayerControllerBase_C__pf2132744816::execbpf__PopUpWaveUI__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__PopUpWaveUI__pf();
		P_NATIVE_END;
	}
	static FName NAME_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AKGPlayerControllerBase_C__pf2132744816::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AKGPlayerControllerBase_C__pf2132744816::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		KGPlayerControllerBase_C__pf2132744816_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveTick__pf),&Parms);
	}
	void AKGPlayerControllerBase_C__pf2132744816::StaticRegisterNativesAKGPlayerControllerBase_C__pf2132744816()
	{
		UClass* Class = AKGPlayerControllerBase_C__pf2132744816::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InpActEvt_Jump_K2Node_InputActionEvent_2", &AKGPlayerControllerBase_C__pf2132744816::execbpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf },
			{ "InpActEvt_MagicAttack_K2Node_InputActionEvent_0", &AKGPlayerControllerBase_C__pf2132744816::execbpf__InpActEvt_MagicAttack_K2Node_InputActionEvent_0__pf },
			{ "InpActEvt_MeleeAttack_K2Node_InputActionEvent_1", &AKGPlayerControllerBase_C__pf2132744816::execbpf__InpActEvt_MeleeAttack_K2Node_InputActionEvent_1__pf },
			{ "InpAxisEvt_Right_K2Node_InputAxisEvent_1", &AKGPlayerControllerBase_C__pf2132744816::execbpf__InpAxisEvt_Right_K2Node_InputAxisEvent_1__pf },
			{ "InpAxisEvt_Up_K2Node_InputAxisEvent_0", &AKGPlayerControllerBase_C__pf2132744816::execbpf__InpAxisEvt_Up_K2Node_InputAxisEvent_0__pf },
			{ "PopUpWaveUI", &AKGPlayerControllerBase_C__pf2132744816::execbpf__PopUpWaveUI__pf },
			{ "ProcessMouse", &AKGPlayerControllerBase_C__pf2132744816::execbpf__ProcessMouse__pf },
			{ "ReceiveBeginPlay", &AKGPlayerControllerBase_C__pf2132744816::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &AKGPlayerControllerBase_C__pf2132744816::execbpf__ReceiveTick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics
	{
		struct KGPlayerControllerBase_C__pf2132744816_eventbpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(KGPlayerControllerBase_C__pf2132744816_eventbpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "InpActEvt_Jump_K2Node_InputActionEvent_2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816, nullptr, "InpActEvt_Jump_K2Node_InputActionEvent_2", nullptr, nullptr, sizeof(KGPlayerControllerBase_C__pf2132744816_eventbpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Parms), Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf()
	{
		UObject* Outer = Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_Jump_K2Node_InputActionEvent_2" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MagicAttack_K2Node_InputActionEvent_0__pf_Statics
	{
		struct KGPlayerControllerBase_C__pf2132744816_eventbpf__InpActEvt_MagicAttack_K2Node_InputActionEvent_0__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MagicAttack_K2Node_InputActionEvent_0__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(KGPlayerControllerBase_C__pf2132744816_eventbpf__InpActEvt_MagicAttack_K2Node_InputActionEvent_0__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MagicAttack_K2Node_InputActionEvent_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MagicAttack_K2Node_InputActionEvent_0__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MagicAttack_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "InpActEvt_MagicAttack_K2Node_InputActionEvent_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MagicAttack_K2Node_InputActionEvent_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816, nullptr, "InpActEvt_MagicAttack_K2Node_InputActionEvent_0", nullptr, nullptr, sizeof(KGPlayerControllerBase_C__pf2132744816_eventbpf__InpActEvt_MagicAttack_K2Node_InputActionEvent_0__pf_Parms), Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MagicAttack_K2Node_InputActionEvent_0__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MagicAttack_K2Node_InputActionEvent_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MagicAttack_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MagicAttack_K2Node_InputActionEvent_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MagicAttack_K2Node_InputActionEvent_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_MagicAttack_K2Node_InputActionEvent_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MagicAttack_K2Node_InputActionEvent_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MeleeAttack_K2Node_InputActionEvent_1__pf_Statics
	{
		struct KGPlayerControllerBase_C__pf2132744816_eventbpf__InpActEvt_MeleeAttack_K2Node_InputActionEvent_1__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MeleeAttack_K2Node_InputActionEvent_1__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(KGPlayerControllerBase_C__pf2132744816_eventbpf__InpActEvt_MeleeAttack_K2Node_InputActionEvent_1__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MeleeAttack_K2Node_InputActionEvent_1__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MeleeAttack_K2Node_InputActionEvent_1__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MeleeAttack_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "InpActEvt_MeleeAttack_K2Node_InputActionEvent_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MeleeAttack_K2Node_InputActionEvent_1__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816, nullptr, "InpActEvt_MeleeAttack_K2Node_InputActionEvent_1", nullptr, nullptr, sizeof(KGPlayerControllerBase_C__pf2132744816_eventbpf__InpActEvt_MeleeAttack_K2Node_InputActionEvent_1__pf_Parms), Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MeleeAttack_K2Node_InputActionEvent_1__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MeleeAttack_K2Node_InputActionEvent_1__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MeleeAttack_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MeleeAttack_K2Node_InputActionEvent_1__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MeleeAttack_K2Node_InputActionEvent_1__pf()
	{
		UObject* Outer = Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpActEvt_MeleeAttack_K2Node_InputActionEvent_1" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MeleeAttack_K2Node_InputActionEvent_1__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Right_K2Node_InputAxisEvent_1__pf_Statics
	{
		struct KGPlayerControllerBase_C__pf2132744816_eventbpf__InpAxisEvt_Right_K2Node_InputAxisEvent_1__pf_Parms
		{
			float bpp__AxisValue__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__AxisValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Right_K2Node_InputAxisEvent_1__pf_Statics::NewProp_bpp__AxisValue__pf = { "bpp__AxisValue__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(KGPlayerControllerBase_C__pf2132744816_eventbpf__InpAxisEvt_Right_K2Node_InputAxisEvent_1__pf_Parms, bpp__AxisValue__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Right_K2Node_InputAxisEvent_1__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Right_K2Node_InputAxisEvent_1__pf_Statics::NewProp_bpp__AxisValue__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Right_K2Node_InputAxisEvent_1__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "InpAxisEvt_Right_K2Node_InputAxisEvent_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Right_K2Node_InputAxisEvent_1__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816, nullptr, "InpAxisEvt_Right_K2Node_InputAxisEvent_1", nullptr, nullptr, sizeof(KGPlayerControllerBase_C__pf2132744816_eventbpf__InpAxisEvt_Right_K2Node_InputAxisEvent_1__pf_Parms), Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Right_K2Node_InputAxisEvent_1__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Right_K2Node_InputAxisEvent_1__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Right_K2Node_InputAxisEvent_1__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Right_K2Node_InputAxisEvent_1__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Right_K2Node_InputAxisEvent_1__pf()
	{
		UObject* Outer = Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpAxisEvt_Right_K2Node_InputAxisEvent_1" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Right_K2Node_InputAxisEvent_1__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Up_K2Node_InputAxisEvent_0__pf_Statics
	{
		struct KGPlayerControllerBase_C__pf2132744816_eventbpf__InpAxisEvt_Up_K2Node_InputAxisEvent_0__pf_Parms
		{
			float bpp__AxisValue__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__AxisValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Up_K2Node_InputAxisEvent_0__pf_Statics::NewProp_bpp__AxisValue__pf = { "bpp__AxisValue__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(KGPlayerControllerBase_C__pf2132744816_eventbpf__InpAxisEvt_Up_K2Node_InputAxisEvent_0__pf_Parms, bpp__AxisValue__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Up_K2Node_InputAxisEvent_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Up_K2Node_InputAxisEvent_0__pf_Statics::NewProp_bpp__AxisValue__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Up_K2Node_InputAxisEvent_0__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "InpAxisEvt_Up_K2Node_InputAxisEvent_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Up_K2Node_InputAxisEvent_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816, nullptr, "InpAxisEvt_Up_K2Node_InputAxisEvent_0", nullptr, nullptr, sizeof(KGPlayerControllerBase_C__pf2132744816_eventbpf__InpAxisEvt_Up_K2Node_InputAxisEvent_0__pf_Parms), Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Up_K2Node_InputAxisEvent_0__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Up_K2Node_InputAxisEvent_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Up_K2Node_InputAxisEvent_0__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Up_K2Node_InputAxisEvent_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Up_K2Node_InputAxisEvent_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "InpAxisEvt_Up_K2Node_InputAxisEvent_0" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Up_K2Node_InputAxisEvent_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__PopUpWaveUI__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__PopUpWaveUI__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "PopUpWaveUI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__PopUpWaveUI__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816, nullptr, "PopUpWaveUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__PopUpWaveUI__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__PopUpWaveUI__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__PopUpWaveUI__pf()
	{
		UObject* Outer = Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "PopUpWaveUI" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__PopUpWaveUI__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ProcessMouse__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ProcessMouse__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "ProcessMouse" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ProcessMouse__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816, nullptr, "ProcessMouse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ProcessMouse__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ProcessMouse__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ProcessMouse__pf()
	{
		UObject* Outer = Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ProcessMouse" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ProcessMouse__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(KGPlayerControllerBase_C__pf2132744816_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(KGPlayerControllerBase_C__pf2132744816_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_NoRegister()
	{
		return AKGPlayerControllerBase_C__pf2132744816::StaticClass();
	}
	struct Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HUDWidget__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__HUDWidget__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Time__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Distance__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Location__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Normal__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_ElementIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__CallFunc_BreakHitResult_ElementIndex__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Roll__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Pitch__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Yaw__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsCharacter__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsCharacter__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputActionEvent_Key_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsKGGame_Mode__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsKGGame_Mode__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_Jump_K2Node_InputActionEvent_2__pf, "InpActEvt_Jump_K2Node_InputActionEvent_2" }, // 207774244
		{ &Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MagicAttack_K2Node_InputActionEvent_0__pf, "InpActEvt_MagicAttack_K2Node_InputActionEvent_0" }, // 846163818
		{ &Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpActEvt_MeleeAttack_K2Node_InputActionEvent_1__pf, "InpActEvt_MeleeAttack_K2Node_InputActionEvent_1" }, // 2141869609
		{ &Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Right_K2Node_InputAxisEvent_1__pf, "InpAxisEvt_Right_K2Node_InputAxisEvent_1" }, // 4011930560
		{ &Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__InpAxisEvt_Up_K2Node_InputAxisEvent_0__pf, "InpAxisEvt_Up_K2Node_InputAxisEvent_0" }, // 738604389
		{ &Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__PopUpWaveUI__pf, "PopUpWaveUI" }, // 100768525
		{ &Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ProcessMouse__pf, "ProcessMouse" }, // 3783371118
		{ &Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3007369809
		{ &Z_Construct_UFunction_AKGPlayerControllerBase_C__pf2132744816_bpf__ReceiveTick__pf, "ReceiveTick" }, // 3995527165
		{ &Z_Construct_UDelegateFunction_AKGPlayerControllerBase_C__pf2132744816_NewWave__pf__KGGameMode_C__pf__SinglecastDelegate__DelegateSignature, "NewWave__DelegateSignature" }, // 2304644653
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "KGPlayerControllerBase__pf2132744816.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "KGPlayerControllerBase_C" },
		{ "ReplaceConverted", "/Game/Blueprints/KGPlayerControllerBase.KGPlayerControllerBase_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_bpv__HUDWidget__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "HUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "HUDWidget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_bpv__HUDWidget__pf = { "HUDWidget", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, bpv__HUDWidget__pf), Z_Construct_UClass_UUIHUD_C__pf2132744816_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_bpv__HUDWidget__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_bpv__HUDWidget__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_CreateDelegate_OutputDelegate" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf = { "K2Node_CreateDelegate_OutputDelegate", nullptr, (EPropertyFlags)0x0010000000282000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__K2Node_CreateDelegate_OutputDelegate__pf), Z_Construct_UDelegateFunction_AKGPlayerControllerBase_C__pf2132744816_NewWave__pf__KGGameMode_C__pf__SinglecastDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_GetHitResultUnderCursorByChannel_HitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf = { "CallFunc_GetHitResultUnderCursorByChannel_HitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_bBlockingHit" },
	};
#endif
	void Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_SetBit(void* Obj)
	{
		((AKGPlayerControllerBase_C__pf2132744816*)Obj)->b0l__CallFunc_BreakHitResult_bBlockingHit__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf = { "CallFunc_BreakHitResult_bBlockingHit", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AKGPlayerControllerBase_C__pf2132744816), &Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_bInitialOverlap" },
	};
#endif
	void Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_SetBit(void* Obj)
	{
		((AKGPlayerControllerBase_C__pf2132744816*)Obj)->b0l__CallFunc_BreakHitResult_bInitialOverlap__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf = { "CallFunc_BreakHitResult_bInitialOverlap", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AKGPlayerControllerBase_C__pf2132744816), &Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf = { "CallFunc_BreakHitResult_Time", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__CallFunc_BreakHitResult_Time__pf), METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Distance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf = { "CallFunc_BreakHitResult_Distance", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__CallFunc_BreakHitResult_Distance__pf), METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf = { "CallFunc_BreakHitResult_Location", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__CallFunc_BreakHitResult_Location__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_ImpactPoint" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf = { "CallFunc_BreakHitResult_ImpactPoint", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__CallFunc_BreakHitResult_ImpactPoint__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Normal" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf = { "CallFunc_BreakHitResult_Normal", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__CallFunc_BreakHitResult_Normal__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_ImpactNormal" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf = { "CallFunc_BreakHitResult_ImpactNormal", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__CallFunc_BreakHitResult_ImpactNormal__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_PhysMat" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf = { "CallFunc_BreakHitResult_PhysMat", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__CallFunc_BreakHitResult_PhysMat__pf), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf = { "CallFunc_BreakHitResult_HitActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__CallFunc_BreakHitResult_HitActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf = { "CallFunc_BreakHitResult_HitComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__CallFunc_BreakHitResult_HitComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitBoneName" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf = { "CallFunc_BreakHitResult_HitBoneName", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__CallFunc_BreakHitResult_HitBoneName__pf), METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitItem" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf = { "CallFunc_BreakHitResult_HitItem", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__CallFunc_BreakHitResult_HitItem__pf), METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_ElementIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_ElementIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_ElementIndex__pf = { "CallFunc_BreakHitResult_ElementIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__CallFunc_BreakHitResult_ElementIndex__pf), METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_ElementIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_ElementIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_FaceIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf = { "CallFunc_BreakHitResult_FaceIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__CallFunc_BreakHitResult_FaceIndex__pf), METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_TraceStart" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf = { "CallFunc_BreakHitResult_TraceStart", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__CallFunc_BreakHitResult_TraceStart__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_TraceEnd" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf = { "CallFunc_BreakHitResult_TraceEnd", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__CallFunc_BreakHitResult_TraceEnd__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Roll" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf = { "CallFunc_BreakRotator_Roll", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__CallFunc_BreakRotator_Roll__pf), METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Pitch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf = { "CallFunc_BreakRotator_Pitch", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__CallFunc_BreakRotator_Pitch__pf), METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Yaw" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf = { "CallFunc_BreakRotator_Yaw", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__CallFunc_BreakRotator_Yaw__pf), METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsKGCharacter_Base" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base__pf = { "K2Node_DynamicCast_AsKGCharacter_Base", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__K2Node_DynamicCast_AsKGCharacter_Base__pf), Z_Construct_UClass_AKGCharacterBase_C__pf2132744816_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AKGPlayerControllerBase_C__pf2132744816*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AKGPlayerControllerBase_C__pf2132744816), &Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_InputAxisEvent_AxisValue_1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf = { "K2Node_InputAxisEvent_AxisValue_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__K2Node_InputAxisEvent_AxisValue_1__pf), METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf = { "K2Node_InputActionEvent_Key", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__K2Node_InputActionEvent_Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_InputAxisEvent_AxisValue" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf = { "K2Node_InputAxisEvent_AxisValue", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__K2Node_InputAxisEvent_AxisValue__pf), METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf = { "K2Node_InputActionEvent_Key_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__K2Node_InputActionEvent_Key_1__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsCharacter__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsCharacter" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsCharacter__pf = { "K2Node_DynamicCast_AsCharacter", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__K2Node_DynamicCast_AsCharacter__pf), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsCharacter__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsCharacter__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((AKGPlayerControllerBase_C__pf2132744816*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AKGPlayerControllerBase_C__pf2132744816), &Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_InputActionEvent_Key_2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf = { "K2Node_InputActionEvent_Key_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__K2Node_InputActionEvent_Key_2__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsKGCharacter_Base_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base_1__pf = { "K2Node_DynamicCast_AsKGCharacter_Base_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__K2Node_DynamicCast_AsKGCharacter_Base_1__pf), Z_Construct_UClass_AKGCharacterBase_C__pf2132744816_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_2" },
	};
#endif
	void Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj)
	{
		((AKGPlayerControllerBase_C__pf2132744816*)Obj)->b0l__K2Node_DynamicCast_bSuccess_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf = { "K2Node_DynamicCast_bSuccess_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AKGPlayerControllerBase_C__pf2132744816), &Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsKGCharacter_Base_2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base_2__pf = { "K2Node_DynamicCast_AsKGCharacter_Base_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__K2Node_DynamicCast_AsKGCharacter_Base_2__pf), Z_Construct_UClass_AKGCharacterBase_C__pf2132744816_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_3" },
	};
#endif
	void Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit(void* Obj)
	{
		((AKGPlayerControllerBase_C__pf2132744816*)Obj)->b0l__K2Node_DynamicCast_bSuccess_3__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf = { "K2Node_DynamicCast_bSuccess_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AKGPlayerControllerBase_C__pf2132744816), &Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGGame_Mode__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsKGGame_Mode" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGGame_Mode__pf = { "K2Node_DynamicCast_AsKGGame_Mode", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKGPlayerControllerBase_C__pf2132744816, b0l__K2Node_DynamicCast_AsKGGame_Mode__pf), Z_Construct_UClass_AKGGameMode_C__pf2132744816_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGGame_Mode__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGGame_Mode__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/KGPlayerControllerBase__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_4" },
	};
#endif
	void Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_SetBit(void* Obj)
	{
		((AKGPlayerControllerBase_C__pf2132744816*)Obj)->b0l__K2Node_DynamicCast_bSuccess_4__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf = { "K2Node_DynamicCast_bSuccess_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AKGPlayerControllerBase_C__pf2132744816), &Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_bpv__HUDWidget__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_CreateDelegate_OutputDelegate__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_ElementIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputActionEvent_Key__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputAxisEvent_AxisValue__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsCharacter__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputActionEvent_Key_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGCharacter_Base_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsKGGame_Mode__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKGPlayerControllerBase_C__pf2132744816>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::ClassParams = {
		&AKGPlayerControllerBase_C__pf2132744816::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/KGPlayerControllerBase"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("KGPlayerControllerBase_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AKGPlayerControllerBase_C__pf2132744816, TEXT("KGPlayerControllerBase_C"), 1945529027);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AKGPlayerControllerBase_C__pf2132744816>()
	{
		return AKGPlayerControllerBase_C__pf2132744816::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKGPlayerControllerBase_C__pf2132744816(Z_Construct_UClass_AKGPlayerControllerBase_C__pf2132744816, &AKGPlayerControllerBase_C__pf2132744816::StaticClass, TEXT("/Game/Blueprints/KGPlayerControllerBase"), TEXT("KGPlayerControllerBase_C"), true, TEXT("/Game/Blueprints/KGPlayerControllerBase"), TEXT("/Game/Blueprints/KGPlayerControllerBase.KGPlayerControllerBase_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKGPlayerControllerBase_C__pf2132744816);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
