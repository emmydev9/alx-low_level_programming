#include "main.h"
#include <stdio.h>

/**
* _strcpy - a pointer to a function
* @dest: destination arg
* @src: source arg
* Return: dest
**/
char *_strcpy(char *dest, char *src)
{
	int strlen, i;

	strlen = 0;

	while (*(src + strlen))
		strlen++;

	for (i = 0; i <= strlen; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
