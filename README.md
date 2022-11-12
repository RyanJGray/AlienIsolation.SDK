# AlienIsolation.SDK
## About
This is a project to build a C/C++ SDK / API for the survival horror game _Alien: Isolation_ (developed by _Creative Assembly_).

This project is mainly intended for use with making mods for the game, or for curious people who want to learn how the game, or its engine (branded as _CATHODE_), works.

It's important to note that this project **does not** provide reverse-engineered executable code, you cannot use this to recompile the game or its engine.

This project only provides C/C++ header files containing data type definitions, function prototypes and memory addresses for functions contained within the Steam release of the game.

## Status
**[12-11-2022]** The SDK is not working in the way I intended it to, I'm working on an update for the SDK right now. There should be more details available early next year. Thanks to information left in one of the ports of _Alien: Isolation_, I'm now able to refactor the folder structure to more closely match, what the original source tree would've looked like.
**[24-01-2022]** This project is in its early stages. I'm slowly reversing classes back to C/C++ headers as I come across them.

## End Goal
Ideally, this SDK would be used to mod the game in ways that aren't possible via traditional game file mods.

You can use the function addresses provided by this project to detour (hook / hijack) game and engine function calls.

With this level of control over the game, it becomes possible to change the state of the game in real-time.

There will, of course, be limitations because of the original code that was written by Creative Assembly. There is not much that we can do about this, as the game's source code is not open-source or in the public domain.
