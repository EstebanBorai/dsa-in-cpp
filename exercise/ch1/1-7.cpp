#include <iostream>

int sumLeft(int n) {
  int sum = 0;

  while (n > 0) {
    sum += n;
    n--;
  }

  return sum;
}

int main() {
  std::cout << sumLeft(2) << std::endl;
  return 0;
}
