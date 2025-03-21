cmake_minimum_required(VERSION 3.30)

project(googletest_sample)
set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest
        GIT_TAG v1.16.0
        GIT_SHALLOW TRUE)
FetchContent_MakeAvailable(googletest)
#add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BUILD_DIR})

add_subdirectory(02_Setting_Up_Google_Test)
add_subdirectory(03_Unit_Testing_Basics)

