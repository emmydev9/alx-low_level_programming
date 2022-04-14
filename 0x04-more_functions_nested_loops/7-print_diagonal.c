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
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
		_putchar('\n');
}
