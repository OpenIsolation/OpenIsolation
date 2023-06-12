cmake_minimum_required(VERSION 3.24)
project(AlienIsolation)

include_directories(include)
include_directories(../../CALibs/inc)

add_library(Common STATIC source/Utils/dictionary.cpp source/Utils/common_game_time.cpp
        source/Utils/common_file_interface.cpp)
target_compile_features(Common PUBLIC cxx_std_11)
