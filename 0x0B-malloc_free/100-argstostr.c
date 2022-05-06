#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of your program.
* @ac: Numbers of argument
* @av: pointer to a pointer to an array.
* Return: int.
**/

char *argstostr(int ac, char **av)
{
	char *buffer;
	int c, j, i, ia;

	if (ac == 0)
		return (NULL);
	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}
	buffer = malloc((c + 1) * sizeof(char));

	if (buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			buffer[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}

		if (ia < c - 1)
			buffer[ia] = av[i][j];
	}
	buffer[ia] = '\0';
	return (buffer);
}
