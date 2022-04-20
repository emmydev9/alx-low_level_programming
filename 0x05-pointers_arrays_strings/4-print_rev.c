#include "main.h"
#include <stdio.h>
/**
* print_rev - print a reverse string
* @s: pointer to a character
**/

void print_rev(char *s)
{
	int strlen = 0;

	while (strlen >= 0)
	{
		if (s[strlen] == '\0')
			break;

		strlen++;
	}

	for (; strlen >= 0; strlen--)
	{
		_putchar(s[strlen]);
	}
	_putchar('\n');
}
