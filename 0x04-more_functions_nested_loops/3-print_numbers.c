#include <stdio.h>
#include "main.h"
/**
* print_numbers - print digits
* @void: No argument needed
**/
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
