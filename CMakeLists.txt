cmake_minimum_required(VERSION 3.10)
project(CppPractices)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. 自动找出当前文件夹下所有的 .cpp 文件
file(GLOB ALL_CPP_FILES "*.cpp")

# 2. 为每一个 .cpp 文件单独生成一个可运行的程序
foreach(CPP_FILE ${ALL_CPP_FILES})
    # 提取文件名（不带扩展名）
    get_filename_component(TARGET_NAME "${CPP_FILE}" NAME_WE)
    
    # 将其独立编译
    add_executable("${TARGET_NAME}" "${CPP_FILE}")
    
    # 绑上警告选项，并强制用 GBK 编码输出中文以匹配 Windows 终端
    target_compile_options("${TARGET_NAME}" PRIVATE -Wall -Wextra -Wpedantic -fexec-charset=GBK)
endforeach()