<!--
 * @Author: zhanghao
 * @Date: 2022-08-31 09:56:34
 * @LastEditTime: 2022-08-31 09:56:34
 * @FilePath: /cmake-examples-Chinese/hao.md
 * @Description: CMakeLists.txt书写方式
-->
## opencv demo
```
cmake_minimum_required(VERSION 2.6)
#创建工程
project(testopencv)
#C++版本为 11
set(CMAKE_CXX_FLAGS "-std=c++11")
set(OpenCV_DIR "/home/hao007/haolib/opencv4.6/install/lib/cmake/opencv4")
find_package(OpenCV 4.6.0 REQUIRED) #找 OpenCV 4.0 安装路径
include_directories(${OpenCV_INCLUDE_DIRS}) #加载 OpenCV 4.0 的头文件
message(STATUS "OpenCV library status:")
message(STATUS "    config: ${OpenCV_DIR}")
message(STATUS "    version: ${OpenCV_VERSION}")
message(STATUS "    libraries: ${OpenCV_LIBS}")
message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")
#输出消息颜色定义
if(NOT WIN32)
  string(ASCII 27 Esc)
  set(ColourReset "${Esc}[m")
  set(ColourBold  "${Esc}[1m")
  set(Red         "${Esc}[31m")
  set(Green       "${Esc}[32m")
  set(Yellow      "${Esc}[33m")
  set(Blue        "${Esc}[34m")
  set(Magenta     "${Esc}[35m")
  set(Cyan        "${Esc}[36m")
  set(White       "${Esc}[37m")
  set(BoldRed     "${Esc}[1;31m")
  set(BoldGreen   "${Esc}[1;32m")
  set(BoldYellow  "${Esc}[1;33m")
  set(BoldBlue    "${Esc}[1;34m")
  set(BoldMagenta "${Esc}[1;35m")
  set(BoldCyan    "${Esc}[1;36m")
  set(BoldWhite   "${Esc}[1;37m")
endif()
message("This is normal")
message("${Red}This is Red${ColourReset}")

add_executable(testopencv install_test.cpp) #将程序生成可执行文件
target_link_libraries(testopencv ${OpenCV_LIBS}) #链接 lib 文件到可执行文件中

add_executable(test_edge edge.cpp) #将程序生成可执行文件
target_link_libraries(test_edge ${OpenCV_LIBS}) #链接 lib 文件到可执行文件中
```
