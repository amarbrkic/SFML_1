#include <iostream>
#include <string>

int main() {
  for (auto i : "hello world") {
    std::cout << i << "\n";
  }

  return EXIT_SUCCESS;
}