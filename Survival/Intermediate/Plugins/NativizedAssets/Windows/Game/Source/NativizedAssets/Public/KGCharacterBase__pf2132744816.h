#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/AnimGraphRuntime/Public/PlayMontageCallbackProxy.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
class UWidgetComponent;
class UArrowComponent;
class UCameraComponent;
class USpringArmComponent;
class ABaseSword_C__pf2132744816;
class UPlayMontageCallbackProxy;
class UDamageType;
class AController;
class AActor;
class UUIHealthBar_C__pf2132744816;
class AKGGameMode_C__pf2132744816;
#include "KGCharacterBase__pf2132744816.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/KGCharacterBase.KGCharacterBase_C", OverrideNativeName="KGCharacterBase_C"))
class AKGCharacterBase_C__pf2132744816 : public ACharacter
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnMontagePlayDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OnMontagePlayDelegate__DelegateSignature__SC_0, FName , bpp__NotifyName__pf);
	UDELEGATE(meta=(OverrideNativeName="EndGameDispatcher__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE(FEndGameDispatcher__pf__KGGameMode_C__pf__SinglecastDelegate );
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="HealthBar"))
	UWidgetComponent* bpv__HealthBar__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Arrow1"))
	UArrowComponent* bpv__Arrow1__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Camera"))
	UCameraComponent* bpv__Camera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SpringArm"))
	USpringArmComponent* bpv__SpringArm__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Weapon", Category="Default", MultiLine="true", OverrideNativeName="Weapon"))
	ABaseSword_C__pf2132744816* bpv__Weapon__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Health", Category="Default", MultiLine="true", OverrideNativeName="Health"))
	float bpv__Health__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attack Moves", Category="Default", MultiLine="true", OverrideNativeName="AttackMoves"))
	TArray<FName> bpv__AttackMoves__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Flinching", Category="Default", MultiLine="true", OverrideNativeName="isFlinching"))
	bool bpv__isFlinching__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Hair Colour", Category="Default", MultiLine="true", OverrideNativeName="HairColour"))
	FLinearColor bpv__HairColour__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Attack Range", Category="Default", MultiLine="true", OverrideNativeName="AttackRange"))
	float bpv__AttackRange__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_4"))
	FName b0l__K2Node_CustomEvent_NotifyName_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_3"))
	FName b0l__K2Node_CustomEvent_NotifyName_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_2"))
	FName b0l__K2Node_CustomEvent_NotifyName_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_2"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName_1"))
	FName b0l__K2Node_CustomEvent_NotifyName_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_3"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_NotifyName"))
	FName b0l__K2Node_CustomEvent_NotifyName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_4"))
	F__OnMontagePlayDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_name_Variable"))
	FName b0l__Temp_name_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateProxyObjectForPlayMontage_ReturnValue"))
	UPlayMontageCallbackProxy* b0l__CallFunc_CreateProxyObjectForPlayMontage_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_5"))
	FEndGameDispatcher__pf__KGGameMode_C__pf__SinglecastDelegate b0l__K2Node_CreateDelegate_OutputDelegate_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchName_CmpSuccess"))
	bool b0l__K2Node_SwitchName_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetTransform_ReturnValue"))
	FTransform b0l__CallFunc_GetTransform_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Damage"))
	float b0l__K2Node_Event_Damage__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageType"))
	UDamageType* b0l__K2Node_Event_DamageType__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InstigatedBy"))
	AController* b0l__K2Node_Event_InstigatedBy__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageCauser"))
	AActor* b0l__K2Node_Event_DamageCauser__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_PlayAnimMontage_ReturnValue_1"))
	float b0l__CallFunc_PlayAnimMontage_ReturnValue_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_PlayAnimMontage_ReturnValue_2"))
	float b0l__CallFunc_PlayAnimMontage_ReturnValue_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_PlayAnimMontage_ReturnValue_3"))
	float b0l__CallFunc_PlayAnimMontage_ReturnValue_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsUIHealth_Bar"))
	UUIHealthBar_C__pf2132744816* b0l__K2Node_DynamicCast_AsUIHealth_Bar__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsKGGame_Mode"))
	AKGGameMode_C__pf2132744816* b0l__K2Node_DynamicCast_AsKGGame_Mode__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsKGGame_Mode_1"))
	AKGGameMode_C__pf2132744816* b0l__K2Node_DynamicCast_AsKGGame_Mode_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	AKGCharacterBase_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_KGCharacterBase_0"))
	void bpf__ExecuteUbergraph_KGCharacterBase__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_KGCharacterBase__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_KGCharacterBase__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_KGCharacterBase__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_KGCharacterBase__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_KGCharacterBase__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_KGCharacterBase__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_KGCharacterBase__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_KGCharacterBase__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_KGCharacterBase__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_KGCharacterBase__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_KGCharacterBase__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_KGCharacterBase__pf_12(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="EndGameDance"))
	virtual void bpf__EndGameDance__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UsePrimaryAttack"))
	virtual void bpf__UsePrimaryAttack__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="LaunchMagicProjectile"))
	virtual void bpf__LaunchMagicProjectile__pf();
	UFUNCTION(BlueprintAuthorityOnly, meta=(Category="Game|Damage", Comment="/** Event when this actor takes ANY damage */", DisplayName="AnyDamage", ToolTip="Event when this actor takes ANY damage", CppFromBpEvent, OverrideNativeName="ReceiveAnyDamage"))
	virtual void bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CreateSword"))
	virtual void bpf__CreateSword__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="TryMagic"))
	virtual void bpf__TryMagic__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="TryMelee"))
	virtual void bpf__TryMelee__pf();
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnCompleted_173D52834BBB2BE6D99AC1B2DE22C2E0"))
	virtual void bpf__OnCompleted_173D52834BBB2BE6D99AC1B2DE22C2E0__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnBlendOut_173D52834BBB2BE6D99AC1B2DE22C2E0"))
	virtual void bpf__OnBlendOut_173D52834BBB2BE6D99AC1B2DE22C2E0__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnInterrupted_173D52834BBB2BE6D99AC1B2DE22C2E0"))
	virtual void bpf__OnInterrupted_173D52834BBB2BE6D99AC1B2DE22C2E0__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnNotifyBegin_173D52834BBB2BE6D99AC1B2DE22C2E0"))
	virtual void bpf__OnNotifyBegin_173D52834BBB2BE6D99AC1B2DE22C2E0__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnNotifyEnd_173D52834BBB2BE6D99AC1B2DE22C2E0"))
	virtual void bpf__OnNotifyEnd_173D52834BBB2BE6D99AC1B2DE22C2E0__pf(FName bpp__NotifyName__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", Comment="/**\t * Construction script, the place to spawn components and do other setup.\t * @note Name used in CreateBlueprint function\t */", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	virtual void bpf__UserConstructionScript__pf();
public:
};
