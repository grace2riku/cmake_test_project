file(GLOB SRCS *.c)

add_library(test_library STATIC ${SRCS})