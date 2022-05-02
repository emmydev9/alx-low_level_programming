#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry points
* @argc: number of agruments
* @argv: pointer to an array of char.
* Return: Always success
**/

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
