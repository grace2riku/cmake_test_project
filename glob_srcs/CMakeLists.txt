cmake_minimum_required(VERSION 3.20)
project(glob_srcs)

set(CMAKE_CXX_STANDARD 14)

file(GLOB SRCS src/*.c)

add_executable(${PROJECT_NAME} ${SRCS})

include_directories(${PROJECT_SOURCE_DIR}/include)

message("PROJECT_SOURCE_DIR = ${PROJECT_SOURCE_DIR}")