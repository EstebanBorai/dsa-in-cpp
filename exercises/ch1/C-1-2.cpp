#include <iostream>

bool isEven(int m) {
  return m % 2 == 0; 
}

bool someEven(int* arr, int size) {
  int i = 0;

  for (i; i < size; i++) {
    bool const hasNext = (i + 1) < size;

    if (hasNext) {
      bool const isE = isEven(arr[i] * arr[i + 1]);

      if (isE) {
        return true;
      }
    }
  }

  return false;
}

int main() {
  int items[5] = {2, 4, 6, 8, 10};

  bool isSomeEven = someEven(items, 5);

  std::cout << isSomeEven << std::endl;

  return 0;
}
