#include "Line.h"
#include <iostream>
#include <cmath>
#include "Point.h"
#include <string>
#include <cstdio>

void Line::build_equation(double a, double b) {
	char buff[100];

	if (b >= 0) {
  	snprintf(buff, sizeof(buff), "y = %.1fx + %.1f", a, b);
	} else {
		snprintf(buff, sizeof(buff), "y = %.1fx - %.1f", a, b);
	}

	Line::eq = buff;
}

void Line::build_equation(double a, double b, double c) {
	char buff[100];

	if (b >= 0) {
		snprintf(buff, sizeof(buff), "y = %.1f(%.1f) + %.1f", a, c, b);
	} else {
		snprintf(buff, sizeof(buff), "y = %.1f(%.1f) - %.1f", a, c, b);
	}

	Line::eq = buff;
}

Point* calc_line_point(double a, double b, double x) {
	// y = ax + b;
	double y = (a * x) + b;
	Point* p = new Point;

	p -> x = x;
	p -> y = y;

	return p;
}

Line::Line(double a, double b) {
	Line::p1 = calc_line_point(a, b, 0);
	Line::p2 = calc_line_point(a, b, 1);
	
	build_equation(a, b);
}

Line::Line(double a, double b, double x) {
	Line::p1 = calc_line_point(a, b, x);
	Line::p2 = calc_line_point(a, b, x + 1);

	build_equation(a, b, x);
}

Line::~Line() {
	delete Line::p1;
	delete Line::p2;
}

void Line::analyze() {
	Point p1 = (*Line::p1);
	Point p2 = (*Line::p2);

	Line::rise = (p2.y - p1.y);
	Line::run = (p2.x - p1.y);
	Line::slope = Line::rise / Line::run;
	
	if (std::isinf(slope)) {
		Line::direction = Verical;
	} else if (slope < 0) {
		Line::direction = Descending;
	} else if (slope > 0) {
		Line::direction = Ascending;
	} else {
		Line::direction = Horizontal;
	}
}

Point* Line::intersect(Line* l) {
	return new Point;
}
