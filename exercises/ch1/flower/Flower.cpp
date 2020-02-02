#include "Flower.h"

Flower::Flower(const std::string& name, int pedals, double price = 0) {
  Flower::name = name;
  Flower::pedals = pedals;
  Flower::price = price;
}
