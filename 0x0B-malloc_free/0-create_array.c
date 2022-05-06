#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array
* @size: size of array
* @c: char
* Return: char
**/

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	buffer = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}