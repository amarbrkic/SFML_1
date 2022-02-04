// Copyright 2022 Amar Brkic

#include <iostream>

#include "../headers/stack.hpp"

int main() {
  Stack<int> stack1;
  stack1.push(5);
  std::cout << stack1.lastElement << "\n";
  stack1.push(6);
  std::cout << stack1.lastElement << "\n";
  return EXIT_SUCCESS;
}
