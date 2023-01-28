#include <string>

#include "human.h"

using namespace std;

/**
 * @class Person
 * @brief Implements a person class with the person's name.
 */
class Person : private Human {
 private:
  string country = "None";

 public:
  Person();
  ~Person();
  Person(string _name, int _age, string _sex, string _country);
  string getName() override;
  int getAge() override;
  string getSex() override;
  void setName(string _name);
  string getCountry();
};