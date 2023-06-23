cmake_minimum_required(VERSION 3.24)
project(OpenIsolation)

include_directories(inc)

add_library(CALibs STATIC src/CAPackFile.cpp src/CASHA.cpp)
target_compile_features(CALibs PUBLIC cxx_std_11)
