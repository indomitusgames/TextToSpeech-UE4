// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "TextToSpeechEditorPrivatePCH.h"

#include "TTSSoundWave.h"



class FTextToSpeechEditor : public ITextToSpeechEditor
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE( FTextToSpeechEditor, TextToSpeechEditor )



void FTextToSpeechEditor::StartupModule()
{
	// This code will execute after your module is loaded into memory (but after global variables are initialized, of course.)
}


void FTextToSpeechEditor::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}



