#ifndef ARITH_PROGRESSION_H
#define ARITH_PROGRESSION_H

#include "progression.h"

class ArithProgression : public Progression {
	protected:
		long inc;

		virtual long next_value();

	public:
		ArithProgression(long i = 1);
};

#endif
