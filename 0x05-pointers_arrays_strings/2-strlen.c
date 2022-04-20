#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strlen - count the length of a string
* @s: pointer to a character
* Return: int
**/

int _strlen(char *s)
{
	int strlen = 0;

	while (*(s + strlen) != '\0')
		strlen++;

	return (strlen);
}
