#include "arith_progression.h"

ArithProgression::ArithProgression(long i) : Progression(), inc(i) {};

long ArithProgression::next_value() {
	cur += inc;

	return cur;
}
