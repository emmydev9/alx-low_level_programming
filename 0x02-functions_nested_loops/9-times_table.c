#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
* times_table - print alphabets to the stdout
* @void: takes no argument
* Return: void
**/
void times_table(void)
{
	int i, j, z;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			z = i * j;
			_putchar(44);
			_putchar(32);
			if (z <= 9)
{
	_putchar(32);
	_putchar(z + 48);
}
else
{
	_putchar((z / 10) + 48);
	_putchar((z % 10) + 48);
}
		}
		_putchar('\n');
	}
}
