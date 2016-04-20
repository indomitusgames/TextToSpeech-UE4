#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "TTSAudioContainer.h"

#include "TTSBlueprintLibrary.generated.h"

//note about UBlueprintFunctionLibrary
// This class is a base class for any function libraries exposed to blueprints.
// Methods in subclasses are expected to be static

UCLASS()
class TEXTTOSPEECHRUNTIME_API UTTSBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Text To Speech")
		static UTTSAudioContainer* SpawnTTS(FString Text);
};