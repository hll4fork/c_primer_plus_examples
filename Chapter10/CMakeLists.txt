#
# author    : huang li long <huanglilongwk@outlook.com>
#

cmake_minimum_required(VERSION 3.2)
project(project CXX)

# enable c++14
list(APPEND CMAKE_CXX_FLAGS "-std=c++14")

# include header file path 
include_directories(
    ${PROJECT_SOURCE_DIR}
)

# # collect all source files, using relative file path
# file(GLOB SRCS
#     RELATIVE ${PROJECT_SOURCE_DIR}
#     "*.cpp"
# )

# # add execuble 
# foreach(SRC ${SRCS})
#     string(REPLACE ".cpp" "" SRC_BASE ${SRC})   # get source file's basename
#     add_executable(${SRC_BASE} ${SRC})
#     #message("SRC_BASE is ${SRC_BASE}")          # for debug
# endforeach()

# add library 
add_library(stack stack.cpp)
# add_library(stock00 stock00.cpp)
# add_library(stock01 stock01.cpp)
# add_library(stock10 stock10.cpp)
# add_library(stock20 stock20.cpp)
# add_library(temp20 temp20.cpp)

# add executable 
add_executable(stacker stacker.cpp)
add_dependencies(stacker stack)
target_link_libraries(stacker stack)

