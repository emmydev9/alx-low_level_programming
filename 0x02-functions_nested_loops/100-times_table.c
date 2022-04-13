#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
* print_times_table - print alphabets to the stdout
* @n: takes int as argument
* Return: void
**/
void print_times_table(int n)
{
	int i, j, z;

	if (n >= 0 && n <= 15)
{		
	for (i = 0; i <= n; i++)
	{
		_putchar(48);
		for (j = 1; j <= n; j++)
		{
			z = i * j;
			_putchar(44);
			_putchar(32);
			if (z <= 9)
			{
				_putchar(32);
				_putchar(32);
				_putchar(z + 48);
			}
			else if (z <= 99)
			{
				_putchar(32);
				_putchar((z / 10) + 48);
				_putchar((z % 10) + 48);
			}
			else
			{
				_putchar(((z / 100) % 10) + 48);
				_putchar(((z /10) % 10) + 48);
				_putchar((z % 10) + 48);
			}
		}
		_putchar('\n');
	}
  }
}
