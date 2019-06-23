#include <iostream>

#define print(x) std::cout << x << std::endl;

struct Vect2
{
	float x, y;
};

void moveVector(Vect2& vect, float x, float y)
{
	vect.x = x;
	vect.y = y;
}

void printVectorPosition(Vect2& vect)
{
	print(vect.x);
	print(vect.y);
}

int main ()
{
	struct Vect2 v;

	v.x = 0.5f;
	v.y = 1.0f;

	printVectorPosition(v);
	// 0.5
	// 1.0

	moveVector(v, 1.5f, 2.2f);
	
	printVectorPosition(v);
	// 1.5
	// 2.2
}