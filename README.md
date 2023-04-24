# OpenIsolation
A project to reverse-engineer Alien: Isolation, provide an SDK and fix long-standing issues with the PC port.

Goals:
- [ ] Reverse-engineer the libraries.
- [ ] Start building tools around the reverse-engineered library code.
- [ ] Reverse-engineer the game code.
- [ ] Get the libraries linked into the game binary.
- [ ] Get the game code compiling successfully.
- [ ] Get the game running successfully on Windows.
- [ ] Publish all the headers and generate documentation.

## Project status
At the moment, all active development is happening in [_Common_](Source/game/common), as this is one of the core libraries used throughout the game.

Some work is underway, to re-create CA's library of SFX and music for the game, using original file names and folder structures, recovered from the
Windows Store port of the game.

## Want to listen to some music and SFX from the game?
[Audio Library](https://www.dropbox.com/sh/99jwuuhtxhsiq7t/AAAhX0zONVwFiWgimfBDotXMa?dl=0)

## Want to read some more background information on this project?
[Overview](Documentation/AlienIsolation_iOS_Overview.md)

## Further information
[Guidelines for reverse-engineers](Documentation/AlienIsolation_General_ReversingGuidelines.md)

[Technical details about the game binaries](Documentation/AlienIsolation_General_TechnicalDetails.md)
