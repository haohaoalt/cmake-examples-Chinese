cmake_minimum_required(VERSION 3.10)
project(static_library)

#create static library
#在add_library调用中包含了源文件，用于创建名称为libhello_library.a的静态库。
add_library(static_library STATIC
                src/Hello.cpp
)
target_include_directories(static_library
PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)
# target_include_directories为一个目标（可能是一个库library也可能是可执行文件）添加头文件路径。
#指定用哪个源文件生成可执行文件
add_executable(static_binary
src/main.cpp)
#链接可执行文件和静态库
target_link_libraries( static_binary
    PRIVATE 
        static_library
)