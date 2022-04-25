#include "main.h"
#include <stdio.h>

/**
* infinite_add - Add to infinity
* @n1: first num character.
* @n2: second num character
* @r:  buffer
* @size_r: size of buffer
* Return: char
**/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1len = 0, n2len = 0, biggest, operation, add = 0, dv1, dv2;

	while (*(n1 + n1len) != '\0')
		n1len++;
	while (*(n2 + n2len) != '\0')
		n2len++;
	if (n1len >= n2len)
		biggest = n1len;
	else
		biggest = n2len;
	if (size_r <= biggest + 1)
		return (0);
	r[biggest + 1] = '\0';
	n1len--, n2len--, size_r--;
	dv1 = *(n1 + n1len) - 48, dv2 = *(n2 + n1len) - 48;
	while (biggest >= 0)
	{
		operation = dv1 + dv2 + add;
		if (operation >= 10)
			add = operation / 10;
		else
			add = 0;
		if (operation > 0)
			*(r + biggest) = (operation % 10) + 48;
		else
			*(r + biggest) = '0';
		if (n1len > 0)
			n1len--, dv1 = *(n1 + n1len) - 48;
		else
			dv1 = 0;
		if (n2len > 0)
			n2len--, dv2 = *(n2 + n2len) - 48;
		else
			dv2 = 0;
		biggest--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
