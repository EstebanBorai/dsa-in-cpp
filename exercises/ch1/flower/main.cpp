#include <iostream>
#include "Flower.h"

#define println(x) std::cout << x << std::endl;

int main() {
  Flower myFlower = Flower("Cyclamen", 4, 100.50);

  println(myFlower.getName());
  println(myFlower.getPedals());
  println(myFlower.getPrice());
}
