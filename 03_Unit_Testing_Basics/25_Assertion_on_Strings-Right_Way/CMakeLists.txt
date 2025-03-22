find_package(GTest REQUIRED)
message("GTest_INCLUDE_DIRS = ${GTest_INCLUDE_DIRS}")

add_library(commonLibrary25 LibraryCode.cpp)

add_executable(mainApp25.exe main.cpp)
target_link_libraries(mainApp25.exe commonLibrary)

add_executable(unitTestRunner25.exe testRunner.cpp)
target_link_libraries(unitTestRunner25.exe commonLibrary25 ${GTEST_LIBRARIES} pthread)

