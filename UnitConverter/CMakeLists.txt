cmake_minimum_required(VERSION 3.10)

project(UnitConverter)

add_subdirectory(unitlib)

add_executable(Demo src/main.cpp)

target_link_libraries(Demo PRIVATE unitlib)