cmake_minimum_required(VERSION 3.30.1)

project(Algorithms-Test)

add_executable(test main.cpp)

target_link_directories(test PRIVATE ${CMAKE_SOURCE_DIR}/../build/)

target_link_libraries(test Algorithms)
