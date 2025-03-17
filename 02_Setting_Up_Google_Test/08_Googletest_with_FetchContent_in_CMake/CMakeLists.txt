
add_library(sumLibrary08 STATIC LibraryCode.cpp)

add_executable(mainApp08.exe main.cpp)
target_link_libraries(mainApp08.exe sumLibrary08)

add_executable(testRunner test.cpp)
target_link_libraries(testRunner sumLibrary08 gtest_main gmock_main)
