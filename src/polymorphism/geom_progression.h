#ifndef GEOM_PROGRESSION_H
#define GEOM_PROGRESSION_H

#include "progression.h"

class GeomProgression : public Progression {
	protected:
		long base;

		virtual long next_value();

	public:
		GeomProgression(long b = 2);
};

#endif
