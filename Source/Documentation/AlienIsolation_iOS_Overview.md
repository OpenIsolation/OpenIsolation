# Alien Isolation - iOS - Overview

## Background

When the iOS port of the game was released, complete debugging information and symbols were left in the game's binary.

Thankfully, due to the way GCC compiles code (also probably the GCC flags used to compile the port), we have complete insight into the original folder structure and source files that CA used for the game and its engine, known as CATHODE.

## Want to have a look around?

In this folder, you'll find a sub-folder for each system (library) in the game. 

Each .md file will contain a breakdown of the symbols and global variables (if applicable), that were contained in that source file.

### Game Code Folder Structure
```txt
AlienIsolation/Source/engine/source/
AlienIsolation/Source/engine/source/Damage/
AlienIsolation/Source/engine/source/dx9/
AlienIsolation/Source/engine/source/frontend/
AlienIsolation/Source/engine/source/frontend/dx9/
AlienIsolation/Source/engine/source/frontend/pc/
AlienIsolation/Source/engine/source/nextgen/
AlienIsolation/Source/engine/source/PackageManager/
AlienIsolation/Source/engine/source/PackedFile/
AlienIsolation/Source/engine/source/pc/
AlienIsolation/Source/engine/source/PerformanceSuite/
AlienIsolation/Source/engine/source/ScreenCapture/
AlienIsolation/Source/engine/source/Settings/
AlienIsolation/Source/engine/source/Stereo/

AlienIsolation/Source/game/pch/

AlienIsolation/Source/game/source/Actions/
AlienIsolation/Source/game/source/AI/
AlienIsolation/Source/game/source/AI/Convo/
AlienIsolation/Source/game/source/animation/
AlienIsolation/Source/game/source/behavior_manager/
AlienIsolation/Source/game/source/behavior_manager/atomics/
AlienIsolation/Source/game/source/behavior_manager/atomics/convo/
AlienIsolation/Source/game/source/behavior_manager/composites/
AlienIsolation/Source/game/source/behavior_manager/conditions/
AlienIsolation/Source/game/source/behavior_manager/conditions/convo/
AlienIsolation/Source/game/source/behavior_manager/decorators/
AlienIsolation/Source/game/source/camera_system/
AlienIsolation/Source/game/source/CATHODE/
AlienIsolation/Source/game/source/CombatSupport/
AlienIsolation/Source/game/source/display/
AlienIsolation/Source/game/source/HighLevel/
AlienIsolation/Source/game/source/main/
AlienIsolation/Source/game/source/Networking/
AlienIsolation/Source/game/source/Pathfinding/Detour/
AlienIsolation/Source/game/source/Pathfinding/Query/
AlienIsolation/Source/game/source/Physics/
AlienIsolation/Source/game/source/unity_files/

AlienIsolation/Source/game/common/source/
AlienIsolation/Source/game/common/source/animation/
AlienIsolation/Source/game/common/source/animation/Metadata/
AlienIsolation/Source/game/common/source/Characters/
AlienIsolation/Source/game/common/source/cover/
AlienIsolation/Source/game/common/source/memory/
AlienIsolation/Source/game/common/source/Utils/

AlienIsolation/Source/game/network/source/unity_files/

AlienIsolation/Source/graphics/code/graphics/
AlienIsolation/Source/graphics/code/graphics/gpu/
AlienIsolation/Source/graphics/code/graphics/util/

AlienIsolation/Source/Messaging/
```

### CAAudio Code Folder Structure
```txt
AlienIsolation/Source/CAAudio/Components/
AlienIsolation/Source/CAAudio/CAAudio/Shared_Implementation/plugins/controller_audio/
AlienIsolation/Source/CAAudio/CAAudio/Shared_Implementation/plugins/envelope/
AlienIsolation/Source/CAAudio/CAAudio/Shared_Implementation/plugins/layer_splitter/
AlienIsolation/Source/CAAudio/CAAudio/Shared_Implementation/
AlienIsolation/Source/CAAudio/CAAudio/Shared_Implementation/wwise_code/
```

### CALibs Code Folder Structure
```txt
AlienIsolation/Source/CALibs/src/
AlienIsolation/Source/CALibs/src/W32/
AlienIsolation/Source/CALibs/src/W64/
AlienIsolation/Source/CALibs/src/WIN/
```

### CATHODE Code Folder Structure
```txt
AlienIsolation/Source/CATHODE/
AlienIsolation/Source/CATHODE/Auto/
AlienIsolation/Source/CATHODE/Memory/
```
