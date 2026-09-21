cmake_minimum_required(VERSION 3.10)
project(MyCppProject)

set(CMAKE_CXX_STANDARD 17) # 使用 C++17 标准
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main main.cpp) # 将 main.cpp 编译成名为 main 的程序

# 固定编译警告选项 (注意右括号必须在 # 前面)
target_compile_options(main PRIVATE -Wall -Wextra -Wpedantic) # -Werror

# Windows MinGW 环境下，暂不开启 sanitize，直接注释掉即可
# if(CMAKE_BUILD_TYPE STREQUAL "Debug")
#     target_compile_options(main PRIVATE -fsanitize=address,undefined -fno-omit-frame-pointer)
#     target_link_options(main PRIVATE -fsanitize=address,undefined)
# endif()