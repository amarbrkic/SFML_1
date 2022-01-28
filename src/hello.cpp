#include <iostream>
#include <string>

int main() {
  uint32_t firstNumber = 55;

  std::cout << firstNumber << "\n";

  auto& copyOfFirstNumber = firstNumber;
  copyOfFirstNumber = 77;

  std::cout << firstNumber << "\n";

  return EXIT_SUCCESS;
}