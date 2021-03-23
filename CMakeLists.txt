# CMake 最低版本号要求
cmake_minimum_required(VERSION 2.4.3)

# 项目信息
PROJECT(PunctureDeform)

set(PTDEFORM_LIB_SOURCE_DIR 
        $(PunctureDeform_SOURCE_DIR)/PTDeform 
        $(PunctureDeform_SOURCE_DIR)/PTDeform/include 
        $(PunctureDeform_SOURCE_DIR)/PTDeform/src)


INCLUDE_DIRECTORIES(
        ${PTDEFORM_LIB_SOURCE_DIR}
)

subdirs(PTDeform)

subdirs(examples)