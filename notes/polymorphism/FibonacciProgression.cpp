#include <iostream>
#include "FibonacciProgression.h"

FibonacciProgession::FibonacciProgession(long f, long s) : Progression(f), second(s), prev(second - first) {}

long FibonacciProgession::firstValue() {
  cur = first;
  prev = second - first;

  return cur;
}

long FibonacciProgession::nextValue() {
  long temp = prev;
  prev = cur;
  cur += temp;
  
  return cur;
}
