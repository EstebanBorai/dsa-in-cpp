#ifndef LINE_H
#define LINE_H

#include "Point.h"
#include <string>

enum LineDirection {
	Horizontal,
	Verical,
	Ascending,
	Descending
};

class Line {
	public:
		Line(double a, double b);
		Line(double a, double b, double x);
		~Line();
		Point* intersect(Line* l);
		void analyze();

		std::string get_equation() {
			std::string e = eq;
			return e;
		};

	private:
		Point* p1;
		Point* p2;
		char* eq;
		LineDirection direction;
		double rise;  // y2 - y1
		double run;   // x2 - x1
		double slope; // rise / run

		void build_equation(double a, double b);
		void build_equation(double a, double b, double c);
};

#endif
