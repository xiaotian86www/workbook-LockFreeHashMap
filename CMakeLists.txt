
cmake_minimum_required(VERSION 3.5)

project(lockfree_hashmap)

add_subdirectory(googletest)

include_directories(${PROJECT_SOURCE_DIR}/googletest/googletest/include)
include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/src/test_hashmap.cpp)
target_link_libraries(${PROJECT_NAME} gtest gtest_main)