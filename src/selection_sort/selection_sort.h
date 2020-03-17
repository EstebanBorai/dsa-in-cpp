#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

int find_smallest(char* arr, int arr_size) {
	int smallest = arr[0];
	int index = 0;
	
	for (int i = 0; i < arr_size; i++) {
		if (arr[i] < smallest) {
			smallest = arr[i];
			index = i;
		}
	}

	return index;
}

void selection_sort(char* arr, int arr_size) {
	if (arr_size == 0) {
		return;
	}

	char* sorted[arr_size];
	
	for (int i = 0; i < arr_size; i++) {
		int smallest_index = find_smallest(arr, arr_size);

		sorted[i];
	}
}

#endif
