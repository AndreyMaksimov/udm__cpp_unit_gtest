find_package(GTest REQUIRED)
message("GTest_INCLUDE_DIRS = ${GTest_INCLUDE_DIRS}")

add_executable(myExecutable12.exe main.cpp)
target_link_libraries(myExecutable12.exe ${GTEST_LIBRARIES} pthread)
