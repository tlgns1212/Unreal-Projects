// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef NATIVIZEDASSETS_KGSpawner__pf2132744816_generated_h
#error "KGSpawner__pf2132744816.generated.h already included, missing '#pragma once' in KGSpawner__pf2132744816.h"
#endif
#define NATIVIZEDASSETS_KGSpawner__pf2132744816_generated_h

#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_15_DELEGATE \
struct KGSpawner_C__pf2132744816_event__ActorDestroyedSignature__DelegateSignature__SC_0_Parms \
{ \
	AActor* bpp__DestroyedActor__pf; \
}; \
static inline void F__ActorDestroyedSignature__DelegateSignature__SC_0_DelegateWrapper(const FScriptDelegate& __ActorDestroyedSignature__DelegateSignature__SC_0, AActor* bpp__DestroyedActor__pf) \
{ \
	KGSpawner_C__pf2132744816_event__ActorDestroyedSignature__DelegateSignature__SC_0_Parms Parms; \
	Parms.bpp__DestroyedActor__pf=bpp__DestroyedActor__pf; \
	__ActorDestroyedSignature__DelegateSignature__SC_0.ProcessDelegate<UObject>(&Parms); \
}


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_SPARSE_DATA
#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__BeginRespawnCountdown__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_KGSpawner__pf_1);


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__BeginRespawnCountdown__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_KGSpawner__pf_1);


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_EVENT_PARMS
#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \



#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKGSpawner_C__pf2132744816(); \
	friend struct Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics; \
public: \
	DECLARE_CLASS(AKGSpawner_C__pf2132744816, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/KGSpawner"), NO_API) \
	DECLARE_SERIALIZER(AKGSpawner_C__pf2132744816)


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAKGSpawner_C__pf2132744816(); \
	friend struct Z_Construct_UClass_AKGSpawner_C__pf2132744816_Statics; \
public: \
	DECLARE_CLASS(AKGSpawner_C__pf2132744816, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/KGSpawner"), NO_API) \
	DECLARE_SERIALIZER(AKGSpawner_C__pf2132744816)


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKGSpawner_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKGSpawner_C__pf2132744816) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKGSpawner_C__pf2132744816); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKGSpawner_C__pf2132744816); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKGSpawner_C__pf2132744816(AKGSpawner_C__pf2132744816&&); \
	NO_API AKGSpawner_C__pf2132744816(const AKGSpawner_C__pf2132744816&); \
public:


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKGSpawner_C__pf2132744816(AKGSpawner_C__pf2132744816&&); \
	NO_API AKGSpawner_C__pf2132744816(const AKGSpawner_C__pf2132744816&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKGSpawner_C__pf2132744816); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKGSpawner_C__pf2132744816); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKGSpawner_C__pf2132744816)


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_PRIVATE_PROPERTY_OFFSET
#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_9_PROLOG \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_EVENT_PARMS


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_PRIVATE_PROPERTY_OFFSET \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_SPARSE_DATA \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_RPC_WRAPPERS \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_CALLBACK_WRAPPERS \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_INCLASS \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_PRIVATE_PROPERTY_OFFSET \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_SPARSE_DATA \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_CALLBACK_WRAPPERS \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_INCLASS_NO_PURE_DECLS \
	Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h_13_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class AKGSpawner_C__pf2132744816>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Survival_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_KGSpawner__pf2132744816_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
