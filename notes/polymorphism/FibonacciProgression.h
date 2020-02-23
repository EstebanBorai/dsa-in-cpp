#ifndef FIBONACCI_PROGRESSION_H
#define FIBONACCI_PROGRESSION_H

#include "Progression.h"

class FibonacciProgession : public Progression {
	public:
		FibonacciProgession(long f = 0, long s = 1);
	protected:
		virtual long firstValue();
		virtual long nextValue();
	protected:
		long second;
		long prev;
};

#endif
