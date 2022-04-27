#include "main.h"
#include <stdio.h>

/**
* print_diagsums - sum of the two diagonals of a square matrix of integers
* @a: a pointer to a int.
* @size: size of array.
**/

void print_diagsums(int *a, int size)
{
	int i, principal = 0, secondary = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			principal += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < (size * size) - 1)
			secondary += *(a + i);
	}
	printf("%d, %d\n", principal, secondary);
}
