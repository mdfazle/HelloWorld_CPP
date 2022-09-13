#include <iostream>
#include <memory>

#include "Person.h"

int main(int, char **) {
  std::shared_ptr<Person> person(new Person());
  person->askName();
  std::cout << "Hello " << person->getName() << std::endl;
}