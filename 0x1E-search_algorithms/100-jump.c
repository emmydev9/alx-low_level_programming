#include "search_algos.h"

/**
* 

**/
int min (size_t a, size_t b) {
	return (a > b) ? b : a;
}

int jump_search(int *array, size_t size, int value) {
	size_t step = sqrt(size);
	size_t prev = 0;

	
	while (array[(int)min(step, size)-1] < value) {
		printf("Value checked array[%ld] = [%d]\n", prev, *array);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return -1;
		*array = array[(int)prev];
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
	while (*array < value) {
		printf("Value checked array[%ld] = [%d]\n", prev, *array);
		prev += 1;
		if ((int)prev == min(step, size))
			return -1;
		*array = array[(int) prev];
	}
	if (*array == value)
		return (int) prev;

	return -1;
}