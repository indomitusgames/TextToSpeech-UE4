# TextToSpeech-UE4
Text To Speech synthesis for Unreal Engine 4. Uses the Windows SAPI libraries.

Version 0.1.0-alpha

Currently needs the English TTS SAPI voice to be available on Windows.

## What it is
This Unreal Engine 4 plugin allows you to synthetise text to spoken audio. Internally, it uses the compiled FMRTTSLib, whose source code is available at [https://github.com/indomitusgames/FMRTTSLib](https://github.com/indomitusgames/FMRTTSLib).

## How to use it
* Checkout the code into your project's "Plugins" directory. It may be necessary to create it under the project root.
* Check the plugin is active in Unreal Engine 4 editor
* The plugin exposes a new Blueprint node, "Spawn TTS", on which you can call a "Play" function. On the node you can set the text to be spoken

## Issues and TODO
* Currently the plugin uses the Windows SAPI API (not the Microsoft Speech Platform, which is different) and the English voice. It is not redistributable so it must be present in Windows to work.
* No text in the "Spawn TTS" node crashes the Engine
* Other TTS library should be easily implementable with little or no modifications to the plugin code. The only function needed is GeneratePCMData, as documented in Source/FMRTTSLib/FMRTTSLib.h
