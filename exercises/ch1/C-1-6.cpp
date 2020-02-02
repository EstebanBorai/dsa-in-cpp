#include <iostream>

/**
 * factorial calculates the factorial value of "n"
 * 
 */
float factorial(float n) {
  int i = 1;
  float factorial = 1;

  for (i; i <= int(n); i++) {
    factorial=factorial * i;
  }

  return factorial;
}

/**
 * combinations calculates the total existent combinations
 * of a given total of elements and an expected set
 * to combine
 * 
 */
int combinations(int totalElements, int objects) {
  return int(factorial(totalElements)/(factorial(objects) * factorial(totalElements - objects)));
}

int main() {
  std::cout << combinations(6, 6) << std::endl;

  return 0;
}
