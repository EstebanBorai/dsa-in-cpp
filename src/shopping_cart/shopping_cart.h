#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H
#include <vector>
#include <string>
#include "product.h"

class ShoppingCart {
	private:
		double total;
		std::vector<Product*> items;

	public:
		ShoppingCart() : total(0.0) {};

		void add(Product* p);
		void remove(std::string product_id);
		void println();
};

#endif
