#include <iostream>

class Person {
private:
  int age;

public:
  void setAge(int age) { this->age = age; }
  int getAge() { return this->age; }
};

class Worker : public Person {};

int main() {
  Worker* Amar = new Worker();

  Amar->setAge(19);
  std::cout << Amar->getAge() << "\n";
  std::cout << "";

  return EXIT_SUCCESS;
}