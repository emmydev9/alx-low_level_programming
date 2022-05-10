#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - that allocates memory for an array, using malloc
* @nmemb: allocated array.
* @size: size of array.
* Return: int.
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *alloc;

	if (nmemb == 0 || size == 0)
		return (NULL);
	alloc = malloc(nmemb * size);

	if (alloc == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size) ; i++)
	{
		alloc[i] = 0;
	}
	return (alloc);
}
