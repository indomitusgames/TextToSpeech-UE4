// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
using UnrealBuildTool;
using System;
using System.IO;

namespace UnrealBuildTool.Rules
{
	public class TextToSpeechEditor : ModuleRules
	{
		public TextToSpeechEditor(TargetInfo Target)
		{
			PublicIncludePaths.AddRange(
				new string[] {
					
					// ... add public include paths required here ...
				}
				);

			PrivateIncludePaths.AddRange(
				new string[] {
					"TextToSpeechEditor/Private",
					
					// ... add other private include paths required here ...
				}
				);

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
					"Engine",
					"InputCore",
					"Media",
					"UnrealEd",
					"TextToSpeechRuntime"
					// ... add other public dependencies that you statically link with here ...
				}
				);

			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"TextToSpeechRuntime"
					// ... add private dependencies that you statically link with here ...
				}
				);

			DynamicallyLoadedModuleNames.AddRange(
				new string[]
				{
					// ... add any modules that your module loads dynamically here ...
				}
				);
			//Necessary to build Media Sound Wave - will be fixed in 4.11
			PrivateIncludePathModuleNames.Add("Media");
			
			//Necessary to include Engine/EngineTypes.h in TTSSoundWave.h
			PrivateIncludePathModuleNames.Add("Engine");

		}
	}
}