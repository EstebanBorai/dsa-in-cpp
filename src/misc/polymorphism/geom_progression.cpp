#include "geom_progression.h"

GeomProgression::GeomProgression(long b) : Progression(1), base(b) {};

long GeomProgression::next_value() {
	cur *= base;

	return cur;
}
