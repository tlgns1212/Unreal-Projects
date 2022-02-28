#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_Root.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_TransitionResult.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_SequencePlayer.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_StateResult.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_SaveCachedPose.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_UseCachedPose.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_LayeredBoneBlend.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_Slot.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
class AKGCharacterBase_C__pf2132744816;
#include "AB_KnightGirl__pf3014369063.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C", OverrideNativeName="AB_KnightGirl_C"))
class UAB_KnightGirl_C__pf3014369063 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root"))
	FAnimNode_Root bpv__AnimGraphNode_Root__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_3"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_2"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_1"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_2"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_3"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_1"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_2"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_1"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendSpacePlayer"))
	FAnimNode_BlendSpacePlayer bpv__AnimGraphNode_BlendSpacePlayer__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult"))
	FAnimNode_StateResult bpv__AnimGraphNode_StateResult__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateMachine"))
	FAnimNode_StateMachine bpv__AnimGraphNode_StateMachine__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SaveCachedPose"))
	FAnimNode_SaveCachedPose bpv__AnimGraphNode_SaveCachedPose__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose_1"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_LayeredBoneBlend"))
	FAnimNode_LayeredBoneBlend bpv__AnimGraphNode_LayeredBoneBlend__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Slot_1"))
	FAnimNode_Slot bpv__AnimGraphNode_Slot_1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_UseCachedPose"))
	FAnimNode_UseCachedPose bpv__AnimGraphNode_UseCachedPose__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Slot"))
	FAnimNode_Slot bpv__AnimGraphNode_Slot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Local Velocity", Category="Default", MultiLine="true", OverrideNativeName="LocalVelocity"))
	FVector bpv__LocalVelocity__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsKGCharacter_Base"))
	AKGCharacterBase_C__pf2132744816* b0l__K2Node_DynamicCast_AsKGCharacter_Base__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetTransform_ReturnValue"))
	FTransform b0l__CallFunc_GetTransform_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsKGCharacter_Base_1"))
	AKGCharacterBase_C__pf2132744816* b0l__K2Node_DynamicCast_AsKGCharacter_Base_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UAB_KnightGirl_C__pf3014369063(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void __InitAllAnimNodes();
	void __InitAnimNode__AnimGraphNode_Root();
	void __InitAnimNode__AnimGraphNode_TransitionResult_3();
	void __InitAnimNode__AnimGraphNode_TransitionResult_2();
	void __InitAnimNode__AnimGraphNode_TransitionResult_1();
	void __InitAnimNode__AnimGraphNode_TransitionResult();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_2();
	void __InitAnimNode__AnimGraphNode_StateResult_3();
	void __InitAnimNode__AnimGraphNode_SequencePlayer_1();
	void __InitAnimNode__AnimGraphNode_StateResult_2();
	void __InitAnimNode__AnimGraphNode_SequencePlayer();
	void __InitAnimNode__AnimGraphNode_StateResult_1();
	void __InitAnimNode__AnimGraphNode_BlendSpacePlayer();
	void __InitAnimNode__AnimGraphNode_StateResult();
	void __InitAnimNode__AnimGraphNode_StateMachine();
	void __InitAnimNode__AnimGraphNode_SaveCachedPose();
	void __InitAnimNode__AnimGraphNode_UseCachedPose_1();
	void __InitAnimNode__AnimGraphNode_LayeredBoneBlend();
	void __InitAnimNode__AnimGraphNode_Slot_1();
	void __InitAnimNode__AnimGraphNode_UseCachedPose();
	void __InitAnimNode__AnimGraphNode_Slot();
	void bpf__ExecuteUbergraph_AB_KnightGirl__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AB_KnightGirl__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AB_KnightGirl__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AB_KnightGirl__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AB_KnightGirl__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AB_KnightGirl__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AB_KnightGirl__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_AB_KnightGirl__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_FireMagicBall"))
	virtual void bpf__AnimNotify_FireMagicBall__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_DealDamageFromSword"))
	virtual void bpf__AnimNotify_DealDamageFromSword__pf();
	UFUNCTION(meta=(Comment="/** Executed when the Animation is updated */", ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	virtual void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_TransitionResult_7493BD3E4CEA7F95AC67B0BF1C884842"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_TransitionResult_7493BD3E4CEA7F95AC67B0BF1C884842__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_TransitionResult_35446394428455D0C01ED18126136F3C"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_TransitionResult_35446394428455D0C01ED18126136F3C__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_TransitionResult_1D87C0A547012F1331F9C4A49906B0A1"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_TransitionResult_1D87C0A547012F1331F9C4A49906B0A1__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_TransitionResult_4E6B919E4653986C62C909B13749D4D9"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_TransitionResult_4E6B919E4653986C62C909B13749D4D9__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_BlendSpacePlayer_5A9B71CE4051B171DBEFAEAA3AB99CD3"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_BlendSpacePlayer_5A9B71CE4051B171DBEFAEAA3AB99CD3__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", AnimBlueprintFunction="true", Category, OverrideNativeName="AnimGraph"))
	virtual void bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf);
public:
};
