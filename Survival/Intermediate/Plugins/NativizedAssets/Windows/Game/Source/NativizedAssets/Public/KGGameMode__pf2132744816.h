#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "WaveStruct__pf2132744816.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
class USceneComponent;
class AKGCharacterBase_C__pf2132744816;
class UClass;
class APlayerStart;
class AActor;
class AKGAIControllerBase_C__pf2132744816;
#include "KGGameMode__pf2132744816.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/KGGameMode.KGGameMode_C", OverrideNativeName="KGGameMode_C"))
class AKGGameMode_C__pf2132744816 : public AGameModeBase
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="NewWave__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNewWave__pf__KGGameMode_C__pf__MulticastDelegate );
	UDELEGATE(meta=(OverrideNativeName="EndGameDispatcher__DelegateSignature"))
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndGameDispatcher__pf__KGGameMode_C__pf__MulticastDelegate );
	UDELEGATE(meta=(OverrideNativeName="ActorDestroyedSignature__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__ActorDestroyedSignature__DelegateSignature__SC_0, AActor* , bpp__DestroyedActor__pf);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Waves", Category="Default", MultiLine="true", OverrideNativeName="Waves"))
	TArray<FWaveStruct__pf2132744816> bpv__Waves__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Wave Index", Category="Default", MultiLine="true", OverrideNativeName="WaveIndex"))
	int32 bpv__WaveIndex__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Queue", Category="Default", MultiLine="true", OverrideNativeName="Queue"))
	TArray<UClass*> bpv__Queue__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="New Wave", Category="Default", MultiLine="true", OverrideNativeName="NewWave"))
	FNewWave__pf__KGGameMode_C__pf__MulticastDelegate bpv__NewWave__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, BlueprintAssignable, BlueprintCallable, meta=(DisplayName="End Game Dispatcher", Category="Default", MultiLine="true", OverrideNativeName="EndGameDispatcher"))
	FEndGameDispatcher__pf__KGGameMode_C__pf__MulticastDelegate bpv__EndGameDispatcher__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__ActorDestroyedSignature__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<APlayerStart*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	APlayerStart* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	UClass* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_DestroyedActor"))
	AActor* b0l__K2Node_CustomEvent_DestroyedActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_1"))
	TArray<AKGAIControllerBase_C__pf2132744816*> b0l__CallFunc_GetAllActorsOfClass_OutActors_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors_2"))
	TArray<AActor*> b0l__CallFunc_GetAllActorsOfClass_OutActors_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	AActor* b0l__CallFunc_Array_Get_Item_2__pf;
	AKGGameMode_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_KGGameMode_0"))
	void bpf__ExecuteUbergraph_KGGameMode__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_KGGameMode__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_KGGameMode__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_KGGameMode__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_KGGameMode__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="EndGame"))
	virtual void bpf__EndGame__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ResetGame"))
	virtual void bpf__ResetGame__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CheckWaveComplete"))
	virtual void bpf__CheckWaveComplete__pf(AActor* bpp__DestroyedActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="StartNewWave"))
	virtual void bpf__StartNewWave__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SpawnEnemy"))
	virtual void bpf__SpawnEnemy__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
public:
};
