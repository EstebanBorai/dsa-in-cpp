#include <iostream>

#define print(x) std::cout << x << std::endl

// Access Reference with pointers
void increment(int* value)
{
	// parenthesis helps to dereference the memory address and then
	// increments the value
	(*value)++;
}

// Access Reference giving a reference
void incrementByReference(int& value)
{
	value++;
}

int main ()
{
	int a = 5;

	print(a); // 5

	int& ref = a; // int& -> reference of integer

	print(a); // 5

	ref = 2;

	print(ref); // 2
	print(a); // 2

	increment(&a);
	print(a); // 3

	// if we call incrementByReference now
	// the value of the integer should be 4
	incrementByReference(ref);
	print(a); // 4
}