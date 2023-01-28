#pragma once

#include <string>
using namespace std;

class Human {
 protected:
  string name;
  int age;
  string sex;
  Human(){};
  Human(string _name, int _age, string _sex) {
    name = _name;
    sex = _sex;
    age = _age;
  };
  ~Human(){};

 public:
  virtual string getName() = 0;
  virtual int getAge() = 0;
  virtual string getSex() = 0;
};