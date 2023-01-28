enable_testing()

set( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${MAIN_PROJECT_DIR}/bin/test )


set(INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(
  PERSON_HEADER_FILES_DIR 
    ${INCLUDE_DIR}/Person/ 
    ${INCLUDE_DIR}/Human/
    )
     
set(PERSON_CPP_FILES ${PROJECT_SOURCE_DIR}/Person.cpp)

add_executable(
  test_main
  test_main.cpp
  ${PERSON_CPP_FILES}
)
target_include_directories(test_main 
    PRIVATE ${PERSON_HEADER_FILES_DIR}
)
target_link_libraries(
  test_main
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_main)