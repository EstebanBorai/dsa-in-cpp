#include <stdio.h>
#include <stdlib.h>
#include "binary_search.h"

void print_array(char* arr_zero, int arr_size) {
	for (int i = 0; i < arr_size; i++) {
		printf("%d\t", arr_zero[i]);
	}

	printf("\n");
}

int main(int argc, char* argv[]) {
	char* target_char = argv[1];
	int const TARGET = atoi(target_char);

	int const TOTAL_ITEMS = 10;
	
	char items[10] = { 0, 1, 4, 6, 8, 11, 21, 33, 44, 88 };

	int target_index = binary_search(items, TOTAL_ITEMS, TARGET);

	print_array(items, TOTAL_ITEMS);
	printf("Target %d is in index %d\n", TARGET, target_index);
}
