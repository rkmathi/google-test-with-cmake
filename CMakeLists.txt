cmake_minimum_required(VERSION 3.0)
project(hoge CXX)


### Files
set(include_dirs
  ${CMAKE_CURRENT_LIST_DIR}/include
)
file(GLOB_RECURSE lib_files
  ${CMAKE_CURRENT_LIST_DIR}/lib/*.cc
)


### Main target
set(target hoge-main)
add_executable(${target}
  ${CMAKE_CURRENT_LIST_DIR}/src/main.cc
  ${lib_files}
)
target_include_directories(${target} PUBLIC ${include_dirs})


### Test target
enable_testing()
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/deps/googletest)
set(target hoge-test)
add_executable(${target}
  ${CMAKE_CURRENT_LIST_DIR}/test/test-main.cc
  ${lib_files}
)
target_include_directories(${target} PUBLIC ${include_dirs})
target_link_libraries(${target} PUBLIC
  gmock
  gtest
)
