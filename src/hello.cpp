#include <iostream>
#include <array>
#include <algorithm>

class Person {
private:
  uint age = 0;

public:
  Person(uint);
  ~Person();
  uint getAge();
};

Person::Person(uint age) { this->age = age; }

Person::~Person() {}

uint Person::getAge() { return this->age; }

int main() {
  uint temp;
  std::cin >> temp;

  Person* Amar = new Person(temp);
  std::cout << Amar->getAge() << "\n";

  return EXIT_SUCCESS;
}