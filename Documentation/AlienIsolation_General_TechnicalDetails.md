# Alien: Isolation - General - Technical Binary Details

## Overview
This file contains some details, which you may find interesting, from the middleware to the compiler / build tools used,
for building the various ports of the game.

## Known compilers / build tools
These were discovered on PC by making use of the undocumented, encrypted `Rich` header included in every object, that is 
compiled using Visual Studio.

---
### PC - Steam
**[LINK]** Visual Studio 2010 SP1 (build 40219)

**[C++]** Visual Studio 2010 SP1 (build 40219) - 1508 objects

**[C]** Visual Studio 2010 SP1 (build 40219) - 370 objects

**[ASM]** Visual Studio 2010 SP1 (build 40219) - 65 objects

**[C++]** Visual Studio 2010 (build 30319) - 5 objects

**[C]** Visual Studio 2010 (build 30319) - 247 objects

**[C++]** Visual Studio 2008 SP1 (build 30729) - 294 objects

**[C]** Visual Studio 2008 SP1 (build 30729) - 107 objects

**[C++]** Visual Studio 2008 (build 21022) - 7 objects

**[UNK]** Unknown / Unmarked - 350 objects

### PC - UWP
> Weirdly, this was apparently linked with VS2010 non-SP1 even though it's UWP...

**[LINK]** Visual Studio 2010 (build 30319)

**[C++]** Visual Studio 2010 SP1 (build 40219) - 1226 objects

**[C]** Visual Studio 2010 SP1 (build 40219) - 123 objects

**[C++]** Visual Studio 2010 (build 30319) - 314 objects

**[C]** Visual Studio 2010 (build 30319) - 247 objects

**[ASM]** Visual Studio 2010 (build 30319) - 30 objects

**[C++]** Visual Studio 2008 SP1 (build 30729) - 302 objects

**[C]** Visual Studio 2008 SP1 (build 30729) - 106 objects

**[C++]** Visual Studio 2008 (build 21022) - 7 objects

**[UNK]** Unknown / Unmarked - 395 objects

## Known middleware
---
### Audio
Wwise Unknown Version (PC/Mac/Linux)

Wwise 2019.1.4 (iOS/Android)

### UI
Autodesk Scaleform GFx SDK 4.3.26 (iOS/Android)

### Video
CRI Movie 3.50a - Nov 27 2013 - VS2008 (All ports)

### Physics
Havok 2012_2.0-r1 (PC - Steam/UWP - VS2010 SIMD)
> SIMD is assumed here, as Wwise is using SIMD for the iOS port of the game.

Havok Unknown Version (Mac/Linux - x64)

Havok 2018_2.0-r1 (iOS/Android - ARM)

### Lip-sync / Facial animation
FaceFX Unknown Version (All ports)

### Cloud
Steamworks SDK 1.27 (PC - Steam)

Steamworks SDK Unknown Version (Mac/Linux)

Steamworks SDK 1.35 (iOS/Android)
