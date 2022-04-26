#include "main.h"
#include <stdio.h>

/**
* _strspn - lenght of segment
* @s: string.
* @accept: segment to find
* Return: unsigned int
**/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, test;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		test = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				test = 0;
				break;
			}
		}
		if (test == 1)
			break;
	}
	return (i);

}
