cmake_minimum_required(VERSION 3.24)
project(AlienIsolation)

add_library(CATHODE STATIC cathode_entity.cpp cathode_entity_manager.cpp cathode_entity_path.cpp Memory/cathode_memory_pool.cpp)
target_compile_features(CATHODE PUBLIC cxx_std_11)
