#include "Person.h"

#include <iostream>

/**
 * @brief default constructor with no name passed.
 */
Person::Person() : Human("", 0, ""){};
/**
 * @brief default destructor.
 */
Person::~Person() = default;
/**
 * @brief default constructor with a strong passed.
 * @param _name: a string reference object
 * @return void
 */
Person::Person(string _name, int _age, string _sex, string _country)
    : country(_country), Human(_name, _age, _sex) {
}
/**
 * @brief Utility to set the name variable with a string.
 * @param name: a string reference object
 * @return void
 */
void Person::setName(string _name) {
  name = _name;
}
/**
 * @brief Utility to ter the value of the person's age.
 * @return age from person object
 */
int Person::getAge() {
  return age;
}
/**
 * @brief Utility to ter the value of the stored Sex variage.
 * @return sex from person object
 */
string Person::getSex() {
  return sex;
}
/**
 * @brief Utility to ter the value of the stored name.
 * @return name from person object
 */
string Person::getName() {
  return name;
}
/**
 * @brief Utility to ter the value of the stored Country.
 * @return Country from person object
 */
string Person::getCountry() {
  return country;
}