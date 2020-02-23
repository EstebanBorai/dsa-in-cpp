#include <iostream>
#include "Progression.h"

void Progression::printProgression(int n) {
	std::cout << firstValue();
	
	for (int i = 2; i<= n; i++) {
		std::cout << ' ' << nextValue();
	}

	std::cout << std::endl;
}

/**
 * Resets the progression to the first value
 */
long Progression::firstValue() {
	cur = first;
	return cur;
}

/**
 * Advance the progression to the next value
 */
long Progression::nextValue() {
	return ++cur;
}
