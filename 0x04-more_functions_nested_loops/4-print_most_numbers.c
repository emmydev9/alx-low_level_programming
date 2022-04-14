#include <stdio.h>
#include "main.h"
/**
* print_most_numbers - Entry point functions
* @void: no argument needed
**/
void print_most_numbers(void)
{
	int i;
	for (i = 48; i <= 57; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
