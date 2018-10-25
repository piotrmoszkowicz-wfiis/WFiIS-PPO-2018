cmake_minimum_required(VERSION 3.0.0)
project(Zaj4 VERSION 0.1.0)

add_executable(
  Zaj4 lab03.cpp
  Pair.h
  ListFunctions.cpp
  ListFunctions.h
)
add_compile_options( -Wall -g)
add_definitions(-D DEBUG)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
