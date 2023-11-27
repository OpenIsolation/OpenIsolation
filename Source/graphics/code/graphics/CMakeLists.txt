cmake_minimum_required(VERSION 3.24)
project(OpenIsolation)

add_library(Graphics STATIC gfx_api.cpp)
target_compile_features(Graphics PUBLIC cxx_std_11)
