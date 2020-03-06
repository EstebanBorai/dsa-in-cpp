#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

struct Product {
	std::string id;
	std::string description;
	float price;
	int quantity;

	Product(std::string id, std::string description, float price, int quantity = 1) :
		id(id),
		description(description),
		price(price),
		quantity(quantity) {};

	void println();
};

#endif
