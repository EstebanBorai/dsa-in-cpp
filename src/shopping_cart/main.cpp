#include <iostream>
#include "product.h"
#include "shopping_cart.h"

int main() {
	Product* first_product = new Product("1", "My first product", 15.50, 2);
	Product* second_product = new Product("2", "My second product", 25.99, 5);

	first_product -> println();

	ShoppingCart* my_cart = new ShoppingCart();

	my_cart -> println();

	my_cart -> add(first_product);
	my_cart -> add(second_product);

	my_cart -> println();

	delete first_product;
	delete second_product;

	return EXIT_SUCCESS;
}
