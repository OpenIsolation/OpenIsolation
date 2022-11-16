cmake_minimum_required(VERSION 3.24)
project(AlienIsolation)

set(CMAKE_CXX_STANDARD 11)

include_directories(inc)

add_library(CALibs STATIC src/CAPackFile.cpp src/CASHA.cpp)
