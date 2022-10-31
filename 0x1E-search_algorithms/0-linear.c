#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* linear_search - function that search for a value
* @array: pointer to the first element of the array
* @size: size of the array
* @value: value to search
* Return: success
**/


int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *array);
		if (*array == value)
			return (i);
		*array = array[i + 1];
	}
	return (-1);
}
