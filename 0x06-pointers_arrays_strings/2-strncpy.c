#include "main.h"
#include <stdio.h>

/**
* _strncpy - copy char from src to dest.
* @src: source.
* @dest: destination.
* @n: n characters.
* Return: char.
**/

char *_strncpy(char *dest, char *src, int n)
{
	int srclen, destlen, i;

	srclen = 0;
	destlen = 0;

	while(*(src + srclen) != '\0')
		srclen++;

	while (*(dest + destlen) != '\0')
		destlen++;

	for (i = 0; i < n; i++)
	{
		if (i < srclen){
			*(dest + i) = *(src + i);
		}
		else
			break;
	}
	return (dest);
}
