#include <stdio.h>

struct Point {
	float x;
	float y;

	Point();
	Point(float x, float y);
	Point* clone(Point* p);
	virtual void print();
};

struct Point3D : Point {
	float z;

	Point3D();
	Point3D(float x, float y, float z);
	void print();
};


Point::Point() {
	this -> x = 0;
	this -> y = 0;
}

Point::Point(float x, float y) {
	this -> x = x;
	this -> y = y;
}

Point3D::Point3D() {
	this -> x = 0;
	this -> y = 0;
	this -> z = 0;
}

Point3D::Point3D(float x, float y, float z) {
	this -> x = x;
	this -> y = y;
	this -> z = z;
}

void Point::print() {
	printf("(%.2f, %.2f)\n", Point::x, Point::y);
}

void Point3D::print() {
	printf("(%.2f, %.2f, %.2f)\n", Point3D::x, Point3D::y, Point3D::z);
}

void move_x(Point* p, float steps) {
	p -> x = p -> x + steps;
}

void move_y(Point* p, float steps) {
	p -> y = p -> y + steps;
}

void move_z(Point3D* p, float steps) {
	p -> z = p -> z + steps;
}

int main() {
	Point* p1 = new Point();
	Point* p2 = new Point(1, 2);

	p1 -> print(); // (0.00, 0.00)
	p2 -> print(); // (1.00, 2.00)

	move_x(p1, 5.8);
	move_x(p2, -5);

	p1 -> print(); // (5.80, 0.00)
	p2 -> print(); // (-4.00, 2.00)

	move_y(p1, 3.5);
	move_y(p2, 2.2);

	p1 -> print(); // (5.80, 3.50)
	p2 -> print(); // (-4.00, 4.20)

	delete p1;
	delete p2;

	Point3D* o1 = new Point3D();
	Point3D* o2 = new Point3D(1, 2, 3);

	o1 -> print(); // (0.00, 0.00, 0.00)
	o2 -> print(); // (1.00, 2.00, 3.00)

	move_y(o1, 5);
	move_y(o1, 5);

	o1 -> print(); // (5.00, 5.00, 0.00)

	move_z(o2, 12);

	o2 -> print(); // (1.00, 2.00, 15.00)

	// moveY(p1, 3);  // Program does not complain about nullptr
	// p1 -> print(); // ERROR: [1]    31267 segmentation fault  ./a.out
	// Cleanup dynamically allocated memory
	delete o1;
	delete o2;

	return 0;
}
