#include <iostream>

bool isMultiple(long n, long m) {
	// Takes only positive values
	if (n < 0 || m < 0) {
		return false;
	}

	if (n % m == 0) {
		return true;
	}

	return false;
}

int main() {
	std::cout << isMultiple(3, 3) << std::endl;

	return 0;
}
