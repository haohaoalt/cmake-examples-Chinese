cmake_minimum_required(VERSION 3.10)
project(shared_library)

add_library(shared_library  SHARED 
    src/Hello.cpp
)
#给动态库hello_library起一个别的名字hello::library
add_library(hello::library ALIAS shared_library)

#为这个库目标，添加头文件路径，PUBLIC表示包含了这个库的目标也会包含这个路径
target_include_directories(shared_library
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

# Create an executable
############################################################
#根据main.cpp生成可执行文件
add_executable(shared
    src/main.cpp
)
#链接库和可执行文件，使用的是这个库的别名。PRIVATE 表示
target_link_libraries(shared
    PRIVATE 
        hello::library
)