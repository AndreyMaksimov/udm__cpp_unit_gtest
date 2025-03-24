find_package(GTest REQUIRED)
message("GTest_INCLUDE_DIRS = ${GTest_INCLUDE_DIRS}")

add_executable(myExecutable40.exe main.cpp)
target_link_libraries(myExecutable40.exe PUBLIC GTest::gtest GTest::gmock pthread)
