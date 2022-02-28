#include "NativizedAssets.h"
#include "AB_KnightGirl__pf3014369063.h"
#include "GeneratedCodeHelpers.h"
#include "Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/PhysicsField/PhysicsFieldComponent.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "KGCharacterBase__pf2132744816.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "BaseSword__pf2132744816.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_AssetPlayerBase.h"
#include "Runtime/Engine/Classes/Animation/BlendSpaceBase.h"
#include "Runtime/Engine/Classes/Animation/InputScaleBias.h"
#include "Runtime/Engine/Classes/Animation/AnimData/BoneMaskFilter.h"
#include "Runtime/Engine/Classes/Animation/BlendSpace.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
UAB_KnightGirl_C__pf3014369063::UAB_KnightGirl_C__pf3014369063(const FObjectInitializer& ObjectInitializer) : Super()
{
	
	__InitAllAnimNodes();
	bpv__LocalVelocity__pf = FVector(0.000000, 0.000000, 0.000000);
	bUseMultiThreadedAnimationUpdate = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void UAB_KnightGirl_C__pf3014369063::__InitAllAnimNodes()
{
	__InitAnimNode__AnimGraphNode_Root();
	__InitAnimNode__AnimGraphNode_TransitionResult_3();
	__InitAnimNode__AnimGraphNode_TransitionResult_2();
	__InitAnimNode__AnimGraphNode_TransitionResult_1();
	__InitAnimNode__AnimGraphNode_TransitionResult();
	__InitAnimNode__AnimGraphNode_SequencePlayer_2();
	__InitAnimNode__AnimGraphNode_StateResult_3();
	__InitAnimNode__AnimGraphNode_SequencePlayer_1();
	__InitAnimNode__AnimGraphNode_StateResult_2();
	__InitAnimNode__AnimGraphNode_SequencePlayer();
	__InitAnimNode__AnimGraphNode_StateResult_1();
	__InitAnimNode__AnimGraphNode_BlendSpacePlayer();
	__InitAnimNode__AnimGraphNode_StateResult();
	__InitAnimNode__AnimGraphNode_StateMachine();
	__InitAnimNode__AnimGraphNode_SaveCachedPose();
	__InitAnimNode__AnimGraphNode_UseCachedPose_1();
	__InitAnimNode__AnimGraphNode_LayeredBoneBlend();
	__InitAnimNode__AnimGraphNode_Slot_1();
	__InitAnimNode__AnimGraphNode_UseCachedPose();
	__InitAnimNode__AnimGraphNode_Slot();
}
void UAB_KnightGirl_C__pf3014369063::__InitAnimNode__AnimGraphNode_Root()
{
	bpv__AnimGraphNode_Root__pf.Result.LinkID = 19;
	bpv__AnimGraphNode_Root__pf.Name = FName(TEXT("AnimGraph"));
}
void UAB_KnightGirl_C__pf3014369063::__InitAnimNode__AnimGraphNode_TransitionResult_3()
{
	bpv__AnimGraphNode_TransitionResult_3__pf.SetExposedValueHandler(&CastChecked<UAnimClassData>(CastChecked<UDynamicClass>(UAB_KnightGirl_C__pf3014369063::StaticClass())->AnimClassImplementation)->GetExposedValueHandlers()[4]);
}
void UAB_KnightGirl_C__pf3014369063::__InitAnimNode__AnimGraphNode_TransitionResult_2()
{
	bpv__AnimGraphNode_TransitionResult_2__pf.SetExposedValueHandler(&CastChecked<UAnimClassData>(CastChecked<UDynamicClass>(UAB_KnightGirl_C__pf3014369063::StaticClass())->AnimClassImplementation)->GetExposedValueHandlers()[3]);
}
void UAB_KnightGirl_C__pf3014369063::__InitAnimNode__AnimGraphNode_TransitionResult_1()
{
	bpv__AnimGraphNode_TransitionResult_1__pf.SetExposedValueHandler(&CastChecked<UAnimClassData>(CastChecked<UDynamicClass>(UAB_KnightGirl_C__pf3014369063::StaticClass())->AnimClassImplementation)->GetExposedValueHandlers()[2]);
}
void UAB_KnightGirl_C__pf3014369063::__InitAnimNode__AnimGraphNode_TransitionResult()
{
	bpv__AnimGraphNode_TransitionResult__pf.SetExposedValueHandler(&CastChecked<UAnimClassData>(CastChecked<UDynamicClass>(UAB_KnightGirl_C__pf3014369063::StaticClass())->AnimClassImplementation)->GetExposedValueHandlers()[1]);
}
void UAB_KnightGirl_C__pf3014369063::__InitAnimNode__AnimGraphNode_SequencePlayer_2()
{
	bpv__AnimGraphNode_SequencePlayer_2__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UAB_KnightGirl_C__pf3014369063::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
}
void UAB_KnightGirl_C__pf3014369063::__InitAnimNode__AnimGraphNode_StateResult_3()
{
	bpv__AnimGraphNode_StateResult_3__pf.Result.LinkID = 5;
	bpv__AnimGraphNode_StateResult_3__pf.Name = FName(TEXT("Landing"));
}
void UAB_KnightGirl_C__pf3014369063::__InitAnimNode__AnimGraphNode_SequencePlayer_1()
{
	bpv__AnimGraphNode_SequencePlayer_1__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UAB_KnightGirl_C__pf3014369063::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_SequencePlayer_1__pf.bLoopAnimation = false;
}
void UAB_KnightGirl_C__pf3014369063::__InitAnimNode__AnimGraphNode_StateResult_2()
{
	bpv__AnimGraphNode_StateResult_2__pf.Result.LinkID = 7;
	bpv__AnimGraphNode_StateResult_2__pf.Name = FName(TEXT("JumpMid"));
}
void UAB_KnightGirl_C__pf3014369063::__InitAnimNode__AnimGraphNode_SequencePlayer()
{
	bpv__AnimGraphNode_SequencePlayer__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UAB_KnightGirl_C__pf3014369063::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
}
void UAB_KnightGirl_C__pf3014369063::__InitAnimNode__AnimGraphNode_StateResult_1()
{
	bpv__AnimGraphNode_StateResult_1__pf.Result.LinkID = 9;
	bpv__AnimGraphNode_StateResult_1__pf.Name = FName(TEXT("JumpStart"));
}
void UAB_KnightGirl_C__pf3014369063::__InitAnimNode__AnimGraphNode_BlendSpacePlayer()
{
	bpv__AnimGraphNode_BlendSpacePlayer__pf.BlendSpace = CastChecked<UBlendSpaceBase>(CastChecked<UDynamicClass>(UAB_KnightGirl_C__pf3014369063::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_BlendSpacePlayer__pf.SetExposedValueHandler(&CastChecked<UAnimClassData>(CastChecked<UDynamicClass>(UAB_KnightGirl_C__pf3014369063::StaticClass())->AnimClassImplementation)->GetExposedValueHandlers()[0]);
}
void UAB_KnightGirl_C__pf3014369063::__InitAnimNode__AnimGraphNode_StateResult()
{
	bpv__AnimGraphNode_StateResult__pf.Result.LinkID = 11;
	bpv__AnimGraphNode_StateResult__pf.Name = FName(TEXT("Movement"));
}
void UAB_KnightGirl_C__pf3014369063::__InitAnimNode__AnimGraphNode_StateMachine()
{
}
void UAB_KnightGirl_C__pf3014369063::__InitAnimNode__AnimGraphNode_SaveCachedPose()
{
	bpv__AnimGraphNode_SaveCachedPose__pf.Pose.LinkID = 13;
	bpv__AnimGraphNode_SaveCachedPose__pf.CachePoseName = FName(TEXT("LocomotionCache"));
}
void UAB_KnightGirl_C__pf3014369063::__InitAnimNode__AnimGraphNode_UseCachedPose_1()
{
	bpv__AnimGraphNode_UseCachedPose_1__pf.LinkToCachingNode.LinkID = 14;
	bpv__AnimGraphNode_UseCachedPose_1__pf.CachePoseName = FName(TEXT("LocomotionCache"));
}
void UAB_KnightGirl_C__pf3014369063::__InitAnimNode__AnimGraphNode_LayeredBoneBlend()
{
	bpv__AnimGraphNode_LayeredBoneBlend__pf.BasePose.LinkID = 15;
	bpv__AnimGraphNode_LayeredBoneBlend__pf.BlendPoses = TArray<FPoseLink> ();
	bpv__AnimGraphNode_LayeredBoneBlend__pf.BlendPoses.AddUninitialized(1);
	FPoseLink::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_LayeredBoneBlend__pf.BlendPoses.GetData(), 1);
	auto& __Local__0 = bpv__AnimGraphNode_LayeredBoneBlend__pf.BlendPoses[0];
	__Local__0.LinkID = 17;
	bpv__AnimGraphNode_LayeredBoneBlend__pf.LayerSetup = TArray<FInputBlendPose> ();
	bpv__AnimGraphNode_LayeredBoneBlend__pf.LayerSetup.AddUninitialized(1);
	FInputBlendPose::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_LayeredBoneBlend__pf.LayerSetup.GetData(), 1);
	auto& __Local__1 = bpv__AnimGraphNode_LayeredBoneBlend__pf.LayerSetup[0];
	__Local__1.BranchFilters = TArray<FBranchFilter> ();
	__Local__1.BranchFilters.AddUninitialized(2);
	FBranchFilter::StaticStruct()->InitializeStruct(__Local__1.BranchFilters.GetData(), 2);
	auto& __Local__2 = __Local__1.BranchFilters[0];
	__Local__2.BoneName = FName(TEXT("spine_01"));
	__Local__2.BlendDepth = 3;
	auto& __Local__3 = __Local__1.BranchFilters[1];
	__Local__3.BoneName = FName(TEXT("upperarm_l"));
	__Local__3.BlendDepth = -5;
	bpv__AnimGraphNode_LayeredBoneBlend__pf.BlendWeights = TArray<float> ();
	bpv__AnimGraphNode_LayeredBoneBlend__pf.BlendWeights.Reserve(1);
	bpv__AnimGraphNode_LayeredBoneBlend__pf.BlendWeights.Add(1.000000f);
	bpv__AnimGraphNode_LayeredBoneBlend__pf.bMeshSpaceRotationBlend = true;
	auto& __Local__4 = (*(AccessPrivateProperty<TArray<FPerBoneBlendWeight> >(&(bpv__AnimGraphNode_LayeredBoneBlend__pf), FAnimNode_LayeredBoneBlend::__PPO__PerBoneBlendWeights() )));
	__Local__4 = TArray<FPerBoneBlendWeight> ();
	__Local__4.AddUninitialized(58);
	FPerBoneBlendWeight::StaticStruct()->InitializeStruct(__Local__4.GetData(), 58);
	auto& __Local__5 = __Local__4[0];
	auto& __Local__6 = __Local__4[1];
	auto& __Local__7 = __Local__4[2];
	__Local__7.BlendWeight = 0.333333f;
	auto& __Local__8 = __Local__4[3];
	__Local__8.BlendWeight = 0.666667f;
	auto& __Local__9 = __Local__4[4];
	__Local__9.BlendWeight = 1.000000f;
	auto& __Local__10 = __Local__4[5];
	__Local__10.BlendWeight = 1.000000f;
	auto& __Local__11 = __Local__4[6];
	__Local__11.BlendWeight = 0.800000f;
	auto& __Local__12 = __Local__4[7];
	__Local__12.BlendWeight = 0.600000f;
	auto& __Local__13 = __Local__4[8];
	__Local__13.BlendWeight = 0.400000f;
	auto& __Local__14 = __Local__4[9];
	__Local__14.BlendWeight = 0.200000f;
	auto& __Local__15 = __Local__4[10];
	auto& __Local__16 = __Local__4[11];
	auto& __Local__17 = __Local__4[12];
	__Local__17.BlendWeight = 0.200000f;
	auto& __Local__18 = __Local__4[13];
	auto& __Local__19 = __Local__4[14];
	auto& __Local__20 = __Local__4[15];
	__Local__20.BlendWeight = 0.200000f;
	auto& __Local__21 = __Local__4[16];
	auto& __Local__22 = __Local__4[17];
	auto& __Local__23 = __Local__4[18];
	__Local__23.BlendWeight = 0.200000f;
	auto& __Local__24 = __Local__4[19];
	auto& __Local__25 = __Local__4[20];
	auto& __Local__26 = __Local__4[21];
	__Local__26.BlendWeight = 0.200000f;
	auto& __Local__27 = __Local__4[22];
	auto& __Local__28 = __Local__4[23];
	auto& __Local__29 = __Local__4[24];
	__Local__29.BlendWeight = 0.400000f;
	auto& __Local__30 = __Local__4[25];
	__Local__30.BlendWeight = 0.600000f;
	auto& __Local__31 = __Local__4[26];
	__Local__31.BlendWeight = 1.000000f;
	auto& __Local__32 = __Local__4[27];
	__Local__32.BlendWeight = 1.000000f;
	auto& __Local__33 = __Local__4[28];
	__Local__33.BlendWeight = 1.000000f;
	auto& __Local__34 = __Local__4[29];
	__Local__34.BlendWeight = 1.000000f;
	auto& __Local__35 = __Local__4[30];
	__Local__35.BlendWeight = 1.000000f;
	auto& __Local__36 = __Local__4[31];
	__Local__36.BlendWeight = 1.000000f;
	auto& __Local__37 = __Local__4[32];
	__Local__37.BlendWeight = 1.000000f;
	auto& __Local__38 = __Local__4[33];
	__Local__38.BlendWeight = 1.000000f;
	auto& __Local__39 = __Local__4[34];
	__Local__39.BlendWeight = 1.000000f;
	auto& __Local__40 = __Local__4[35];
	__Local__40.BlendWeight = 1.000000f;
	auto& __Local__41 = __Local__4[36];
	__Local__41.BlendWeight = 1.000000f;
	auto& __Local__42 = __Local__4[37];
	__Local__42.BlendWeight = 1.000000f;
	auto& __Local__43 = __Local__4[38];
	__Local__43.BlendWeight = 1.000000f;
	auto& __Local__44 = __Local__4[39];
	__Local__44.BlendWeight = 1.000000f;
	auto& __Local__45 = __Local__4[40];
	__Local__45.BlendWeight = 1.000000f;
	auto& __Local__46 = __Local__4[41];
	__Local__46.BlendWeight = 1.000000f;
	auto& __Local__47 = __Local__4[42];
	__Local__47.BlendWeight = 1.000000f;
	auto& __Local__48 = __Local__4[43];
	__Local__48.BlendWeight = 1.000000f;
	auto& __Local__49 = __Local__4[44];
	__Local__49.BlendWeight = 1.000000f;
	auto& __Local__50 = __Local__4[45];
	__Local__50.BlendWeight = 1.000000f;
	auto& __Local__51 = __Local__4[46];
	__Local__51.BlendWeight = 1.000000f;
	auto& __Local__52 = __Local__4[47];
	__Local__52.BlendWeight = 1.000000f;
	auto& __Local__53 = __Local__4[48];
	__Local__53.BlendWeight = 1.000000f;
	auto& __Local__54 = __Local__4[49];
	__Local__54.BlendWeight = 1.000000f;
	auto& __Local__55 = __Local__4[50];
	auto& __Local__56 = __Local__4[51];
	auto& __Local__57 = __Local__4[52];
	auto& __Local__58 = __Local__4[53];
	auto& __Local__59 = __Local__4[54];
	auto& __Local__60 = __Local__4[55];
	auto& __Local__61 = __Local__4[56];
	auto& __Local__62 = __Local__4[57];
	auto& __Local__63 = (*(AccessPrivateProperty<FGuid >(&(bpv__AnimGraphNode_LayeredBoneBlend__pf), FAnimNode_LayeredBoneBlend::__PPO__SkeletonGuid() )));
	__Local__63 = FGuid(0x8F0A380F, 0x4CDD62D2, 0xDFB2DB93, 0x0A2147A3);
}
void UAB_KnightGirl_C__pf3014369063::__InitAnimNode__AnimGraphNode_Slot_1()
{
	bpv__AnimGraphNode_Slot_1__pf.Source.LinkID = 18;
	bpv__AnimGraphNode_Slot_1__pf.SlotName = FName(TEXT("UpperBody"));
}
void UAB_KnightGirl_C__pf3014369063::__InitAnimNode__AnimGraphNode_UseCachedPose()
{
	bpv__AnimGraphNode_UseCachedPose__pf.LinkToCachingNode.LinkID = 14;
	bpv__AnimGraphNode_UseCachedPose__pf.CachePoseName = FName(TEXT("LocomotionCache"));
}
void UAB_KnightGirl_C__pf3014369063::__InitAnimNode__AnimGraphNode_Slot()
{
	bpv__AnimGraphNode_Slot__pf.Source.LinkID = 16;
	bpv__AnimGraphNode_Slot__pf.SlotName = FName(TEXT("FullBody"));
}
void UAB_KnightGirl_C__pf3014369063::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void UAB_KnightGirl_C__pf3014369063::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(AKGCharacterBase_C__pf2132744816::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(ABaseSword_C__pf2132744816::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	UAnimClassData* __Local__64 = NewObject<UAnimClassData>(InDynamicClass, TEXT("AnimClassData"));
	__Local__64->BakedStateMachines = TArray<FBakedAnimationStateMachine> ();
	__Local__64->BakedStateMachines.AddUninitialized(1);
	FBakedAnimationStateMachine::StaticStruct()->InitializeStruct(__Local__64->BakedStateMachines.GetData(), 1);
	auto& __Local__65 = __Local__64->BakedStateMachines[0];
	__Local__65.MachineName = FName(TEXT("Locomotion"));
	__Local__65.InitialState = 0;
	__Local__65.States = TArray<FBakedAnimationState> ();
	__Local__65.States.AddUninitialized(4);
	FBakedAnimationState::StaticStruct()->InitializeStruct(__Local__65.States.GetData(), 4);
	auto& __Local__66 = __Local__65.States[0];
	__Local__66.StateName = FName(TEXT("Movement"));
	__Local__66.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__66.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__66.Transitions.GetData(), 1);
	auto& __Local__67 = __Local__66.Transitions[0];
	__Local__67.CanTakeDelegateIndex = 15;
	__Local__67.TransitionIndex = 0;
	__Local__66.StateRootNodeIndex = 7;
	__Local__66.PlayerNodeIndices = TArray<int32> ();
	__Local__66.PlayerNodeIndices.Reserve(1);
	__Local__66.PlayerNodeIndices.Add(8);
	auto& __Local__68 = __Local__65.States[1];
	__Local__68.StateName = FName(TEXT("JumpStart"));
	__Local__68.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__68.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__68.Transitions.GetData(), 1);
	auto& __Local__69 = __Local__68.Transitions[0];
	__Local__69.CanTakeDelegateIndex = 16;
	__Local__69.TransitionIndex = 1;
	__Local__68.StateRootNodeIndex = 9;
	__Local__68.PlayerNodeIndices = TArray<int32> ();
	__Local__68.PlayerNodeIndices.Reserve(1);
	__Local__68.PlayerNodeIndices.Add(10);
	auto& __Local__70 = __Local__65.States[2];
	__Local__70.StateName = FName(TEXT("JumpMid"));
	__Local__70.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__70.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__70.Transitions.GetData(), 1);
	auto& __Local__71 = __Local__70.Transitions[0];
	__Local__71.CanTakeDelegateIndex = 17;
	__Local__71.TransitionIndex = 2;
	__Local__70.StateRootNodeIndex = 11;
	__Local__70.PlayerNodeIndices = TArray<int32> ();
	__Local__70.PlayerNodeIndices.Reserve(1);
	__Local__70.PlayerNodeIndices.Add(12);
	auto& __Local__72 = __Local__65.States[3];
	__Local__72.StateName = FName(TEXT("Landing"));
	__Local__72.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__72.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__72.Transitions.GetData(), 1);
	auto& __Local__73 = __Local__72.Transitions[0];
	__Local__73.CanTakeDelegateIndex = 18;
	__Local__73.TransitionIndex = 3;
	__Local__72.StateRootNodeIndex = 13;
	__Local__72.PlayerNodeIndices = TArray<int32> ();
	__Local__72.PlayerNodeIndices.Reserve(1);
	__Local__72.PlayerNodeIndices.Add(14);
	__Local__65.Transitions = TArray<FAnimationTransitionBetweenStates> ();
	__Local__65.Transitions.AddUninitialized(4);
	FAnimationTransitionBetweenStates::StaticStruct()->InitializeStruct(__Local__65.Transitions.GetData(), 4);
	auto& __Local__74 = __Local__65.Transitions[0];
	__Local__74.PreviousState = 0;
	__Local__74.NextState = 1;
	__Local__74.CrossfadeDuration = 0.200000f;
	__Local__74.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__75 = __Local__65.Transitions[1];
	__Local__75.PreviousState = 1;
	__Local__75.NextState = 2;
	__Local__75.CrossfadeDuration = 0.200000f;
	__Local__75.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__76 = __Local__65.Transitions[2];
	__Local__76.PreviousState = 2;
	__Local__76.NextState = 3;
	__Local__76.CrossfadeDuration = 0.200000f;
	__Local__76.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__77 = __Local__65.Transitions[3];
	__Local__77.PreviousState = 3;
	__Local__77.NextState = 0;
	__Local__77.CrossfadeDuration = 0.200000f;
	__Local__77.BlendMode = EAlphaBlendOption::HermiteCubic;
	__Local__64->TargetSkeleton = CastChecked<USkeleton>(CastChecked<UDynamicClass>(UAB_KnightGirl_C__pf3014369063::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__64->OrderedSavedPoseIndicesMap = {};
	__Local__64->OrderedSavedPoseIndicesMap.Reserve(1);
	static TWeakFieldPtr<FProperty> __Local__80{};
	const FProperty* __Local__79 = __Local__80.Get();
	if (nullptr == __Local__79)
	{
		__Local__79 = (UAnimClassData::StaticClass())->FindPropertyByName(FName(TEXT("OrderedSavedPoseIndicesMap")));
		check(__Local__79);
		__Local__80 = __Local__79;
	}
	FScriptMapHelper __Local__78(CastFieldChecked<FMapProperty>(__Local__79), &__Local__64->OrderedSavedPoseIndicesMap);
	TMap<FName,FCachedPoseIndices>::ElementType& __Local__81 = *(TMap<FName,FCachedPoseIndices>::ElementType*)__Local__78.GetPairPtr(__Local__78.AddDefaultValue_Invalid_NeedsRehash());
	__Local__81.Key = FName(TEXT("AnimGraph"));
	__Local__81.Value.OrderedSavedPoseNodeIndices = TArray<int32> ();
	__Local__81.Value.OrderedSavedPoseNodeIndices.Reserve(1);
	__Local__81.Value.OrderedSavedPoseNodeIndices.Add(5);
	__Local__78.Rehash();
	__Local__64->AnimBlueprintFunctions = TArray<FAnimBlueprintFunction> ();
	__Local__64->AnimBlueprintFunctions.AddUninitialized(1);
	FAnimBlueprintFunction::StaticStruct()->InitializeStruct(__Local__64->AnimBlueprintFunctions.GetData(), 1);
	auto& __Local__82 = __Local__64->AnimBlueprintFunctions[0];
	__Local__82.Name = FName(TEXT("AnimGraph"));
	__Local__82.OutputPoseNodeIndex = 0;
	__Local__82.bImplemented = true;
	__Local__64->AnimBlueprintFunctionData = TArray<FAnimBlueprintFunctionData> ();
	__Local__64->AnimBlueprintFunctionData.AddUninitialized(1);
	FAnimBlueprintFunctionData::StaticStruct()->InitializeStruct(__Local__64->AnimBlueprintFunctionData.GetData(), 1);
	auto& __Local__83 = __Local__64->AnimBlueprintFunctionData[0];
	__Local__83.OutputPoseNodeProperty = TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_Root");
	__Local__64->AnimNodeProperties = TArray<TFieldPath<FStructProperty> > ();
	__Local__64->AnimNodeProperties.Reserve(20);
	__Local__64->AnimNodeProperties.Add(TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_Root"));
	__Local__64->AnimNodeProperties.Add(TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_TransitionResult_3"));
	__Local__64->AnimNodeProperties.Add(TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_TransitionResult_2"));
	__Local__64->AnimNodeProperties.Add(TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_TransitionResult_1"));
	__Local__64->AnimNodeProperties.Add(TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_TransitionResult"));
	__Local__64->AnimNodeProperties.Add(TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_SequencePlayer_2"));
	__Local__64->AnimNodeProperties.Add(TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_StateResult_3"));
	__Local__64->AnimNodeProperties.Add(TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_SequencePlayer_1"));
	__Local__64->AnimNodeProperties.Add(TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_StateResult_2"));
	__Local__64->AnimNodeProperties.Add(TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_SequencePlayer"));
	__Local__64->AnimNodeProperties.Add(TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_StateResult_1"));
	__Local__64->AnimNodeProperties.Add(TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_BlendSpacePlayer"));
	__Local__64->AnimNodeProperties.Add(TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_StateResult"));
	__Local__64->AnimNodeProperties.Add(TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_StateMachine"));
	__Local__64->AnimNodeProperties.Add(TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_SaveCachedPose"));
	__Local__64->AnimNodeProperties.Add(TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_UseCachedPose_1"));
	__Local__64->AnimNodeProperties.Add(TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_LayeredBoneBlend"));
	__Local__64->AnimNodeProperties.Add(TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_Slot_1"));
	__Local__64->AnimNodeProperties.Add(TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_UseCachedPose"));
	__Local__64->AnimNodeProperties.Add(TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_Slot"));
	__Local__64->StateMachineNodeProperties = TArray<TFieldPath<FStructProperty> > ();
	__Local__64->StateMachineNodeProperties.Reserve(1);
	__Local__64->StateMachineNodeProperties.Add(TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_StateMachine"));
	__Local__64->EvaluateGraphExposedInputs = TArray<FExposedValueHandler> ();
	__Local__64->EvaluateGraphExposedInputs.AddUninitialized(5);
	FExposedValueHandler::StaticStruct()->InitializeStruct(__Local__64->EvaluateGraphExposedInputs.GetData(), 5);
	auto& __Local__84 = __Local__64->EvaluateGraphExposedInputs[0];
	__Local__84.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_BlendSpacePlayer_5A9B71CE4051B171DBEFAEAA3AB99CD3"));
	__Local__84.Function = FindFieldChecked<UFunction>(InDynamicClass, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_BlendSpacePlayer_5A9B71CE4051B171DBEFAEAA3AB99CD3"));
	__Local__84.ValueHandlerNodeProperty = TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_BlendSpacePlayer");
	auto& __Local__85 = __Local__64->EvaluateGraphExposedInputs[1];
	__Local__85.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_TransitionResult_4E6B919E4653986C62C909B13749D4D9"));
	__Local__85.Function = FindFieldChecked<UFunction>(InDynamicClass, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_TransitionResult_4E6B919E4653986C62C909B13749D4D9"));
	__Local__85.ValueHandlerNodeProperty = TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_TransitionResult");
	auto& __Local__86 = __Local__64->EvaluateGraphExposedInputs[2];
	__Local__86.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_TransitionResult_1D87C0A547012F1331F9C4A49906B0A1"));
	__Local__86.Function = FindFieldChecked<UFunction>(InDynamicClass, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_TransitionResult_1D87C0A547012F1331F9C4A49906B0A1"));
	__Local__86.ValueHandlerNodeProperty = TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_TransitionResult_1");
	auto& __Local__87 = __Local__64->EvaluateGraphExposedInputs[3];
	__Local__87.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_TransitionResult_35446394428455D0C01ED18126136F3C"));
	__Local__87.Function = FindFieldChecked<UFunction>(InDynamicClass, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_TransitionResult_35446394428455D0C01ED18126136F3C"));
	__Local__87.ValueHandlerNodeProperty = TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_TransitionResult_2");
	auto& __Local__88 = __Local__64->EvaluateGraphExposedInputs[4];
	__Local__88.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_TransitionResult_7493BD3E4CEA7F95AC67B0BF1C884842"));
	__Local__88.Function = FindFieldChecked<UFunction>(InDynamicClass, TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_TransitionResult_7493BD3E4CEA7F95AC67B0BF1C884842"));
	__Local__88.ValueHandlerNodeProperty = TEXT("/Game/Assets/Knight/AB_KnightGirl.AB_KnightGirl_C:AnimGraphNode_TransitionResult_3");
	InDynamicClass->AnimClassImplementation = __Local__64;
	__Local__64->DynamicClassInitialization(InDynamicClass);
}
PRAGMA_ENABLE_OPTIMIZATION
void UAB_KnightGirl_C__pf3014369063::bpf__ExecuteUbergraph_AB_KnightGirl__pf_0(int32 bpp__EntryPoint__pf)
{
	APawn* bpfv__CallFunc_TryGetPawnOwner_ReturnValue_4__pf{};
	UPawnMovementComponent* bpfv__CallFunc_GetMovementComponent_ReturnValue_1__pf{};
	bool bpfv__CallFunc_IsFalling_ReturnValue_1__pf{};
	bool bpfv__CallFunc_Not_PreBool_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 10);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_TryGetPawnOwner_ReturnValue_4__pf = TryGetPawnOwner();
	if(::IsValid(bpfv__CallFunc_TryGetPawnOwner_ReturnValue_4__pf))
	{
		bpfv__CallFunc_GetMovementComponent_ReturnValue_1__pf = bpfv__CallFunc_TryGetPawnOwner_ReturnValue_4__pf->GetMovementComponent();
	}
	if(::IsValid(bpfv__CallFunc_GetMovementComponent_ReturnValue_1__pf))
	{
		bpfv__CallFunc_IsFalling_ReturnValue_1__pf = bpfv__CallFunc_GetMovementComponent_ReturnValue_1__pf->IsFalling();
	}
	bpfv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpfv__CallFunc_IsFalling_ReturnValue_1__pf);
	bpv__AnimGraphNode_TransitionResult_2__pf.bCanEnterTransition = bpfv__CallFunc_Not_PreBool_ReturnValue__pf;
	return; // KCST_GotoReturn
}
void UAB_KnightGirl_C__pf3014369063::bpf__ExecuteUbergraph_AB_KnightGirl__pf_1(int32 bpp__EntryPoint__pf)
{
	APawn* bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 20);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf = TryGetPawnOwner();
	b0l__K2Node_DynamicCast_AsKGCharacter_Base__pf = Cast<AKGCharacterBase_C__pf2132744816>(bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsKGCharacter_Base__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsKGCharacter_Base__pf))
	{
		b0l__K2Node_DynamicCast_AsKGCharacter_Base__pf->bpf__LaunchMagicProjectile__pf();
	}
	return; // KCST_GotoReturn
}
void UAB_KnightGirl_C__pf3014369063::bpf__ExecuteUbergraph_AB_KnightGirl__pf_2(int32 bpp__EntryPoint__pf)
{
	APawn* bpfv__CallFunc_TryGetPawnOwner_ReturnValue_3__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 16);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_TryGetPawnOwner_ReturnValue_3__pf = TryGetPawnOwner();
	b0l__K2Node_DynamicCast_AsKGCharacter_Base_1__pf = Cast<AKGCharacterBase_C__pf2132744816>(bpfv__CallFunc_TryGetPawnOwner_ReturnValue_3__pf);
	b0l__K2Node_DynamicCast_bSuccess_1__pf = (b0l__K2Node_DynamicCast_AsKGCharacter_Base_1__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess_1__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	ABaseSword_C__pf2132744816*  __Local__89 = ((ABaseSword_C__pf2132744816*)nullptr);
	bpfv__CallFunc_IsValid_ReturnValue_1__pf = UKismetSystemLibrary::IsValid(((::IsValid(b0l__K2Node_DynamicCast_AsKGCharacter_Base_1__pf)) ? (b0l__K2Node_DynamicCast_AsKGCharacter_Base_1__pf->bpv__Weapon__pf) : (__Local__89)));
	if (!bpfv__CallFunc_IsValid_ReturnValue_1__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	if(::IsValid(b0l__K2Node_DynamicCast_AsKGCharacter_Base_1__pf) && ::IsValid(b0l__K2Node_DynamicCast_AsKGCharacter_Base_1__pf->bpv__Weapon__pf))
	{
		b0l__K2Node_DynamicCast_AsKGCharacter_Base_1__pf->bpv__Weapon__pf->bpf__TryDealDamage__pf();
	}
	return; // KCST_GotoReturn
}
void UAB_KnightGirl_C__pf3014369063::bpf__ExecuteUbergraph_AB_KnightGirl__pf_3(int32 bpp__EntryPoint__pf)
{
	APawn* bpfv__CallFunc_TryGetPawnOwner_ReturnValue_2__pf{};
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetVelocity_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpfv__CallFunc_InverseTransformDirection_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 13);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_TryGetPawnOwner_ReturnValue_2__pf = TryGetPawnOwner();
	bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_TryGetPawnOwner_ReturnValue_2__pf);
	if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
	{
		return; //KCST_GotoReturnIfNot
	}
	bpfv__CallFunc_TryGetPawnOwner_ReturnValue_2__pf = TryGetPawnOwner();
	if(::IsValid(bpfv__CallFunc_TryGetPawnOwner_ReturnValue_2__pf))
	{
		b0l__CallFunc_GetTransform_ReturnValue__pf = bpfv__CallFunc_TryGetPawnOwner_ReturnValue_2__pf->AActor::GetTransform();
	}
	if(::IsValid(bpfv__CallFunc_TryGetPawnOwner_ReturnValue_2__pf))
	{
		bpfv__CallFunc_GetVelocity_ReturnValue__pf = bpfv__CallFunc_TryGetPawnOwner_ReturnValue_2__pf->GetVelocity();
	}
	bpfv__CallFunc_InverseTransformDirection_ReturnValue__pf = UKismetMathLibrary::InverseTransformDirection(b0l__CallFunc_GetTransform_ReturnValue__pf, bpfv__CallFunc_GetVelocity_ReturnValue__pf);
	bpv__LocalVelocity__pf = bpfv__CallFunc_InverseTransformDirection_ReturnValue__pf;
	return; // KCST_GotoReturn
}
void UAB_KnightGirl_C__pf3014369063::bpf__ExecuteUbergraph_AB_KnightGirl__pf_4(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_1__pf{};
	check(bpp__EntryPoint__pf == 12);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEnd(14);
	bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_1__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_3__pf.bCanEnterTransition = bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue_1__pf;
	return; // KCST_GotoReturn
}
void UAB_KnightGirl_C__pf3014369063::bpf__ExecuteUbergraph_AB_KnightGirl__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 6);
	// optimized KCST_UnconditionalGoto
	UKismetMathLibrary::BreakVector(bpv__LocalVelocity__pf, /*out*/ b0l__CallFunc_BreakVector_X__pf, /*out*/ b0l__CallFunc_BreakVector_Y__pf, /*out*/ b0l__CallFunc_BreakVector_Z__pf);
	bpv__AnimGraphNode_BlendSpacePlayer__pf.X = b0l__CallFunc_BreakVector_Y__pf;
	bpv__AnimGraphNode_BlendSpacePlayer__pf.Y = b0l__CallFunc_BreakVector_X__pf;
	return; // KCST_GotoReturn
}
void UAB_KnightGirl_C__pf3014369063::bpf__ExecuteUbergraph_AB_KnightGirl__pf_6(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue__pf{};
	bool bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 9);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue__pf = UAnimInstance::GetRelevantAnimTimeRemaining(6, 1);
	bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpfv__CallFunc_GetRelevantAnimTimeRemaining_ReturnValue__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_1__pf.bCanEnterTransition = bpfv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf;
	return; // KCST_GotoReturn
}
void UAB_KnightGirl_C__pf3014369063::bpf__ExecuteUbergraph_AB_KnightGirl__pf_7(int32 bpp__EntryPoint__pf)
{
	APawn* bpfv__CallFunc_TryGetPawnOwner_ReturnValue_1__pf{};
	UPawnMovementComponent* bpfv__CallFunc_GetMovementComponent_ReturnValue__pf{};
	bool bpfv__CallFunc_IsFalling_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 8);
	// optimized KCST_UnconditionalGoto
	bpfv__CallFunc_TryGetPawnOwner_ReturnValue_1__pf = TryGetPawnOwner();
	if(::IsValid(bpfv__CallFunc_TryGetPawnOwner_ReturnValue_1__pf))
	{
		bpfv__CallFunc_GetMovementComponent_ReturnValue__pf = bpfv__CallFunc_TryGetPawnOwner_ReturnValue_1__pf->GetMovementComponent();
	}
	if(::IsValid(bpfv__CallFunc_GetMovementComponent_ReturnValue__pf))
	{
		bpfv__CallFunc_IsFalling_ReturnValue__pf = bpfv__CallFunc_GetMovementComponent_ReturnValue__pf->IsFalling();
	}
	bpv__AnimGraphNode_TransitionResult__pf.bCanEnterTransition = bpfv__CallFunc_IsFalling_ReturnValue__pf;
	return; // KCST_GotoReturn
}
void UAB_KnightGirl_C__pf3014369063::bpf__AnimNotify_FireMagicBall__pf()
{
	bpf__ExecuteUbergraph_AB_KnightGirl__pf_1(20);
}
void UAB_KnightGirl_C__pf3014369063::bpf__AnimNotify_DealDamageFromSword__pf()
{
	bpf__ExecuteUbergraph_AB_KnightGirl__pf_2(16);
}
void UAB_KnightGirl_C__pf3014369063::bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf)
{
	b0l__K2Node_Event_DeltaTimeX__pf = bpp__DeltaTimeX__pf;
	bpf__ExecuteUbergraph_AB_KnightGirl__pf_3(13);
}
void UAB_KnightGirl_C__pf3014369063::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_TransitionResult_7493BD3E4CEA7F95AC67B0BF1C884842__pf()
{
	bpf__ExecuteUbergraph_AB_KnightGirl__pf_4(12);
}
void UAB_KnightGirl_C__pf3014369063::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_TransitionResult_35446394428455D0C01ED18126136F3C__pf()
{
	bpf__ExecuteUbergraph_AB_KnightGirl__pf_0(10);
}
void UAB_KnightGirl_C__pf3014369063::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_TransitionResult_1D87C0A547012F1331F9C4A49906B0A1__pf()
{
	bpf__ExecuteUbergraph_AB_KnightGirl__pf_6(9);
}
void UAB_KnightGirl_C__pf3014369063::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_TransitionResult_4E6B919E4653986C62C909B13749D4D9__pf()
{
	bpf__ExecuteUbergraph_AB_KnightGirl__pf_7(8);
}
void UAB_KnightGirl_C__pf3014369063::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_AB_KnightGirl_AnimGraphNode_BlendSpacePlayer_5A9B71CE4051B171DBEFAEAA3AB99CD3__pf()
{
	bpf__ExecuteUbergraph_AB_KnightGirl__pf_5(6);
}
void UAB_KnightGirl_C__pf3014369063::bpf__AnimGraph__pf(/*out*/ FPoseLink& bpp__AnimGraph__pf)
{
	auto __Local__90 = FPoseLink{};
	bpp__AnimGraph__pf = __Local__90;
}
PRAGMA_DISABLE_OPTIMIZATION
void UAB_KnightGirl_C__pf3014369063::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{63, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Assets/Knight/Player_Land.Player_Land 
		{64, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Assets/Knight/Player_Falling.Player_Falling 
		{65, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Assets/Knight/Player_Jump_Forward.Player_Jump_Forward 
		{66, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Assets/Knight/MovementBlendSpace.MovementBlendSpace 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/Assets/Knight/Skeleton_KnightGirl.Skeleton_KnightGirl 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void UAB_KnightGirl_C__pf3014369063::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PawnMovementComponent 
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{52, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{13, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{53, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PoseLink 
		{34, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{55, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_Root 
		{56, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{57, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_StateResult 
		{58, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{59, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SaveCachedPose 
		{60, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_UseCachedPose 
		{61, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend 
		{62, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_Slot 
		{28, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SkeletalMeshComponent 
		{10, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SceneComponent 
		{67, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.StaticMeshComponent 
		{68, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  StaticMesh /Game/Assets/Weapons/S_Sword_Basic.S_Sword_Basic 
		{38, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/Engine.EObjectTypeQuery 
		{31, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetArrayLibrary 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ActorComponent 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpringArmComponent 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CameraComponent 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ArrowComponent 
		{3, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetComponent 
		{4, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent.Widget3DPassThrough_Translucent 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided.Widget3DPassThrough_Translucent_OneSided 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque.Widget3DPassThrough_Opaque 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided.Widget3DPassThrough_Opaque_OneSided 
		{8, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked.Widget3DPassThrough_Masked 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  MaterialInstanceConstant /Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided.Widget3DPassThrough_Masked_OneSided 
		{11, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/AnimGraphRuntime.OnMontagePlayDelegate__DelegateSignature 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy 
		{15, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.DamageType 
		{16, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{17, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{18, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{20, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CharacterMovementComponent 
		{21, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Assets/Knight/Victory_Montage.Victory_Montage 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Assets/Knight/PlayerDeath.PlayerDeath 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Assets/Knight/KnightAttackMontage.KnightAttackMontage 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Assets/Knight/MagicShootMontage.MagicShootMontage 
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimMontage /Game/Assets/Knight/PlayerFlinch.PlayerFlinch 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntimeNv.ClothingSimulationFactoryNv 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/Assets/Knight/SK_KnightGirl.SK_KnightGirl 
		{37, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavArea_Obstacle 
		{39, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/AIModule.EPathFollowingResult 
		{40, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/Engine.TimerDynamicDelegate__DelegateSignature 
		{41, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.TimerHandle 
		{42, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  DelegateFunction /Script/AIModule.OAISimpleDelegate__DelegateSignature 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIAsyncTaskBlueprintProxy 
		{44, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIBlueprintHelperLibrary 
		{45, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{46, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/NavigationSystem.NavigationSystemV1 
		{49, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SphereComponent 
		{47, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ParticleSystemComponent 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Assets/Effects/P_Health.P_Health 
		{70, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ProjectileMovementComponent 
		{71, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Assets/Effects/P_Flight.P_Flight 
		{72, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ParticleSystem /Game/Assets/Effects/P_Impulse.P_Impulse 
		{73, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ProgressBar 
		{75, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SparseDelegateFunction /Script/Engine.ActorDestroyedSignature__DelegateSignature 
		{76, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerStart 
		{77, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{78, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameSession 
		{79, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameStateBase 
		{80, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerState 
		{81, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.HUD 
		{82, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SpectatorPawn 
		{83, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.ServerStatReplicator 
		{84, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.CheatManager 
		{85, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{86, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
		{74, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/UMG.ESlateVisibility 
		{87, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UMGSequencePlayer 
		{88, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.HitResult 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/PhysicsCore.PhysicalMaterial 
		{90, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PrimitiveComponent 
		{91, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/InputCore.Key 
		{92, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetAnimation 
		{93, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{94, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerCameraManager 
		{95, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/KGCharacterBase.KGCharacterBase_C 
		{108, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/BaseSword.BaseSword_C 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__UAB_KnightGirl_C__pf3014369063
{
	FRegisterHelper__UAB_KnightGirl_C__pf3014369063()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Assets/Knight/AB_KnightGirl"), &UAB_KnightGirl_C__pf3014369063::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UAB_KnightGirl_C__pf3014369063 Instance;
};
FRegisterHelper__UAB_KnightGirl_C__pf3014369063 FRegisterHelper__UAB_KnightGirl_C__pf3014369063::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
