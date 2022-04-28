#include "main.h"
#include <stdio.h>

/**
* _strlen_recursion - returns the length of a string.
* @s: pointer to a char.
* Return: int.
**/

int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
		return (0);

	if (*s != '\0')
	{
		i = _strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
