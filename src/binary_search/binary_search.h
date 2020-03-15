#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include <stdio.h>

int binary_search(char* arr, int total_items, int target) {
	int lowest = 0;
	int highest = total_items;


	while (lowest <= highest) {
		int middle = (lowest + highest) / 2;
		int guess = arr[middle];

		if (guess == target) {
			return middle;
		}

		if (guess > target) {
			highest = middle - 1;
		} else {
			lowest = middle + 1;
		}
	}

	return -1;
}

#endif
