#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: number of arguments
* @argv: pointer to an array of char
* Return: Always Success.
**/

int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (1);
	}

	for (i = 0; i < argc; i++)
	{
		if (*(argv[i]) < 48 && *(argv[i]) > 57)
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[i]);
		}

	}
	printf("%d\n", sum);
	return (0);
}
