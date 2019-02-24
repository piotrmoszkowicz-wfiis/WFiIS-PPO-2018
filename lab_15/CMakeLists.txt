cmake_minimum_required(VERSION 3.0.0)
project(asdf VERSION 0.1.0)

add_executable(
  asdf main.cpp
  Bike.h
  Car.h
  Car.cpp
  Vehicle.h
  Vehicle.cpp
)
add_compile_options( -Wall -g)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
