#include <iostream>
#include <stdlib.h>
#include <time.h>

void fillWithRange(int items[], int end) {
  int i = 0;

  for (i; i < end; i++) {
    items[i] = i + 1;
  }
}

void shuffle(int items[], int top) {
  int i = 0;
  srand(time(NULL));

  for (i; i < top; i++) {
    int random = 0 + (rand() % static_cast<int>(top - 0 + 1));
    int will = items[i];
  
    items[i] = items[random];
    items[random] = will;
  }
}

int main() {
  int const SIZE = 52;

  int list[52];
  
  fillWithRange(list, SIZE);
  shuffle(list, SIZE);

  int i = 0;

  std::cout << "Array Size: " << sizeof(list) / sizeof(int) << std::endl;

  for (i; i < 52; i++) {
    std::cout << "Index: " << i << " Value: " << list[i] << std::endl;
  }
}
