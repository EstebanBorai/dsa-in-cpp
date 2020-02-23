#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

/**
 * Reads a file and outputs its contents
 *
 */
void readFile() {
	std::ifstream infile("C-2-1.cpp");
	std::string line;

	while(std::getline(infile, line)) {
		std::istringstream iss(line);

		std::cout << iss.str() << std::endl;
	}
}

int main() {
	readFile();

	return 0;
}
