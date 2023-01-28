cmake_minimum_required(VERSION 3.0.0)
project(HelloWorld VERSION 0.1.0)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

get_filename_component(MAIN_PROJECT_DIR ../ ABSOLUTE)

set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${MAIN_PROJECT_DIR}/bin )
set( CMAKE_LIBRARY_OUTPUT_DIRECTORY ${MAIN_PROJECT_DIR}/lib )

set(INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)

set(SRC_HEADER_FILES ${INCLUDE_DIR}/Person/Person.h ${INCLUDE_DIR}/Human/Human.h)
add_executable(HelloWorld main.cpp Person.cpp ${SRC_HEADER_FILES})
target_include_directories(HelloWorld PRIVATE ${INCLUDE_DIR}/Person ${INCLUDE_DIR}/Human)

add_subdirectory(test)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)



