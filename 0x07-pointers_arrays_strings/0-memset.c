#include "main.h"
#include <stdio.h>

/**
* _memset - fills memory with a constant byte
* @s: buffer to store the byte
* @b: char byte.
* @n: size of b.
**/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while(i < n)
	{
		*(s + i) = b;
		i++;
	}

	printf("\n");
	return (s);
}