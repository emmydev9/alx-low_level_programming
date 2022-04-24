#include "main.h"
#include <stdio.h>

/**
* reverse_array - reverses an array
* @a: pointer to an int.
* @n: numbers of element
**/

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
}
