#ifndef LINE_H
#define LINE_H

#include "Point.h"

class Line {
	public:
		Line(double a, double b);
		Line(double a, double b, double x);
		~Line();
		Point* intersect(Line* l);

	private:
		Point* firstPoint;
		Point* secondPoint;
};

#endif
