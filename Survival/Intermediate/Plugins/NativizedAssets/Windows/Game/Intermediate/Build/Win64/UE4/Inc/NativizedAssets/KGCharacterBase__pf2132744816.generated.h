// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDamageType;
class AController;
class AActor;
#ifdef NATIVIZEDASSETS_KGCharacterBase__pf2132744816_generated_h
#error "KGCharacterBase__pf2132744816.generated.h already included, missing '#pragma once' in KGCharacterBase__pf2132744816.h"
#endif
#define NATIVIZEDASSETS_KGCharacterBase__pf2132744816_generated_h

#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_26_DELEGATE \
static inline void FEndGameDispatcher__pf__KGGameMode_C__pf__SinglecastDelegate_DelegateWrapper(const FScriptDelegate& EndGameDispatcher__pf__KGGameMode_C__pf__SinglecastDelegate) \
{ \
	EndGameDispatcher__pf__KGGameMode_C__pf__SinglecastDelegate.ProcessDelegate<UObject>(NULL); \
}


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_24_DELEGATE \
struct KGCharacterBase_C__pf2132744816_event__OnMontagePlayDelegate__DelegateSignature__SC_0_Parms \
{ \
	FName bpp__NotifyName__pf; \
}; \
static inline void F__OnMontagePlayDelegate__DelegateSignature__SC_0_DelegateWrapper(const FScriptDelegate& __OnMontagePlayDelegate__DelegateSignature__SC_0, FName bpp__NotifyName__pf) \
{ \
	KGCharacterBase_C__pf2132744816_event__OnMontagePlayDelegate__DelegateSignature__SC_0_Parms Parms; \
	Parms.bpp__NotifyName__pf=bpp__NotifyName__pf; \
	__OnMontagePlayDelegate__DelegateSignature__SC_0.ProcessDelegate<UObject>(&Parms); \
}


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_SPARSE_DATA
#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf); \
	DECLARE_FUNCTION(execbpf__OnNotifyEnd_173D52834BBB2BE6D99AC1B2DE22C2E0__pf); \
	DECLARE_FUNCTION(execbpf__OnNotifyBegin_173D52834BBB2BE6D99AC1B2DE22C2E0__pf); \
	DECLARE_FUNCTION(execbpf__OnInterrupted_173D52834BBB2BE6D99AC1B2DE22C2E0__pf); \
	DECLARE_FUNCTION(execbpf__OnBlendOut_173D52834BBB2BE6D99AC1B2DE22C2E0__pf); \
	DECLARE_FUNCTION(execbpf__OnCompleted_173D52834BBB2BE6D99AC1B2DE22C2E0__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__TryMelee__pf); \
	DECLARE_FUNCTION(execbpf__TryMagic__pf); \
	DECLARE_FUNCTION(execbpf__CreateSword__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveAnyDamage__pf); \
	DECLARE_FUNCTION(execbpf__LaunchMagicProjectile__pf); \
	DECLARE_FUNCTION(execbpf__UsePrimaryAttack__pf); \
	DECLARE_FUNCTION(execbpf__EndGameDance__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_KGCharacterBase__pf_0);


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf); \
	DECLARE_FUNCTION(execbpf__OnNotifyEnd_173D52834BBB2BE6D99AC1B2DE22C2E0__pf); \
	DECLARE_FUNCTION(execbpf__OnNotifyBegin_173D52834BBB2BE6D99AC1B2DE22C2E0__pf); \
	DECLARE_FUNCTION(execbpf__OnInterrupted_173D52834BBB2BE6D99AC1B2DE22C2E0__pf); \
	DECLARE_FUNCTION(execbpf__OnBlendOut_173D52834BBB2BE6D99AC1B2DE22C2E0__pf); \
	DECLARE_FUNCTION(execbpf__OnCompleted_173D52834BBB2BE6D99AC1B2DE22C2E0__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__TryMelee__pf); \
	DECLARE_FUNCTION(execbpf__TryMagic__pf); \
	DECLARE_FUNCTION(execbpf__CreateSword__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveAnyDamage__pf); \
	DECLARE_FUNCTION(execbpf__LaunchMagicProjectile__pf); \
	DECLARE_FUNCTION(execbpf__UsePrimaryAttack__pf); \
	DECLARE_FUNCTION(execbpf__EndGameDance__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_KGCharacterBase__pf_0);


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_EVENT_PARMS \
	struct KGCharacterBase_C__pf2132744816_eventbpf__ReceiveAnyDamage__pf_Parms \
	{ \
		float bpp__Damage__pf; \
		const UDamageType* bpp__DamageType__pf__const; \
		AController* bpp__InstigatedBy__pf; \
		AActor* bpp__DamageCauser__pf; \
	};


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf); \
 \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKGCharacterBase_C__pf2132744816(); \
	friend struct Z_Construct_UClass_AKGCharacterBase_C__pf2132744816_Statics; \
public: \
	DECLARE_CLASS(AKGCharacterBase_C__pf2132744816, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/KGCharacterBase"), NO_API) \
	DECLARE_SERIALIZER(AKGCharacterBase_C__pf2132744816)


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAKGCharacterBase_C__pf2132744816(); \
	friend struct Z_Construct_UClass_AKGCharacterBase_C__pf2132744816_Statics; \
public: \
	DECLARE_CLASS(AKGCharacterBase_C__pf2132744816, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/KGCharacterBase"), NO_API) \
	DECLARE_SERIALIZER(AKGCharacterBase_C__pf2132744816)


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKGCharacterBase_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKGCharacterBase_C__pf2132744816) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKGCharacterBase_C__pf2132744816); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKGCharacterBase_C__pf2132744816); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKGCharacterBase_C__pf2132744816(AKGCharacterBase_C__pf2132744816&&); \
	NO_API AKGCharacterBase_C__pf2132744816(const AKGCharacterBase_C__pf2132744816&); \
public:


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKGCharacterBase_C__pf2132744816(AKGCharacterBase_C__pf2132744816&&); \
	NO_API AKGCharacterBase_C__pf2132744816(const AKGCharacterBase_C__pf2132744816&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKGCharacterBase_C__pf2132744816); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKGCharacterBase_C__pf2132744816); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKGCharacterBase_C__pf2132744816)


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_PRIVATE_PROPERTY_OFFSET
#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_18_PROLOG \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_EVENT_PARMS


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_PRIVATE_PROPERTY_OFFSET \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_SPARSE_DATA \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_RPC_WRAPPERS \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_CALLBACK_WRAPPERS \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_INCLASS \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_PRIVATE_PROPERTY_OFFSET \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_SPARSE_DATA \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_CALLBACK_WRAPPERS \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_INCLASS_NO_PURE_DECLS \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h_22_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class AKGCharacterBase_C__pf2132744816>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGCharacterBase__pf2132744816_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
