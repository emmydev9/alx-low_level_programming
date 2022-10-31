#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	for (i = 0; i < size; i++) {
		printf("Value checked array[%ld] = [%d]\n", i, *array);
		if (*array == value) {
			return i;
		}
		*array = array[i + 1];
	}
	return -1;
}