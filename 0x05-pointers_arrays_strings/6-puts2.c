#include "main.h"
#include <stdio.h>
/**
* puts2 - print both skip some int
* @str: pointer to a character
**/
void puts2(char *str)
{
	int strlen, i;

	strlen = 0;

	while (*(str + strlen) != '\0')
		strlen++;

	for (i = 0; i < strlen; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}

	_putchar('\n');
}
