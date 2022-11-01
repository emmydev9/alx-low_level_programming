#include "search_algos_h"

/**
* binary_search - search for a value by split in two
* @array: pointer to the first element of the array
* @size: size of the array
* @value: value to search for
* Return: success status
**/

int binary_search(int *array, size_t size, int value) {
	int i;
	r = m;

	for (i = 0; i < size; i++)
	{
		int m = floor((i + r) / 2);
		if (array[m] < value)
			i = m + 1;
		else
			r = m
	}
	return i;
}