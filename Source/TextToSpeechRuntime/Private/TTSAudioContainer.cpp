#include "TextToSpeechRuntimePrivatePCH.h"

#include "TTSAudioContainer.h"

UTTSAudioContainer::UTTSAudioContainer(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

UTTSAudioContainer* UTTSAudioContainer::Initialize(FString Text)
{
	TTSSoundWave = NewObject<UTTSSoundWave>();
	TTSSoundWave->Initialize(Text);
	
	TTSAudioComponent = NewObject<UAudioComponent>();
	TTSAudioComponent->SetSound(TTSSoundWave);
	TTSAudioComponent->AttachTo(this);
	return this;
}

void UTTSAudioContainer::Play()
{
	TTSAudioComponent->Play();
}

UTTSAudioContainer::~UTTSAudioContainer()
{
	delete TTSAudioComponent;
	delete TTSSoundWave;
}
