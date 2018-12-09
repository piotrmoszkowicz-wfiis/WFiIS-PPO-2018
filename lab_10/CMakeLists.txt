cmake_minimum_required(VERSION 3.0)
project(main.exe)

file(GLOB src ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB headers ${PROJECT_SOURCE_DIR}/include/*.h)
file(GLOB main ${PROJECT_SOURCE_DIR}/*.cpp)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(main.exe ${main} ${headers} ${src})
add_compile_options(-g -pedantic -Wall -Wextra -Wshadow -Wnon-virtual-dtor -Wold-style-cast -Wcast-align -Wunused -Woverloaded-virtual -Wpedantic -Wconversion -Wsign-conversion -Wnull-dereference -Wdouble-promotion -Wformat=2 -Wduplicated-cond  -Wlogical-op -Wuseless-cast)

set(CMAKE_PROJECT_NAME ${PROJECT_NAME})
