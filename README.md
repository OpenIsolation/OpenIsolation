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

## Want to read some more background information on this project?
[Overview](Documentation/AlienIsolation_iOS_Overview.md)

## Further information
[Guidelines for reverse-engineers](Documentation/AlienIsolation_General_ReversingGuidelines.md)

[Technical details about the game binaries](Documentation/AlienIsolation_General_TechnicalDetails.md)