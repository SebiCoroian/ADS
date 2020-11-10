#include <stddef.h>

#include "array-io.h"

void insertion_sort(int * arr, size_t len) {
	for (size_t j = 1; j < len; j++) {
		int key = arr[j];
		size_t i = j - 1;

		while (i >=0 && arr[i] > key) {
			arr[i+1] = arr[i];
			i = i - 1;
		}

		arr[i+1] = key;
	}
}