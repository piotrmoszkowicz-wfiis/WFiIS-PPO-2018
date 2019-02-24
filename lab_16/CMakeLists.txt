cmake_minimum_required(VERSION 3.0.0)
project(asdf VERSION 0.1.0)

add_executable(
  asdf Main.cpp
  Dzialanie.h
  Dzielenie.h
  Dzielenie.cpp
  Pierwiastek.h
  Pierwiastek.cpp
  Suma.h
  Suma.cpp
)
add_compile_options( -Wall -g)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
