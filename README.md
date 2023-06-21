![OpenIsolation](Artwork/OpenIsolation_Logo_Banner.png?raw=true "OpenIsolation")

# OpenIsolation
A project to reverse-engineer _Alien: Isolation_, provide an SDK, and fix some long-standing issues with the PC port.

⚠️ You **must** legally own a copy of the game (any PC release - e.g. Windows, macOS or Linux will do) in order to use this project, no game assets will be provided by this project.

Goals:
- [ ] Reverse-engineer the libraries.
- [ ] Start building tools around the reverse-engineered library code.
- [ ] Reverse-engineer the game code.
- [ ] Get the libraries linked into the game binary.
- [ ] Get the game code compiling successfully.
- [ ] Get the game running successfully on Windows.
- [ ] Publish all the headers and generate documentation.

## Project status
At the moment, all active development is happening in [_CATHODE_](Source/CATHODE), as this is one of the core libraries used throughout the game.
Some work on [_Common_](Source/game/common) has been completed, but the project is still generally in the very early stages.

## Want to read some more background information on this project?
[Overview](Documentation/AlienIsolation_iOS_Overview.md)

## Further information
[Guidelines for reverse-engineers](Documentation/AlienIsolation_General_ReversingGuidelines.md)

[Technical details about the game binaries](Documentation/AlienIsolation_General_TechnicalDetails.md)

---

**This project is not affiliated with (or endorsed by), SEGA and/or Creative Assembly.**

Any checks in the reverse-engineered code that handle copy protection or Steam ownership verification will not be modified or removed.

You **must** legally own a copy of the game in order to use this project.
