cmake_minimum_required(VERSION 3.16)
project(Bookstore)

set(CMAKE_CXX_STANDARD 20)
#add_compile_options(-std=c++2a -fconcepts)

include_directories(
        ${PROJECT_SOURCE_DIR}/src/
        ${PROJECT_SOURCE_DIR}/bin/
)
set(src_dir
        ${PROJECT_SOURCE_DIR}/src/main.cpp
        )
add_executable(code ${src_dir})

# 添加链接库
target_link_libraries(code ${PROJECT_SOURCE_DIR}/bin/libUll.a)

# `bin/` 文件夹下后缀名为 `.a` 和 `.so` 文件
# 分别为静态链接库和动态链接库. 二者的区别之一是
# 使用动态链接库的程序的可执行文件运行时需要附有
# 动态链接库文件, 而使用静态链接库则不需要.