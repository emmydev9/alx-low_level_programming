#include <stdio.h>
#include "main.h"
/**
* print_numbers - print digits
* @void: No argument needed
**/
int print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
