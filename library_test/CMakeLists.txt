cmake_minimum_required(VERSION 3.20)
project(library_test)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(test_library)

file(GLOB SRCS src/*.c)
        
add_executable(${PROJECT_NAME} ${SRCS})

target_link_libraries(${PROJECT_NAME} test_library)

include_directories(
    include
    test_library)

message("PROJECT_SOURCE_DIR = ${PROJECT_SOURCE_DIR}")