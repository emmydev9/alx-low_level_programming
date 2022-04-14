#include <stdio.h>
#include "main.h"
/**
* print_line - prints line out
* @n: int
**/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	putchar('\n');
}
