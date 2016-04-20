// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "TextToSpeechRuntimePrivatePCH.h"

#include "TTSSoundWave.h"



class FTextToSpeechRuntime : public ITextToSpeechRuntime
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE( FTextToSpeechRuntime, TextToSpeechRuntime )



void FTextToSpeechRuntime::StartupModule()
{
	// This code will execute after your module is loaded into memory (but after global variables are initialized, of course.)
}


void FTextToSpeechRuntime::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}



