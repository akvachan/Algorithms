cmake_minimum_required(VERSION 3.30.1)

project(Algorithms)

add_subdirectory(external/glfw)

include_directories(
    lib/include
    PUBLIC external/glfw/include
)

add_library(
    ${PROJECT_NAME}
    lib/cpp/lsearch.cpp 
)

set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER lib/include/lsearch.h)

install(
    TARGETS ${PROJECT_NAME}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${PROJECT_NAME}
)
