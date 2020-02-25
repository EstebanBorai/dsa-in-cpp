#include <stdio.h>
#include <math.h>
#include <limits>
#include "Point.h"

void Point::print() {
	printf("(%.2f, %.2f)\n", Point::x, Point::y);
}

bool Point::equals(Point* p) {
	double const EPSILON = std::numeric_limits<double>::epsilon();

	return abs(x - p -> x) < EPSILON && abs(Point::y - p -> y) < EPSILON;
}
