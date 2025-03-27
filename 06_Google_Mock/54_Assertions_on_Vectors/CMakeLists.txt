find_package(GTest REQUIRED)
message("GTest_INCLUDE_DIRS = ${GTest_INCLUDE_DIRS}")

add_library(commonLibrary54 LibraryCode.cpp)

add_executable(mainApp54.exe main.cpp)
target_link_libraries(mainApp54.exe commonLibrary)

add_executable(unitTestRunner54.exe testRunner.cpp)
target_link_libraries(unitTestRunner54.exe
        commonLibrary54
        GTest::gtest
        GTest::gmock
        pthread)

