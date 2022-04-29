#include "main.h"
#include <stdio.h>

/**
* strlen_rec - get the strlen recursively
* @n: str length.
* Return: int.
**/
int strlen_rec(char *s)
{
	int i;

	if (*s == '\0')
		return (0);
	if (*s != '\0')
	{
		i = strlen_rec(s + 1);
		i++;
	}
	return (i);
}

/** compare - compares each character
* @s: pointer to the char.
* @c1: position of present char.
* @c2: position of next char.
* Return: int.
**/

int compare(char *s, int c1, int c2)
{
	if (*(s + c1) == *(s + c2))
	{
		if (c1 == c2 || c1 == c2 + 1)
			return (1);
		return (0 + compare(s, c1 + 1, c2 - 1));
	}
	return (0);
}

/**
* is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
* @s: pointer to the char.
* Return: int.
**/

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, strlen_rec(s) - 1));
}