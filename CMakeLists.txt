cmake_minimum_required(VERSION 3.24)
project(OpenIsolation)

include(CheckIPOSupported)

# Optional IPO. Do not use IPO if it's not supported by compiler.
check_ipo_supported(RESULT result OUTPUT output)
if(result)
  set(CMAKE_INTERPROCEDURAL_OPTIMIZATION TRUE)
else()
  message(WARNING "IPO is not supported: ${output}")
endif()

add_subdirectory(Source/game/common)
add_subdirectory(Source/CALibs)
add_subdirectory(Source/engine)
add_subdirectory(Source/CATHODE)

if (MSVC)
    add_executable(AI WIN32 Source/game/source/main/main.cpp)
    target_sources(AI PRIVATE Source/game/source/AI.rc)

    # Match the linker flag used in the original Steam x86 release - allows up to 4GB of RAM to be used by the game.
    set_target_properties(AI PROPERTIES LINK_FLAGS "/LARGEADDRESSAWARE")
endif()
