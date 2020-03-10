#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
	private:
		std::string id;
		std::string description;
		float price;
		int quantity;

	public:
		Product(std::string id, std::string description, float price, int quantity = 1) :
			id(id),
			description(description),
			price(price),
			quantity(quantity) {};

		float get_total();
		void println();

		std::string get_id() {
			return this -> id;
		}

		std::string get_description() {
			return this -> description;
		}

		float get_price() {
			return this -> price;
		}

		int get_quantity() {
			return this -> quantity;
		}
};

#endif
