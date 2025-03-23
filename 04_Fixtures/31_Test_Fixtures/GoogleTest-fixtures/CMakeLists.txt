find_package(GTest REQUIRED)
message("GTest_INCLUDE_DIRS = ${GTest_INCLUDE_DIRS}")

add_library(commonLibrary31_2 LibraryCode.cpp)

add_executable(mainApp31_2.exe main.cpp)
target_link_libraries(mainApp31_2.exe commonLibrary)

add_executable(unitTestRunner31_2.exe testRunner.cpp)
target_link_libraries(unitTestRunner31_2.exe commonLibrary31_2 ${GTEST_LIBRARIES} pthread)
