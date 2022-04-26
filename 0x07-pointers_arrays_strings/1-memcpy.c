#include "main.h"
#include <stdio.h>

/**
* _memcpy - copy bytes from one src to dest
* @dest: destination buffer
* @src: source buffer
* @n: size of destination buffer
* Return: dest
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
