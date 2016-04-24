#pragma once

/* AudioComponent includes */
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "Components/AudioComponent.h"

#include "TTSSoundWave.h"

#include "TTSAudioContainer.generated.h"

UCLASS(Blueprintable)
class TEXTTOSPEECHRUNTIME_API UTTSAudioContainer : public UAudioComponent
{
	GENERATED_UCLASS_BODY()
public:
	/** 
	 * Initialize the audio data and returns the initialized UTTSAudioContainer
	 * @param Text: FString - text to render
	 * @return this
	 */
	UTTSAudioContainer* Initialize(FString Text);

	/** 
	 * Calls play() on the contained TTSAudioComponent
	 */
	UFUNCTION(BlueprintCallable, Category="Text To Speech")
		void Play();

	~UTTSAudioContainer();
private:
	UAudioComponent* TTSAudioComponent;
	UTTSSoundWave* TTSSoundWave;
};