#include "Person.h"

#include <iostream>
/**
 * @brief default constructor with no name passed.
 */
Person::Person() {
  this->name = "";
}
/**
 * @brief default destructor.
 */
Person::~Person() = default;
/**
 * @brief default constructor with a strong passed.
 * @param _name: a string reference object
 * @return void
 */
Person::Person(std::string &_name) {
  this->name = _name;
}
/**
 * @brief Utility to set the name variable with a string.
 * @param name: a string reference object
 * @return void
 */
void Person::setName(std::string &name) {
  this->name = name;
}
/**
 * @brief Utility to ter the value of the stored name.
 * @return name from person object
 */
std::string &Person::getName() {
  return this->name;
}
/**
 * @brief Utility to print Hello and the name.
 * @return void
 */
void Person::sayHello() {
  std::cout << "Hello " << this->getName() << std::endl;
}
/**
 * @brief Utility to ask the Name from terminal and store the name
 *        in the name variable.
 * @return void
 */
void Person::askName() {
  std::string name;
  std::cout << "Please enter your Name: " << std::endl;
  std::cin >> name;
  this->setName(name);
}