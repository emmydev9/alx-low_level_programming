#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - joins two strings
* @s1: first string
* @s2: second string.
* Return: char.
**/

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, stopper;
	char *buffer;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;

	buffer = malloc(sizeof(char) * (i + j + 1));
	if (buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		buffer[k] = s1[k];

	stopper = j;

	for (j = 0; j <= stopper; k++, j++)
		buffer[k] = s2[j];

	return (buffer);
}
