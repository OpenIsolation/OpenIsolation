cmake_minimum_required(VERSION 3.24)
project(AlienIsolation)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)
include_directories(../graphics/code/graphics)

add_library(Engine STATIC source/UtilsGraphicsCrossPlatform.cpp)