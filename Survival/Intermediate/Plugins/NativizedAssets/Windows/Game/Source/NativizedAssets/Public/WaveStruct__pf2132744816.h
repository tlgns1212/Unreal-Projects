#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class AKGCharacterBase_C__pf2132744816;
class UClass;
#include "WaveStruct__pf2132744816.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/WaveStruct.WaveStruct", OverrideNativeName="WaveStruct"))
struct FWaveStruct__pf2132744816
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="ClassToSpawn", Tooltip, OverrideNativeName="ClassToSpawn_3_0CE0D3BF42F622417FBEC2A37B805F42"))
	TArray<UClass*> bpv__ClassToSpawn_3_0CE0D3BF42F622417FBEC2A37B805F42__pf;
	FWaveStruct__pf2132744816();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FWaveStruct__pf2132744816& __Other) const
	{
		return FWaveStruct__pf2132744816::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
