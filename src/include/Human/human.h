#include <string>

class Human {
 protected:
  std::string name;
  int age;
  std::string sex;

 public:
  virtual std::string getName() = 0;
  virtual int getAge() = 0;
  virtual std::string getSex() = 0;
};