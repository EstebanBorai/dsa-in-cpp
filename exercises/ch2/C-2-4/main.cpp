#include "Line.h"
#include <string>
#include <iostream>

int main() {
	Line* l = new Line(3, 1);
	Line* a = new Line(4, 2, 3);

	Point* intersection = l -> intersect(a);

	intersection -> print();

	// Doesnt Work as Expected
	std::cout << l -> get_equation() << std::endl;

	delete l;
	delete a;

	return 0;
}
