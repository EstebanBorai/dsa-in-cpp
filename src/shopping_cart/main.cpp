#include <iostream>
#include "product.h"

int main() {
	Product* first_product = new Product("1", "My first product", 15.50);

	first_product -> println();

	return EXIT_SUCCESS;
}
