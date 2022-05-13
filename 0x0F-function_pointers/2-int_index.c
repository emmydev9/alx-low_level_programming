#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* int_index - searches for an integer.
* @array: given array
* @size: size of array
* @cmp: function pointer.
* Return: int.
**/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, compare;

	if (size <= 0)
		return (-1);

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			compare = cmp(array[i]);
			if (compare != 0)
				return (i);
		}
	}
	return (-1);
}
