cmake_minimum_required(VERSION 3.24)
project(AlienIsolation)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(Source/game/common)
add_subdirectory(Source/CALibs)
add_subdirectory(Source/engine)
add_executable(AI WIN32 Source/game/source/main/main.cpp)