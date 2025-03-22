
find_package(GTest REQUIRED)
message("GTest_INCLUDE_DIRS = ${GTest_INCLUDE_DIRS}")

add_library(commonLibrary27 LibraryCode.cpp)

add_executable(mainApp27.exe main.cpp)
target_link_libraries(mainApp27.exe commonLibrary)

add_executable(unitTestRunner27.exe testRunner.cpp)
target_link_libraries(unitTestRunner27.exe commonLibrary27 ${GTEST_LIBRARIES} pthread)
