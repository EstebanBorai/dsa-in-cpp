#include "credit_card.h"
#include <string>
#include "limit_exceeded_exception.h"
#include <iostream>

int main() {
	std::string name = "Esteban";
	std::string number = "1223-1222-12411";

	CreditCard* credit_card = new CreditCard(number, name, 1000, 500.00);

	credit_card -> println();

	try {
		credit_card -> charge(1000.00);
	} catch (LimitExceededException ex) {
		std::cout << ex.get_message() << std::endl;
	}

	credit_card -> println();

	credit_card -> charge(500.00);

	credit_card -> make_payment(1500.00);

	delete credit_card;
}
