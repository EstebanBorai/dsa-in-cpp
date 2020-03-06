#include <iostream>
#include "progression.h"

void Progression::print_progression(int n) {
	std::cout << first_value();

	for (int i = 2; i <= n; i++) {
		std::cout << ' ' << next_value();
	}

	std::cout << std::endl;
}

long Progression::first_value() {
	cur = first;
	return cur;
}

long Progression::next_value() {
	return ++cur;
}
