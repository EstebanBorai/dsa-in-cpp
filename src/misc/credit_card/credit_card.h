#ifndef CREDIT_CARD_H
#define CREDIT_CARD_H

#include <string>

class CreditCard {
	private:
		std::string number;
		std::string name;
		int limit;
		double balance;

	public:
		CreditCard(
			const std::string& number,
			const std::string& name,
			int limit,
			double balance = 0
		) : number(number),
				name(name),
				limit(limit),
				balance(balance) {};

		std::string get_number() const {
			return number;
		}

		std::string get_name() const {
			return name;
		}

		int get_limit() const {
			return limit;
		}

		double get_balance() const {
			return balance;
		}

		bool charge(double ammount);
		void make_payment(double payment);
		void println();
};

#endif
