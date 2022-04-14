#include <stdio.h>
#include "main.h"
/**
* print_triangle - print a triange
* @size: int value
**/
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - i); j++)
			putchar(' ');
		for (j--; j < size; j++)
			putchar(35);
		if (i != size - 1)
			putchar('\n');
	}
	putchar('\n');
}
