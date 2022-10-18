cmake_minimum_required(VERSION 3.20)
project(multiple_files)

set(CMAKE_CXX_STANDARD 14)

#add_executable(multiple_files src/main.c src/add.c)
add_executable(${PROJECT_NAME} src/main.c src/add.c)

include_directories(${PROJECT_SOURCE_DIR}/include)

message("PROJECT_SOURCE_DIR = ${PROJECT_SOURCE_DIR}")