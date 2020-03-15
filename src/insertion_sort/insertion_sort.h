#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

void insertion_sort(char* char_array, int total_elements) {
	for (int i = 1; i < total_elements; i++) {
		char current = char_array[i];
		int j = i - 1;

		while ((j >= 0) && (char_array[j] > current)) {
			char_array[j + 1] = char_array[j];
			j--;
		}

		char_array[j + 1] = current;
	}
}

#endif
