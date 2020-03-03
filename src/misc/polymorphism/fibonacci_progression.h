#ifndef FIBONACCI_PROGRESSION_H
#define FIBONACCI_PROGRESSION_H

#include "progression.h"

class FibonacciProgression : public Progression {
	protected:
		long second;
		long prev;

		virtual long first_value();
		virtual long next_value();

	public:
		FibonacciProgression(long f = 0, long s = 1);
};

#endif
