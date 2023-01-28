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
  int age = 21;
  std::string sex = "male";
  std::string country = "USA";
  std::shared_ptr<Person> person(new Person(name, age, sex, country));
  // Expect equality.
  EXPECT_EQ(person->getName(), "TestName");
  EXPECT_EQ(person->getAge(), age);
  EXPECT_EQ(person->getSex(), "male");
  // Expect non-equality.
  EXPECT_NE(person->getName(), "NOTTestName");
  EXPECT_NE(person->getAge(), age + 1);
  EXPECT_NE(person->getSex(), "female");
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
  EXPECT_EQ(person->getAge(), 0);
  EXPECT_EQ(person->getSex(), "");
  // Expect non-equality.
  EXPECT_NE(person->getName(), "NOTTestName");
  EXPECT_NE(person->getAge(), 1);
  EXPECT_NE(person->getSex(), "male");
}