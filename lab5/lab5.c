#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#include "array-io.h"

/**
 * void read_array(int * arr, size_t len)
 *
 * Read an array from stdin.
 *
 * @arr - pointer to array
 * @len - size of array
 */
void read_array(int * arr, size_t len);

/**
 * void print_array(int * arr, size_t len)
 *
 * Print an array to stdout.
 *
 * @arr - pointer to array
 * @len - size of array
 */
void print_array(int * arr, size_t len);

int main(int argc, char const *argv[]) {
	int len = 0;
	scanf("%d", &len);
	
	int * arr = malloc(len * sizeof(int));	

	read_array(arr, (size_t) len);
	insertion_sort(arr, (size_t) len);
	print_array(arr, (size_t) len);

	return 0;
}

void read_array(int * arr, size_t len) {
	for (size_t i = 0; i < len; i++) {
		int value = 0;
		scanf("%d", &value);
		arr[i] = value;
	}
}

void print_array(int * arr, size_t len) {
	for (size_t i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
}