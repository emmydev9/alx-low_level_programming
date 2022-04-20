#include "main.h"
#include <stdio.h>

/**
* rev_string - reverse a string
* @s: pointer to a array
**/

void rev_string(char *s)
{
	int strlen, i, j;

	char *str, tmp;

	strlen = 0;

	while (*(s + strlen) != 0)
	{
		strlen++;
	}
	str = s;
	for (i = 0; i < (strlen - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tmp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = tmp;
		}
	}
}
