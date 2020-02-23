#include <iostream>
#include <vector>

std::vector<int> fromRange(int a, int b) {
	std::vector<int> v;

	for (a; a <= b; a++) {
		v.push_back(a);
	}

	return v;
}

void multiply(std::vector<int>* t, std::vector<int> x, std::vector<int> y) {
	if (x.size() != y.size()) {
		std::cout << "Couple vectors must have the same size" << std::endl;
	} else {
		int i = 0;

		for (i; i < x.size(); i++) {
			t -> push_back(x[i] * y[i]);
		}
	}
}

void print(std::vector<int>* v) {
	int i = 0;

	for (i; i < v -> size(); i++) {
		std::cout << v -> at(i) << std::endl;
	}
}

int main() {
	std::vector<int> a = fromRange(1, 5);
	std::vector<int> b = fromRange(6, 10);

	std::vector<int>* multiplied = new std::vector<int>();

	multiply(multiplied, a, b);

	print(multiplied);

	delete multiplied;

	return 0;
}
