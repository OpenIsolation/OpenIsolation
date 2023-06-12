cmake_minimum_required(VERSION 3.24)
project(AlienIsolation)

include_directories(include)
include_directories(../graphics/code/graphics)

add_library(Engine STATIC source/UtilsGraphicsCrossPlatform.cpp source/ReflectionMap.cpp source/render_passes.cpp)
target_compile_features(Engine PUBLIC cxx_std_11)
