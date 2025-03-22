find_package(GTest REQUIRED)
message("GTest_INCLUDE_DIRS = ${GTest_INCLUDE_DIRS}")

add_library(commonLibrary23 LibraryCode.cpp)

add_executable(mainApp23.exe main.cpp)
target_link_libraries(mainApp23.exe commonLibrary)

add_executable(unitTestRunner23.exe testRunner.cpp)
target_link_libraries(unitTestRunner23.exe commonLibrary23 ${GTEST_LIBRARIES} pthread)
