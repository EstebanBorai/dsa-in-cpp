#include <iostream>
#include "FibonacciProgression.h"

long FibonacciProgression::next() {
  if (last == 0 && before == 0 && current == 0) {
    last = 0;
    before = 1;
    current = 1;

    // Append items of the initial history
    history.push_back(0);
    history.push_back(1);
    history.push_back(1);
  } else {
    last = before;
    before = current;
    current = before + last;

    history.push_back(current);
  }
};

void FibonacciProgression::print() {
  for (int i = 0; i < history.size(); i++) {
    std::cout << history[i] << std::endl;
  }
}