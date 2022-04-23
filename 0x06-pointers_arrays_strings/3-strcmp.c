#include "main.h"
#include <stdio.h>

/**
* _strcmp - compares two strings.
* @s1: first char.
* @s2: second char.
* Return: An int.
**/

int _strcmp(char *s1, char *s2)
{
	int s1len, s2len;

	s1len = 0;
	s2len = 0;

	while (*(s1 + s1len) != '\0')
		s1len++;

	while (*(s2 + s2len) != '\0')
		s2len++;

	if (s1len == s2len)
		return (0);
	else if (s1len < s2len)
		return (-15);
	else
		return (15);

}
