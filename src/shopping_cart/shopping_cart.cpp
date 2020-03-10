#include <string>
#include <vector>
#include <iostream>
#include "product.h"
#include "shopping_cart.h"

void ShoppingCart::add(Product* product) {
	float subtotal = product -> get_total();
	total += subtotal;

	items.push_back(product);
}

void ShoppingCart::remove(std::string product_id) {
	int index_of_product = 0;
	// Map through the shopping cart for a product matching the
	// provided product id
	for (int i = 0; i < items.size(); i++) {
		if (items[i] -> get_id() == product_id) {
			index_of_product = i;
			break;
		}
	}

	double subtotal = (items[index_of_product] -> get_total());
	total -= subtotal;

	items.erase(items.begin() + index_of_product);
}

void ShoppingCart::println() {
	std::cout << "=====================================" << std::endl;
	std::cout << "\tCart Resume" << std::endl;
	std::cout << "=====================================" << std::endl;

	for (int i = 0; i < items.size(); i++) {
		if (i != 0 && i != items.size()) {
			std::cout << "------------------------------------" << std::endl;
		}
		items[i] -> println();
	}

	std::cout << "=====================================" << std::endl;
	std::cout << "Total: " << total << "$" << std::endl;
}
