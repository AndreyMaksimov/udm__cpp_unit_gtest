find_package(GTest REQUIRED)
message("GTEST_INCLUDE_DIRS = ${GTEST_INCLUDE_DIRS}")

add_library(databaseConnectionLibrary42 IDatabaseConnection.cpp)
add_library(employeeManagerLibrary42 EmployeeManager.cpp)

set(ACTUAL_LIBRARIES databaseConnectionLibrary42 employeeManagerLibrary42)

add_executable(mainApp42.exe main.cpp)
target_link_libraries(${ACTUAL_LIBRARIES})

add_executable(testRunner42.exe testRunner.cpp)
target_link_libraries(testRunner42.exe PUBLIC
    GTest::gtest GTest::gmock
    pthread 
    ${ACTUAL_LIBRARIES})
