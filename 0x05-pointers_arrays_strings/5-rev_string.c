#include "main.h"
#include <stdio.h>

/**
* rev_string - reverse a string
* @s: pointer to a array
**/

void rev_string(char *s)
{
	int strlen = 0;

	while (strlen >= 0)
	{
		if (s[strlen] == '\n')
			break;

		strlen++;
	}

	for (strlen--; strlen >= 0; strlen--)
	{
		*(s + strlen);
	}
	_putchar('\n');
}