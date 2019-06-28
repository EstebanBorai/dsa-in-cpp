#include <iostream>
#include <fstream>

int main()
{
	std::ofstream file;
	file.open("test.txt");
	file << "Hello from C++!";
	file.close();
}
