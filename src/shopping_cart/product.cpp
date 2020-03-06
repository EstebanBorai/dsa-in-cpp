#include <iostream>
#include <string>
#include "product.h"

void Product::println() {
	std::cout << "ID:           " << id << std::endl;
	std::cout << "Description:  " << description << std::endl;
	std::cout << "Price:        " << price << "$" << std::endl;
	std::cout << "Quantity:     " << quantity << std::endl;
}
