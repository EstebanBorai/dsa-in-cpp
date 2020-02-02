#include <iostream>

bool someEven(int* items, int size) {
  for (int i = 0; i < size; i++) {
    std::cout << items[i] << std::endl;
  }

  return false;
}

int main() {
  int items[5] = {2, 4, 6, 8, 10};

  someEven(items, 5);

  return 0;
}
