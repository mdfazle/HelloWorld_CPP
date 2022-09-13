#include <string>

/**
 * @class Person
 * @brief Implements a person class with the person's name.
 */
class Person {
 private:
  std::string name;

 public:
  Person();
  ~Person();
  Person(std::string &name);
  std::string &getName();
  void setName(std::string &name);
  void sayHello();
  void askName();
};