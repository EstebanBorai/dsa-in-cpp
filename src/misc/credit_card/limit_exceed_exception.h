#ifndef LIMIT_EXCEED_EXCEPTION_H
#define LIMIT_EXCEED_EXCEPTION_H

#include <cstdio>
#include <string>

class LimitExceedException {
	private:
		int limit;
		double charge;

	public:
		LimitExceedException(int limit, double charge) : limit(limit), charge(charge) {}
		std::string get_message();
};

#endif
