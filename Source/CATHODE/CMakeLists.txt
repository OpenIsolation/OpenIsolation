cmake_minimum_required(VERSION 3.24)
project(OpenIsolation)

add_library(CATHODE STATIC cathode_entity.cpp cathode_entity_interface.cpp cathode_entity_manager.cpp cathode_entity_path.cpp cathode_entity_state.cpp Memory/cathode_memory_pool.cpp)
target_compile_features(CATHODE PUBLIC cxx_std_11)
