#include <algorithm>
#include <cstdio>
#include <iostream>

int main() {
	char string[] = "abcdef";
	int totalPermutations = 0;

	do {
		std::puts(string);
		totalPermutations++;
	} while (std::next_permutation(string, string + sizeof(string) - 1));

	std::cout << "\nTotal Permutations: " << totalPermutations << std::endl;

	return 0;
}
