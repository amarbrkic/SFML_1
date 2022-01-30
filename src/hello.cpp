#include <iostream>
#include <array>

class Node{
  
};

int main() {
  std::array<uint, 5> arr{5, 4, 3, 2, 1};

  for (uint* i = arr.begin(); i != arr.end(); i++) {
    std::cout << "Number " << *i;
    std::cout << " on the location " << i << "\n";
  }

  return EXIT_SUCCESS;
}