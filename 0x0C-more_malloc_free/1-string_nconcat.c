#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - concatenates two strings.
* @s1: dest
* @s2: src
* @n: delimiter
* Return: pointer to a char
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, count;
	char *alloc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
		n = j;

	k = i + n;

	alloc = malloc(k + 1);
	if (alloc == NULL)
		return (NULL);

	for (count = 0; count < k; count++)
	{
		if (count < i)
			alloc[count] = s1[count];
		else
			alloc[count] = s2[count - i];
	}
	alloc[i] = '\0';
	return (alloc);
}
