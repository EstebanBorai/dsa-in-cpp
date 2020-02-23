#include "Line.h"
#include "Point.h"

Point* calcLinePoint(double a, double b, double x) {
	// y = ax + b;
	double y = (a * x) + b;
	Point* p = new Point;

	p -> x = x;
	p -> y = y;

	return p;
}

Line::Line(double a, double b) {
	Line::firstPoint = calcLinePoint(a, b, 0);
	Line::secondPoint = calcLinePoint(a, b, 1);
}

Line::Line(double a, double b, double x) {
	Line::firstPoint = calcLinePoint(a, b, x);
	Line::secondPoint = calcLinePoint(a, b, x + 1);
}

Line::~Line() {
	delete Line::firstPoint;
}

Point* Line::intersect(Line* l) {}
