find_package(GTest REQUIRED)
message("GTest_INCLUDE_DIRS = ${GTest_INCLUDE_DIRS}")

add_library(commonLibrary60 LibraryCode.cpp)

add_executable(mainApp60.exe main.cpp)
target_link_libraries(mainApp60.exe commonLibrary)

add_executable(unitTestRunner60.exe testRunner.cpp)
target_link_libraries(unitTestRunner60.exe
        commonLibrary60
        GTest::gtest
        GTest::gmock
        pthread)
