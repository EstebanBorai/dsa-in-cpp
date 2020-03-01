#ifndef LIMIT_EXCEEDED_EXCEPTION_H
#define LIMIT_EXCEEDED_EXCEPTION_H

#include <cstdio>
#include <string>

class LimitExceededException {
	private:
		int limit;
		double charge;

	public:
		LimitExceededException(int limit, double charge) : limit(limit), charge(charge) {}
		std::string get_message();
};

#endif
