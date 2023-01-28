#include <gtest/gtest.h>

#include "Person.h"

/**
 * @brief Construct a TEST object for checking
 *        constructor with passing a value
 *
 */
TEST(ConstructorCheckWithValue, BasicAssertions) {
  // Expect two strings not to be equal.
  string name = "TestName";
  int age = 21;
  string sex = "male";
  string country = "USA";
  shared_ptr<Person> person(new Person(name, age, sex, country));
  // Expect equality.
  EXPECT_EQ(person->getName(), "TestName");
  EXPECT_EQ(person->getAge(), age);
  EXPECT_EQ(person->getSex(), "male");
  EXPECT_EQ(person->getCountry(), "USA");
  // Expect non-equality.
  EXPECT_NE(person->getName(), "NOTTestName");
  EXPECT_NE(person->getAge(), age + 1);
  EXPECT_NE(person->getSex(), "female");
  EXPECT_NE(person->getCountry(), "NOT USA");
}

/**
 * @brief Construct a TEST object for checking
 *        constructor without passing a value
 *
 */
TEST(ConstructorCheckWithoutValue, BasicAssertions) {
  // Expect two strings not to be equal.
  string name = "TestName";
  shared_ptr<Person> person(new Person());
  person->setName(name);
  // Expect equality.
  EXPECT_EQ(person->getName(), "TestName");
  EXPECT_EQ(person->getAge(), 0);
  EXPECT_EQ(person->getSex(), "");
  EXPECT_EQ(person->getCountry(), "None");
  // Expect non-equality.
  EXPECT_NE(person->getName(), "NOTTestName");
  EXPECT_NE(person->getAge(), 1);
  EXPECT_NE(person->getSex(), "male");
  EXPECT_NE(person->getCountry(), "NOT NONE");
}