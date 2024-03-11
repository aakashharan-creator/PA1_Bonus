cmake_minimum_required(VERSION 3.12) # version can be different

project(my_cpp_project) #name of your project

enable_testing() #to  discover tests in test explorer 

add_subdirectory(googletest) # add googletest subdirectory

include_directories(googletest/include) # this is so we can #include <gtest/gtest.h>

add_executable(infix_test infix_test.cpp) # add this executable

target_link_libraries(infix_test PRIVATE gtest) # link google test to this executable

include(GoogleTest)
gtest_discover_tests(infix_test) # discovers tests by asking the compiled test executable to enumerate its tests