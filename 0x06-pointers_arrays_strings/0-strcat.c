#include "main.h"
#include <stdio.h>

/**
* _strcat - joins two strings
* @dest: destination pointer.
* @src: source pointer.
* Return: returns dest.
**/

char *_strcat(char *dest, char *src)
{
	int strlen, destlen, i;

	strlen = 0;
	destlen = 0;

	while (*(src + strlen) != '\0')
		strlen++;

	while (*(dest + destlen) != '\0')
		destlen++;

	for (i = 0; i < strlen; i++)
	{

		*(dest + destlen) = *(src + i);
		destlen++;
	}

	return (dest);

}
