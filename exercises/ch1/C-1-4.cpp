#include <iostream>
#include <vector>

#define println(x) std::cout << x << std::endl;

void printOdd(std::vector<int> v) {
	int i = 0;

	for (i; i < v.size(); i++) {
		if (v[i] % 2 != 0) {
			println(v[i]);
		}
	}
}

int main() {
	int items[] = {1, 2, 3, 2, 5};
	std::vector<int> v (items, items + sizeof(items) / sizeof(int));

	printOdd(v);

	return 0;
}
