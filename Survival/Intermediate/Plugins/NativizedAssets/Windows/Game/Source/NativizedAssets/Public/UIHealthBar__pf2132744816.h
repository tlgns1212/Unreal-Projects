#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UProgressBar;
class AKGCharacterBase_C__pf2132744816;
#include "UIHealthBar__pf2132744816.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/UIHealthBar.UIHealthBar_C", OverrideNativeName="UIHealthBar_C"))
class UUIHealthBar_C__pf2132744816 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ProgressBar_36", Category="UIHealthBar", OverrideNativeName="ProgressBar_36"))
	UProgressBar* bpv__ProgressBar_36__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Default Health", Category="Default", MultiLine="true", OverrideNativeName="DefaultHealth"))
	float bpv__DefaultHealth__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Owning Knight", Category="Default", MultiLine="true", OverrideNativeName="Owning Knight"))
	AKGCharacterBase_C__pf2132744816* bpv__OwningxKnight__pfT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_OwningKnight"))
	AKGCharacterBase_C__pf2132744816* b0l__K2Node_CustomEvent_OwningKnight__pf;
	UUIHealthBar_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_UIHealthBar__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetOwningKnightCharacter"))
	virtual void bpf__SetOwningKnightCharacter__pf(const AKGCharacterBase_C__pf2132744816* bpp__OwningKnight__pf__const);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetPercent_0"))
	virtual float  bpf__GetPercent_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
