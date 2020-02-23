#ifndef ARITH_PROGRESSION_H
#define ARITH_PROGRESSION_H

#include "Progression.h"

class ArithProgression : public Progression {
	public:
		ArithProgression(long i = 1);

	protected:
		virtual long nextValue();

	protected:
		long inc;
};

#endif
