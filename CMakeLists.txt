cmake_minimum_required(VERSION 3.15)

project(Hazel)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}/bin/debug)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/bin/release)

add_subdirectory(hazel)
add_subdirectory(playground)
