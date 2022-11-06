# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

# 项目信息
project (Demo3)

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 添加 math 子目录
add_subdirectory(math)
message("")

message("0.show_vars_BINARY_DIR = ${show_vars_BINARY_DIR}")
message("1.PROJECT_BINARY_DIR = ${PROJECT_BINARY_DIR}")
message("2.PROJECT_SOURCE_DIR = ${PROJECT_SOURCE_DIR}")
message("3.CMAKE_CURRENT_SOURCE_DIR = ${CMAKE_CURRENT_SOURCE_DIR}")
message("4.CMAKE_CURRRENT_BINARY_DIR = ${CMAKE_CURRRENT_BINARY_DIR}")
message("5.CMAKE_CURRENT_LIST_FILE = ${CMAKE_CURRENT_LIST_FILE}")
message("6.CMAKE_CURRENT_LIST_LINE = ${CMAKE_CURRENT_LIST_LINE}")
message("7.CMAKE_MODULE_PATH = ${CMAKE_MODULE_PATH}")
message("8.CMAKE_SOURCE_DIR = ${CMAKE_SOURCE_DIR}")
message("9.EXECUTABLE_OUTPUT_PATH = ${EXECUTABLE_OUTPUT_PATH}")
message("10.LIBRARY_OUTPUT_PATH = ${LIBRARY_OUTPUT_PATH}")
message("11.PROJECT_NAME = ${PROJECT_NAME}")
message("12.PROJECT_VERSION_MAJOR = ${PROJECT_VERSION_MAJOR}")
message("13.PROJECT_VERSION_MINOR = ${PROJECT_VERSION_MINOR}")
message("14.PROJECT_VERSION_PATCH = ${PROJECT_VERSION_PATCH}")
message("15.CMAKE_SYSTEM = ${CMAKE_SYSTEM}")
message("16.CMAKE_SYSTEM_NAME = ${CMAKE_SYSTEM_NAME}")
message("17.CMAKE_SYSTEM_VERSION = ${CMAKE_SYSTEM_VERSION}")
message("18.BUILD_SHARED_LIBS = ${BUILD_SHARED_LIBS}")
message("19.CMAKE_C_FLAGS = ${CMAKE_C_FLAGS}")
message("20.CMAKE_CXX_FLAGS = ${CMAKE_CXX_FLAGS}")
message("21.CMAKE_SYSTEM_PROCESSOR   = ${CMAKE_SYSTEM_PROCESSOR}")
message("22.UNIX = ${UNIX}")
message("23.WIN32   = ${WIN32}")
message("24.CMAKE_BUILD_TYPE   = ${CMAKE_BUILD_TYPE}")
message("25.CMAKE_INCLUDE_PATH   = ${CMAKE_INCLUDE_PATH}")
message("26.LIBRARY_OUTPUT_PATH   = ${LIBRARY_OUTPUT_PATH}")
message("27.CMAKE_CXX_COMPILER   = ${CMAKE_CXX_COMPILER}")
message("28.CMAKE_C_COMPILER   = ${CMAKE_C_COMPILER}")
# 为了分行确定输出内容
message("")


# 指定生成目标 
add_executable(Demo main.cc)

# 添加链接库，此句必须放在add_exceutable后面，因为必须先有target
target_link_libraries(Demo PUBLIC MathFunctions)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(Demo PUBLIC
                          "${PROJECT_SOURCE_DIR}/math"
                          )
