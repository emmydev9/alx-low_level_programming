#include "main.h"
#include <stdio.h>
/**
* print_array - prints elements of an array
* @a: pointer to an int
* @n: int argument
**/
void print_array(int *a, int n)
{
	int arrlen = 0;

	for (; arrlen < n; arrlen++)
	{
		printf("%d", a[arrlen]);
		if (arrlen < n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
