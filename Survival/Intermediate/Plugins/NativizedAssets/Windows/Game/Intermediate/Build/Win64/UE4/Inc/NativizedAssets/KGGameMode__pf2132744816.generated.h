// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef NATIVIZEDASSETS_KGGameMode__pf2132744816_generated_h
#error "KGGameMode__pf2132744816.generated.h already included, missing '#pragma once' in KGGameMode__pf2132744816.h"
#endif
#define NATIVIZEDASSETS_KGGameMode__pf2132744816_generated_h

#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_24_DELEGATE \
struct KGGameMode_C__pf2132744816_event__ActorDestroyedSignature__DelegateSignature__SC_0_Parms \
{ \
	AActor* bpp__DestroyedActor__pf; \
}; \
static inline void F__ActorDestroyedSignature__DelegateSignature__SC_0_DelegateWrapper(const FScriptDelegate& __ActorDestroyedSignature__DelegateSignature__SC_0, AActor* bpp__DestroyedActor__pf) \
{ \
	KGGameMode_C__pf2132744816_event__ActorDestroyedSignature__DelegateSignature__SC_0_Parms Parms; \
	Parms.bpp__DestroyedActor__pf=bpp__DestroyedActor__pf; \
	__ActorDestroyedSignature__DelegateSignature__SC_0.ProcessDelegate<UObject>(&Parms); \
}


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_22_DELEGATE \
static inline void FEndGameDispatcher__pf__KGGameMode_C__pf__MulticastDelegate_DelegateWrapper(const FMulticastScriptDelegate& EndGameDispatcher__pf__KGGameMode_C__pf__MulticastDelegate) \
{ \
	EndGameDispatcher__pf__KGGameMode_C__pf__MulticastDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_20_DELEGATE \
static inline void FNewWave__pf__KGGameMode_C__pf__MulticastDelegate_DelegateWrapper(const FMulticastScriptDelegate& NewWave__pf__KGGameMode_C__pf__MulticastDelegate) \
{ \
	NewWave__pf__KGGameMode_C__pf__MulticastDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_SPARSE_DATA
#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__SpawnEnemy__pf); \
	DECLARE_FUNCTION(execbpf__StartNewWave__pf); \
	DECLARE_FUNCTION(execbpf__CheckWaveComplete__pf); \
	DECLARE_FUNCTION(execbpf__ResetGame__pf); \
	DECLARE_FUNCTION(execbpf__EndGame__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_KGGameMode__pf_0);


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__SpawnEnemy__pf); \
	DECLARE_FUNCTION(execbpf__StartNewWave__pf); \
	DECLARE_FUNCTION(execbpf__CheckWaveComplete__pf); \
	DECLARE_FUNCTION(execbpf__ResetGame__pf); \
	DECLARE_FUNCTION(execbpf__EndGame__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_KGGameMode__pf_0);


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_EVENT_PARMS
#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \



#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKGGameMode_C__pf2132744816(); \
	friend struct Z_Construct_UClass_AKGGameMode_C__pf2132744816_Statics; \
public: \
	DECLARE_CLASS(AKGGameMode_C__pf2132744816, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/KGGameMode"), NO_API) \
	DECLARE_SERIALIZER(AKGGameMode_C__pf2132744816)


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAKGGameMode_C__pf2132744816(); \
	friend struct Z_Construct_UClass_AKGGameMode_C__pf2132744816_Statics; \
public: \
	DECLARE_CLASS(AKGGameMode_C__pf2132744816, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/KGGameMode"), NO_API) \
	DECLARE_SERIALIZER(AKGGameMode_C__pf2132744816)


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKGGameMode_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKGGameMode_C__pf2132744816) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKGGameMode_C__pf2132744816); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKGGameMode_C__pf2132744816); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKGGameMode_C__pf2132744816(AKGGameMode_C__pf2132744816&&); \
	NO_API AKGGameMode_C__pf2132744816(const AKGGameMode_C__pf2132744816&); \
public:


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKGGameMode_C__pf2132744816(AKGGameMode_C__pf2132744816&&); \
	NO_API AKGGameMode_C__pf2132744816(const AKGGameMode_C__pf2132744816&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKGGameMode_C__pf2132744816); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKGGameMode_C__pf2132744816); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKGGameMode_C__pf2132744816)


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_PRIVATE_PROPERTY_OFFSET
#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_14_PROLOG \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_EVENT_PARMS


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_PRIVATE_PROPERTY_OFFSET \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_SPARSE_DATA \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_RPC_WRAPPERS \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_CALLBACK_WRAPPERS \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_INCLASS \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_PRIVATE_PROPERTY_OFFSET \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_SPARSE_DATA \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_CALLBACK_WRAPPERS \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_INCLASS_NO_PURE_DECLS \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class AKGGameMode_C__pf2132744816>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGGameMode__pf2132744816_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
