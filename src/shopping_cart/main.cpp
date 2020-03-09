#include <iostream>
#include "product.h"
#include "shopping_cart.h"

int main() {
	Product* first_product = new Product("1", "My first product", 15.50, 2);

	first_product -> println();

	ShoppingCart* my_cart = new ShoppingCart();

	my_cart -> println();

	my_cart -> add(first_product);

	my_cart -> println();

	return EXIT_SUCCESS;
}
