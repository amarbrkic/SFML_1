#include <vector>

template <typename T> class Stack {
private:
  std::vector<T> mem;

public:
  T lastElement;
  // void pop(T element);
  void push(T element) {
    mem.push_back(element);
    lastElement = element;
  }
};