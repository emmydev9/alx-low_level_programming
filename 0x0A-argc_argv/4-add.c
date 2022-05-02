#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Entry point
* @argc: number of arguments
* @argv: pointer to an array of char
* Return: Always Success.
**/

int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
