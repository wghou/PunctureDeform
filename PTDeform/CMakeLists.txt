# CMake 最低版本号要求
cmake_minimum_required(VERSION 2.4.3)

add_definitions(-D_CRT_SECURE_NO_WARNINGS)

SET(PTDEFORM_SRCS
        src/ptDeform.cpp
)

SET(PTDEFORM_HRDS
        include/ptDeform.h
)

add_library(ptdeform ${PTDEFORM_HRDS} ${PTDEFORM_SRCS})