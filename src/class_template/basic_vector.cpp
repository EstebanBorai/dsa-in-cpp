#include <iostream>
#include "basic_vector.h"

template <typename T>
void BasicVector<T>::println() {
	std::cout << capacity << std::endl; // <- this makes a segmentation fault [capacity = 1857009872]
	return;
	for (int i = 0; i < capacity; i++) {
		std::cout << a[i] << std::endl;
	}
}

template <typename T>
int BasicVector<T>::append(T value) {
	for (int i = 0; i < capacity; i++) {
		if (a[i] == NULL || a[i] == 0) {
			a[i] = value;

			return i;
		}

		return -1;
	}
}

// Declare possible instantiations
template class BasicVector<int>;
template class BasicVector<float>;
