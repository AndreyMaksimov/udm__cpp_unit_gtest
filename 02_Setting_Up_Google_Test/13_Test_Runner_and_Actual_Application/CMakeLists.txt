
find_package(GTest REQUIRED)
message("GTest_INCLUDE_DIRS = ${GTest_INCLUDE_DIRS}")

add_library(commonLibrary13 LibraryCode.cpp)

add_executable(mainApp13.exe main.cpp)
target_link_libraries(mainApp13.exe commonLibrary)

add_executable(unitTestRunner13.exe testRunner.cpp)
target_link_libraries(unitTestRunner13.exe commonLibrary13 ${GTEST_LIBRARIES} pthread)

