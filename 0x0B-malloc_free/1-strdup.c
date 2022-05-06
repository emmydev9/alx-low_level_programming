#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - contains a copy of the string given as a parameter.
* @str: pointer to a char.
* Return: char
**/

char *_strdup(char *str)
{
	char *buffer;
	unsigned int i, j;


	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	buffer = (char *) malloc(sizeof(char) * i + 1);

	if (buffer == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		buffer[j] = str[j];

	return (buffer);
}
