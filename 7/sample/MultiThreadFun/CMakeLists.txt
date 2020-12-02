cmake_minimum_required(VERSION 2.7)

project(multithreadfun)

add_definitions(-std=gnu++0x)
list(APPEND CMAKE_CXX_FLAGS "-pthread -std=c++0x ${CMAKE_CXX_FLAGS} -g -ftest-coverage -fprofile-arcs")

add_executable(mproc_ovlord main.cpp)
add_executable(mproc_worker main2.cpp)

install(TARGETS mproc_ovlord mproc_worker RUNTIME DESTINATION bin)
