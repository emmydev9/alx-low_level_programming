#include "main.h"
#include <stdio.h>

/**
* _strchr - locates a character in a string.
* @s: main string
* @c: char to locate
* Return: char
**/

char *_strchr(char *s, char c)
{
	int count = 0, i, marker = 0;

	while (*(s + count) != '\0')
		count++;
	for (i = 0; i < count; i++)
	{
		if (*(s + i) == c)
			return (s + i);
		marker++;
	}
	if (marker == count)
		return ('\0');
	else
		return (s + i);
}
