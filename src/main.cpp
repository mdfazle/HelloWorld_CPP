#include <iostream>
#include <memory>

#include "Person.h"

int main(int, char **) {
  std::shared_ptr<Person> person(new Person("Bob", 21, "male", "USA"));
  std::cout << "Hello " << person->getName() << std::endl;
}