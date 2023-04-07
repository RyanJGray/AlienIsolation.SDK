# AlienIsolation.SDK
## About
This is a project to build a C/C++ SDK / API for the survival horror game _Alien: Isolation_ (developed by _Creative Assembly_).

This project is mainly intended for use with making mods for the game, or for curious people who want to learn how the game, or its engine (branded as _CATHODE_), works.

It's important to note that this project **does not** provide reverse-engineered executable code, you cannot use this to recompile the game or its engine.

This project only provides C/C++ header files containing data type definitions, function prototypes and memory addresses for functions contained within the Steam release of the game.

## Status
**[07-04-2023]** This project is in its early stages. I'm slowly reversing classes back to C++ headers as I come across them. I've discovered a way of replicating something close to CA's original source tree, for the game and its various first-party libraries.

Most of the header files that you see in the repo are empty, just placeholders for now, but will gradually get filled in.

## End Goal
Ideally, this SDK would be used to mod the game in ways that aren't possible via traditional game file mods.

You can use the function addresses provided by this project to detour (hook / hijack) game and engine function calls.

With this level of control over the game, it becomes possible to change the state of the game in real-time.

There will, of course, be limitations because of the original code that was written by Creative Assembly. There is not much that we can do about this, as the game's source code is not open-source or in the public domain.

---

**This project is not affiliated with (or endorsed by), SEGA and/or Creative Assembly.**
