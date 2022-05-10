#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: min val
* @max: max val
* Return: int
**/

int *array_range(int min, int max)
{
	int j;
	int *alloc;

	if (min > max)
		return (NULL);
	alloc = malloc(sizeof(*alloc) * ((max - min) + 1));
	if (alloc == NULL)
		return (NULL);

	for (j = 0; min <= max; min++, j++)
	{
		alloc[j] = min;
	}
	return (alloc);
}
