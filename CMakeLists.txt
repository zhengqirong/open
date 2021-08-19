cmake_minimum_required (VERSION 2.8)

project(demo)

#set (LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories (inc)

find_library(TESTFUNC_LIB testFunc HINTS lib)

set (SRCList src/main.cpp)

add_executable(main2 ${SRCList})
#add_library(testFunc SHARED ${SRCList})

target_link_libraries(main2 ${TESTFUNC_LIB})
