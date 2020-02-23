#ifndef POINT_H
#define POINT_H

struct Point {
	double x;
	double y;

	void print();
	bool equals(Point * p);
}

#endif
