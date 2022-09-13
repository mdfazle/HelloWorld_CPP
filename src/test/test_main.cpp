#include <gtest/gtest.h>

#include "Person.h"

/**
 * @brief Construct a TEST object for checking
 *        constructor with passing a value
 *
 */
TEST(ConstructorCheckWithValue, BasicAssertions) {
  // Expect two strings not to be equal.
  std::string name = "TestName";
  std::shared_ptr<Person> person(new Person(name));
  // Expect equality.
  EXPECT_EQ(person->getName(), "TestName");
  // Expect non-equality.
  EXPECT_NE(person->getName(), "NOTTestName");
}

/**
 * @brief Construct a TEST object for checking
 *        constructor without passing a value
 *
 */
TEST(ConstructorCheckWithoutValue, BasicAssertions) {
  // Expect two strings not to be equal.
  std::string name = "TestName";
  std::shared_ptr<Person> person(new Person());
  person->setName(name);
  // Expect equality.
  EXPECT_EQ(person->getName(), "TestName");
  // Expect non-equality.
  EXPECT_NE(person->getName(), "NOTTestName");
}