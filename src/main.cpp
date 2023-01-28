#include <iostream>
#include <memory>

#include "Person.h"

int main(int, char **) {
  shared_ptr<Person> person(new Person("Bob", 21, "male", "USA"));
  cout << "Hello " << person->getName() << endl;
}