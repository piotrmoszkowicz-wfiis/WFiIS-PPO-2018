cmake_minimum_required(VERSION 3.0.0)
project(asdf VERSION 0.1.0)

add_executable(
  asdf main.cpp
  MyString.h
  MyString.cpp
)
add_compile_options( -Wall -g)
add_definitions(-D MAPCALC)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
