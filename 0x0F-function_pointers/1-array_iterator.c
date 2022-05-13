#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_iterator - executes element of an array.
* @array: given array.
* @size: size of array.
* @action: function pointer.
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
	}
}
