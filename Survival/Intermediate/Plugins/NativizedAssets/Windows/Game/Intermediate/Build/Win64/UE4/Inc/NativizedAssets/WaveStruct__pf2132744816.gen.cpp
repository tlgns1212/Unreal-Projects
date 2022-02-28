// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/WaveStruct__pf2132744816.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveStruct__pf2132744816() {}
// Cross Module References
	NATIVIZEDASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FWaveStruct__pf2132744816();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FWaveStruct__pf2132744816::StaticStruct()
{
	class UPackage* StructPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/WaveStruct"));
	class UScriptStruct* Singleton = Cast<UScriptStruct>(StaticFindObjectFast(UScriptStruct::StaticClass(), StructPackage, TEXT("WaveStruct")));
	if (!Singleton)
	{
		extern NATIVIZEDASSETS_API uint32 Get_Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveStruct__pf2132744816, StructPackage, TEXT("WaveStruct"), sizeof(FWaveStruct__pf2132744816), Get_Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Hash());
	}
	return Singleton;
}
template<> NATIVIZEDASSETS_API UScriptStruct* StaticStruct<FWaveStruct__pf2132744816>()
{
	return FWaveStruct__pf2132744816::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWaveStruct__pf2132744816(FWaveStruct__pf2132744816::StaticStruct, TEXT("/Game/Blueprints/WaveStruct"), TEXT("WaveStruct"), true, TEXT("/Game/Blueprints/WaveStruct"), TEXT("/Game/Blueprints/WaveStruct.WaveStruct"));
static struct FScriptStruct_NativizedAssets_StaticRegisterNativesFWaveStruct__pf2132744816
{
	FScriptStruct_NativizedAssets_StaticRegisterNativesFWaveStruct__pf2132744816()
	{
		UScriptStruct::DeferCppStructOps<FWaveStruct__pf2132744816>(FName(TEXT("WaveStruct")));
	}
} ScriptStruct_NativizedAssets_StaticRegisterNativesFWaveStruct__pf2132744816;
	struct Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Statics
	{
		static UObject* OuterFuncGetter();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpv__ClassToSpawn_3_0CE0D3BF42F622417FBEC2A37B805F42__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ClassToSpawn_3_0CE0D3BF42F622417FBEC2A37B805F42__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__ClassToSpawn_3_0CE0D3BF42F622417FBEC2A37B805F42__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
	UObject* Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Statics::OuterFuncGetter()
	{
		return FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/WaveStruct"));	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WaveStruct__pf2132744816.h" },
		{ "OverrideNativeName", "WaveStruct" },
		{ "ReplaceConverted", "/Game/Blueprints/WaveStruct.WaveStruct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveStruct__pf2132744816>();
	}
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Statics::NewProp_bpv__ClassToSpawn_3_0CE0D3BF42F622417FBEC2A37B805F42__pf_Inner = { "bpv__ClassToSpawn_3_0CE0D3BF42F622417FBEC2A37B805F42__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Statics::NewProp_bpv__ClassToSpawn_3_0CE0D3BF42F622417FBEC2A37B805F42__pf_MetaData[] = {
		{ "Category", "WaveStruct__pf2132744816" },
		{ "DisplayName", "ClassToSpawn" },
		{ "ModuleRelativePath", "Public/WaveStruct__pf2132744816.h" },
		{ "OverrideNativeName", "ClassToSpawn_3_0CE0D3BF42F622417FBEC2A37B805F42" },
		{ "Tooltip", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Statics::NewProp_bpv__ClassToSpawn_3_0CE0D3BF42F622417FBEC2A37B805F42__pf = { "ClassToSpawn_3_0CE0D3BF42F622417FBEC2A37B805F42", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWaveStruct__pf2132744816, bpv__ClassToSpawn_3_0CE0D3BF42F622417FBEC2A37B805F42__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Statics::NewProp_bpv__ClassToSpawn_3_0CE0D3BF42F622417FBEC2A37B805F42__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Statics::NewProp_bpv__ClassToSpawn_3_0CE0D3BF42F622417FBEC2A37B805F42__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Statics::NewProp_bpv__ClassToSpawn_3_0CE0D3BF42F622417FBEC2A37B805F42__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Statics::NewProp_bpv__ClassToSpawn_3_0CE0D3BF42F622417FBEC2A37B805F42__pf,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Statics::ReturnStructParams = {
		(UObject* (*)())&OuterFuncGetter,
		nullptr,
		&NewStructOps,
		"WaveStruct",
		sizeof(FWaveStruct__pf2132744816),
		alignof(FWaveStruct__pf2132744816),
		Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Statics::PropPointers),
		RF_Public|RF_Transient,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaveStruct__pf2132744816()
	{
		extern uint32 Get_Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Hash();
		UPackage* Outer = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/WaveStruct"));
		UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WaveStruct"), sizeof(FWaveStruct__pf2132744816), Get_Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Hash(), true);
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWaveStruct__pf2132744816_Hash() { return 31360921U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
