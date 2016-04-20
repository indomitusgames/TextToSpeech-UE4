#include "TextToSpeechRuntimePrivatePCH.h"
#include "TTSBlueprintLibrary.h"

#include "TTSAudioContainer.h"

#include "TTSSoundWave.h"

UTTSBlueprintLibrary::UTTSBlueprintLibrary(const class FObjectInitializer& PCIP)
	: Super(PCIP)
{

}

UTTSAudioContainer* UTTSBlueprintLibrary::SpawnTTS(FString Text)
{
	UTTSAudioContainer* TTSAC = NewObject<UTTSAudioContainer>();
	TTSAC->Initialize(Text);
	return TTSAC;
}
