
find_package(GTest REQUIRED)
message("GTest_INCLUDE_DIRS = ${GTest_INCLUDE_DIRS}")

add_library(commonLibrary36 LibraryCode.cpp)

add_executable(mainApp36.exe main.cpp)
target_link_libraries(mainApp36.exe commonLibrary)

add_executable(unitTestRunner36.exe testRunner.cpp)
target_link_libraries(unitTestRunner36.exe commonLibrary36 ${GTEST_LIBRARIES} pthread)
