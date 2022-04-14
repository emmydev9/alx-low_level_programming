#include <stdio.h>
#include "main.h"
/**
* print_diagonal - print diagonally
* @n: int n
**/
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(32);
		}
		if (i < (n - 1))
			_putchar(92);

		_putchar('\n');
	}
}
