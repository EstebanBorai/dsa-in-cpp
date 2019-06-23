#include <iostream>

#define print(x) std::cout << x << std::endl

int main () {
	char* buffer = new char[8]; // creates a block of memory with 8bytes of size
	memset(buffer, 0, 8);

	delete[] buffer; // release the memomry used by buffer (8bytes)
	std::cin.get();
}
