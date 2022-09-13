enable_testing()

set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${MAIN_PROJECT_DIR}/bin/test )


set(INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(PERSON_HEADER_FILES ${INCLUDE_DIR}/Person/Person.h)
set(PERSON_CPP_FILES ${PROJECT_SOURCE_DIR}/Person.cpp)

add_executable(
  test_main
  test_main.cpp
  ${PERSON_CPP_FILES} ${PERSON_HEADER_FILES}
)
target_include_directories(test_main 
    PRIVATE ${INCLUDE_DIR}/Person
)
target_link_libraries(
  test_main
  GTest::gtest_main
  ${INCLUDE_DIR}/Person
)

include(GoogleTest)
gtest_discover_tests(test_main)