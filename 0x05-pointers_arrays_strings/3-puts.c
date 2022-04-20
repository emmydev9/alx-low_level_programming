#include "main.h"
#include <stdio.h>

/**
* _puts - print out strings
* @str: pointer to a character
**/

void _puts(char *str)
{
	int strlen = 0;

	while (*(str + strlen) != '\0')
	{
		_putchar(*(str + strlen));
		strlen++;
	}
	_putchar('\n');

}
