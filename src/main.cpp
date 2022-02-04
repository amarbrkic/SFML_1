// Copyright 2022 Amar Brkic

#include <iostream>

#include "../headers/stack.hpp"

int main() {
  Stack<int> stack1;
  stack1.push(3, 5, 5, 6);
  stack1.pop(2);
  stack1.print();
  return EXIT_SUCCESS;
}
