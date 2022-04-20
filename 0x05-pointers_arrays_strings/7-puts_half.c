#include "main.h"
#include <stdio.h>

/**
* puts_half - prints half string
* @str: pointer to a string
**/

void puts_half(char *str)
{
	int strlen = 0;

	int div = 0;

	while (*(str + strlen) != '\0')
		strlen++;

	if (strlen % 2 == 0)
	{
		div = strlen / 2;
		for (; div < strlen; div++)
		{
			_putchar(str[div]);
		}
	}
	else
	{
		div = strlen / 2;
		for (div++; div < strlen + 1; div++)
		{
			_putchar(str[div]);
		}
	}
	_putchar('\n');
}
