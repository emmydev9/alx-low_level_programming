#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
* @b: size
* Return: nothing
**/

void *malloc_checked(unsigned int b)
{
	char *new_alloc;

	new_alloc = malloc(b);
	if (new_alloc == NULL)
		exit(98);
	return (new_alloc);
}
