cmake_minimum_required(VERSION 3.30.1)

project(Algorithms-Test)

add_executable(tests main.cpp)

target_include_directories(
    tests
    PRIVATE ${CMAKE_SOURCE_DIR}/../lib/include/
    PRIVATE ${CMAKE_SOURCE_DIR}/../external/glfw/include/
)

target_link_directories(
    tests 
    PRIVATE ${CMAKE_SOURCE_DIR}/../build/
    PRIVATE ${CMAKE_SOURCE_DIR}/../build/external/glfw/src
)

target_link_libraries(
    tests 
    Algorithms
    glfw3
    "-framework Cocoa"
    "-framework OpenGL"
    "-framework IOKit"
)
