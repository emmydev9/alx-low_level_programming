#include "main.h"
#include <stdio.h>

/**
* string_toupper - convert lower to uppercase.
* @s: pointer.
* Return: char.
**/

char *string_toupper(char *s)
{
	int strlen = 0;

	while (*(s + strlen) != '\0')
	{
		if ((*(s + strlen) >= 97) && (*(s + strlen) <= 122))
			*(s + strlen) = *(s + strlen) - 32;

		strlen++;
	}

	return (s);
}
