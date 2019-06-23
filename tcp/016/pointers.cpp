#include <iostream>

#define print(x) std::cout << x << std::endl

int main () {
	int var = 8;
	int* ptr = &var;

	print(var); // variable of type int
	print(ptr); // int* memory address for an integer
	print(*ptr); // access to the value of the pointer
	print(&var); // memory address of certain variable

	std::cin.get();
}
