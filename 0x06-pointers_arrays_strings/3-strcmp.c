#include "main.h"
#include <stdio.h>

/**
* _strcmp - compares two strings.
* @s1: first char.
* @s2: second char.
* Return: An int.
**/

int _strcmp(char *s1, char *s2)
{
	int i, calc;

	i = 0;
	calc = 0;

	while (calc == 0)
	{
		if (*(s1 + i) != '\0' && *(s2 + i) != '\0')
		{
			calc = s1[i] - s2[i];
			i++;
		}
		else
			break;
	}
	return (calc);
}
