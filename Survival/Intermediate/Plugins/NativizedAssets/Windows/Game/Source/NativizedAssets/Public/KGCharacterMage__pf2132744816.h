#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "KGCharacterBase__pf2132744816.h"
#include "KGCharacterMage__pf2132744816.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/KGCharacterMage.KGCharacterMage_C", OverrideNativeName="KGCharacterMage_C"))
class AKGCharacterMage_C__pf2132744816 : public AKGCharacterBase_C__pf2132744816
{
public:
	GENERATED_BODY()
	AKGCharacterMage_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_KGCharacterMage__pf_0(int32 bpp__EntryPoint__pf);
	virtual void bpf__UsePrimaryAttack__pf() override;
public:
};
