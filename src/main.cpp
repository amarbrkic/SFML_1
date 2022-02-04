// Copyright 2022 Amar Brkic

#include <iostream>

#include "../headers/stack.hpp"

int main() {
  Stack<int> stack1;
  stack1.push(2,5, 6);
  stack1.print();
  return EXIT_SUCCESS;
}
