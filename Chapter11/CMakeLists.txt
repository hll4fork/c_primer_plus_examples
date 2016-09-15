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
add_library(mytime mytime.cpp)
add_library(mytime1 mytime1.cpp)
add_library(mytime2 mytime2.cpp)
add_library(mytime3 mytime3.cpp)
add_library(stonewt stonewt.cpp)
add_library(stonewt1 stonewt1.cpp)
add_library(vect vect.cpp)

# add executable 
add_executable(randwalk randwalk.cpp)
add_dependencies(randwalk vect)
target_link_libraries(randwalk vect)

add_executable(stone stone.cpp)
add_dependencies(stone stonewt)
target_link_libraries(stone stonewt)

add_executable(stone1 stone1.cpp)
add_dependencies(stone1 stonewt1)
target_link_libraries(stone1 stonewt1)

add_executable(usetime0 usetime0.cpp)
add_dependencies(usetime0 mytime)
target_link_libraries(usetime0 mytime)

add_executable(usetime1 usetime1.cpp)
add_dependencies(usetime1 mytime1)
target_link_libraries(usetime1 mytime1)

add_executable(usetime2 usetime2.cpp)
add_dependencies(usetime2 mytime2)
target_link_libraries(usetime2 mytime2)

add_executable(usetime3 usetime3.cpp)
add_dependencies(usetime3 mytime3)
target_link_libraries(usetime3 mytime3)
