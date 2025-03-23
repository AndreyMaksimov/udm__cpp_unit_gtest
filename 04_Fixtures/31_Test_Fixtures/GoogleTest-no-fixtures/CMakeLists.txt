find_package(GTest REQUIRED)
message("GTest_INCLUDE_DIRS = ${GTest_INCLUDE_DIRS}")

add_library(commonLibrary31_1 LibraryCode.cpp)

add_executable(mainApp31_1.exe main.cpp)
target_link_libraries(mainApp31_1.exe commonLibrary)

add_executable(unitTestRunner31_1.exe testRunner.cpp)
target_link_libraries(unitTestRunner31_1.exe commonLibrary31_1 ${GTEST_LIBRARIES} pthread)

