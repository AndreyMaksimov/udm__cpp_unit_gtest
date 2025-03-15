cmake_minimum_required(VERSION 3.30)

project(googletest_sample)

include(FetchContent)
FetchContent_Declare(googletest
        GIT_REPOSITORY https://github.com/google/googletest
        GIT_TAG v1.16.0)
FetchContent_GetProperties(googletest)
if(NOT googletest_POPULATED)
    FetchContent_MakeAvailable(googletest)
    add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BUILD_DIR})
endif()


add_subdirectory(02_Setting_Up_Google_Test)
