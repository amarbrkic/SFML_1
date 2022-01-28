#include <iostream>
#include <array>
#include <algorithm>

class Person {
private:
  uint8_t age=8;

public:
  Person(uint8_t);
  ~Person();
  uint8_t getAge();
};

Person::Person(uint8_t age) { this->age = age; }

Person::~Person() {}

uint8_t Person::getAge() { return this->age; }

int main() {
  Person* Amar = new Person(55);

  std::cout << Amar->getAge() << "\n";

  return EXIT_SUCCESS;
}