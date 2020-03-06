#include <iostream>

template <typename T>
T generic_min(T a, T b) {
	return (a < b ? a : b);
}

template <typename T>
T generic_sum(T a, T b) {
	return a + b;
}

int main() {
	std::cout << "Generic Sum\n" << std::endl;
	std::cout << generic_sum(10, 10) << std::endl;

	std::cout << "Generic Min\n" << std::endl;
	std::cout << generic_min(10, 5) << std::endl;
	std::cout << generic_min(1.20, 32.2) << std::endl;
}
