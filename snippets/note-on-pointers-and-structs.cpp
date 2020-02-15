#include <iostream>
#include <string>

#define print(x) std::cout << x << std::endl;

struct Product {
  std::string id;
  float price;
  int quantity;

  void create(std::string id, float price, int quantity);
  void printp();
};

void Product::create(std::string id, float price, int quantity) {
  Product::id = id;
  Product::price = price;
  Product::quantity = quantity;
}

void Product::printp() {
  print(">>>>>>>>>>>>>>>>>>>");
  print(id);
  print(price);
  print(quantity);
  print(">>>>>>>>>>>>>>>>>>>");
}

void add(int* number) {
  *number += 1;
}

void add(Product* p, int quantity) {
  p -> quantity = quantity;
  p -> price = (p -> price) * quantity;
}

int main() {
  int* number = new int;

  print(number);
  print(&number);
  print(*number);

  number++;

  print(number);
  print(&number);
  print(*number);

  *number++;

  print(number);
  print(&number);
  print(*number);

  *number += 1;

  print(number);
  print(&number);
  print(*number);

  add(number);

  print(number);
  print(&number);
  print(*number);

  // Introduce struct
  Product* p = new Product;
  Product* p2 = new Product;

  p -> create("My first product", 150.50, 1);
  p2 -> create("My second product", 99.99, 1);

  p -> printp();

  add(p, 2);

  p -> printp();
  p2 -> printp();
}
