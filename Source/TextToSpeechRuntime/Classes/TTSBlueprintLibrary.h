#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include "TTSAudioContainer.h"

#include "TTSBlueprintLibrary.generated.h"

/**
 * Blueprint library to spawn a TTS Audio Container
 */

UCLASS()
class TEXTTOSPEECHRUNTIME_API UTTSBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Text To Speech")
		static UTTSAudioContainer* SpawnTTS(FString Text);
};