cmake_minimum_required(VERSION 3.24)
project(OpenIsolation)

include_directories(include)
include_directories(../graphics/code/graphics)

add_library(Engine STATIC source/PackedFile/PackedFileCommon.cpp source/PackedFile/PackedFileReadable.cpp
        source/UtilsGraphicsCrossPlatform.cpp source/ReflectionMap.cpp source/render_passes.cpp
        source/Stereo/StereoManager.cpp)
target_compile_features(Engine PUBLIC cxx_std_11)
