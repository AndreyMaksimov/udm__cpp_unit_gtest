find_package(GTest REQUIRED)
message("GTEST_INCLUDE_DIRS = ${GTEST_INCLUDE_DIRS}")

add_library(databaseConnectionLibrary51 IDatabaseConnection.cpp)
add_library(employeeManagerLibrary51 EmployeeManager.cpp)

set(ACTUAL_LIBRARIES databaseConnectionLibrary51 employeeManagerLibrary51)

add_executable(mainApp51.exe main.cpp)
target_link_libraries(${ACTUAL_LIBRARIES})

add_executable(testRunner51.exe testRunner.cpp)
target_link_libraries(testRunner51.exe
    GTest::gtest
    GTest::gmock
    pthread
    ${ACTUAL_LIBRARIES})

