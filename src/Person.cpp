#include "Person.h"

#include <iostream>
/**
 * @brief default constructor with no name passed.
 */
Person::Person() {
  name = "";
  age = 0;
  sex = "";
};
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
    : country(_country) {
  name = _name;
  age = _age;
  sex = _sex;
}
/**
 * @brief Utility to set the name variable with a string.
 * @param name: a string reference object
 * @return void
 */
void Person::setName(std::string _name) {
  this->name = _name;
}
/**
 * @brief Utility to ter the value of the person's age.
 * @return age from person object
 */
int Person::getAge() {
  return this->age;
}
/**
 * @brief Utility to ter the value of the stored Sex variage.
 * @return sex from person object
 */
std::string Person::getSex() {
  return this->sex;
}
/**
 * @brief Utility to ter the value of the stored name.
 * @return name from person object
 */
std::string Person::getName() {
  return this->name;
}