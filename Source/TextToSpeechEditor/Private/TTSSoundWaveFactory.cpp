// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "TextToSpeechEditorPrivatePCH.h"
#include "TTSSoundWaveFactory.h"

#define LOCTEXT_NAMESPACE "TTSSoundWave"

/*
* TTSSoundWaveFactory
*/

UTTSSoundWaveFactory::UTTSSoundWaveFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UTTSSoundWave::StaticClass();
}

UObject* UTTSSoundWaveFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	UTTSSoundWave* NewObjectAsset = NewObject<UTTSSoundWave>(InParent, Class, Name, Flags | RF_Transactional);
	return NewObjectAsset;
}

#undef LOCTEXT_NAMESPACE