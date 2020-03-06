#include "credit_card.h"
#include "limit_exceeded_exception.h"
#include <iostream>

bool CreditCard::charge(double amount) {
	double total_charge = balance + amount;
	bool is_charge_avoid_limit = (balance + amount) > limit;

	if (is_charge_avoid_limit) {
		throw LimitExceededException(limit, total_charge);
	}

	return true;
}

void CreditCard::make_payment(double amount) {
	// Attempt to pay with the current balance first
	double balance_due = balance - amount;

	if (balance_due > 0) {
		// Attempt to pay the difference with credit
		try {
			charge(balance_due);
		} catch (LimitExceededException ex) {
			std::cout << ex.get_message() << std::endl;
			return;
		}

		// Update balance
		balance -= amount;
	}
}

void CreditCard::println() {
	std::cout << "Credit Card: " << name << "\t" << number << std::endl;
	std::cout << "Balance: " << balance << std::endl;
	std::cout << "Limit: " << limit << std::endl; 
}
