cmake_minimum_required(VERSION 3.19)
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

target_link_libraries(code ${PROJECT_SOURCE_DIR}/bin/libUll.dll)
