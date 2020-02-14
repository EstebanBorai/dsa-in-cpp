#include <iostream>
#include "FibonacciProgression.h"

int main() {
  FibonacciProgression fib = FibonacciProgression();

  fib.print();
  fib.next();
  fib.print();

  return 0;
}