# CMake 最低版本号要求
cmake_minimum_required(VERSION 2.4.3)

add_definitions(-D_CRT_SECURE_NO_WARNINGS)

SET(Example1_SRCS
        main.cpp
)

link_libraries(ptdeform)

add_executable(example1 ${Example1_SRCS})