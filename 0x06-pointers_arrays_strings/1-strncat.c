#include "main.h"
#include <stdio.h>

/**
* _strncat - join n numbers of characters.
* @dest: destination.
* @src: source.
* @n: number.
* Return: joined char
**/

char *_strncat(char *dest, char *src, int n)
{
	int srclen, destlen, i;

	destlen = 0;
	srclen = 0;

	while (*(dest + destlen) != '\0')
		destlen++;

	while (*(src + srclen) != '\0')
		srclen++;

	for (i = 0; i < n; i++)
	{
		if (i < srclen)
		{
			*(dest + destlen) = *(src + i);
			destlen++;
		}
		else
			break;
	}

	return (dest);

}