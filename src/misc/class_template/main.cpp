#include <iostream>
#include <string>
#include "basic_vector.h"

int main() {
	BasicVector<int> int_vector(5);

	int_vector[0] = 1;

	int_vector.append(2);
	int_vector.append(3);

	int_vector.println();

	return EXIT_SUCCESS;
}
