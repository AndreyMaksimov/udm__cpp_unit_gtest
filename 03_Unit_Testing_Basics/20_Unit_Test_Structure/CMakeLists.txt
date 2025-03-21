find_package(GTest REQUIRED)
message("GTest_INCLUDE_DIRS = ${GTest_INCLUDE_DIRS}")

add_library(commonLibrary20 LibraryCode.cpp)

add_executable(mainApp20.exe main.cpp)
target_link_libraries(mainApp20.exe commonLibrary20)

add_executable(unitTestRunner20.exe testRunner.cpp)
target_link_libraries(unitTestRunner20.exe commonLibrary20 ${GTEST_LIBRARIES} pthread)

