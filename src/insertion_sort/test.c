#include <stdio.h>
#include "insertion_sort.h"

void print_array(char* arr_zero, int arr_size) {
	for (int i = 0; i < arr_size; i++) {
		printf("%d\t", arr_zero[i]);
	}

	printf("\n");
}

int main() {
	char items[10] = { 0, 1, 4, 6, 2, 11, 21, 33, 15, 10 };
	print_array(items, 10);

	insertion_sort(items, 10);

	print_array(items, 10);

	return 0;
}
