// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "TextToSpeechRuntimePrivatePCH.h"
#include "TTSSoundWave.h"
#include "FMRTTSLib.h"
#include <inttypes.h>
#include "Audio.h"
//#include "AudioDevice.h"

UTTSSoundWave::UTTSSoundWave(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	NumChannels = 1;
	SampleRate = 44100;

	// Hard limit of 10 seconds per speech
	Duration = 10; 
	bProcedural = true;
	SampleCursor = 0;
	BytesRead = 0;
	GenerationNumber = 0;
}

bool UTTSSoundWave::Initialize(FString Text = L"Welcome to Five Minutes Rage")
{
	AudioBuffer = FMRTTSLib::FMRTTSLibMain::GeneratePCMData(&Text.GetCharArray()[0], &BytesRead);
	return true;
}

int32 UTTSSoundWave::GeneratePCMData(uint8* PCMData, const int32 SamplesNeeded)
{
	for (int32 i = 0; i < SamplesNeeded; i++)
	{
		// Return silence if buffer is over
		if (SampleCursor * 2 + 1 >= (BytesRead))
		{
			//SampleCursor = 0;
			return false;
		}

		// First buffers are wrong, go further only after some iterations
		if (GenerationNumber > 5) {

			// Place 16bit of data in two uint8
			PCMData[2 * i] = AudioBuffer[2 * SampleCursor];
			PCMData[2 * i + 1] = AudioBuffer[2 * SampleCursor + 1];
			SampleCursor++;
		}
		else {
			// Place silence instead of audio, do not increase SampleCursor
			PCMData[2 * i] = 0;
			PCMData[2 * i + 1] = 0;
		}
	}
	GenerationNumber++;
	return SamplesNeeded * sizeof(int16);
}

UTTSSoundWave::~UTTSSoundWave()
{
	delete AudioBuffer;
}