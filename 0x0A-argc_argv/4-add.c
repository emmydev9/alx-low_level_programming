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

	for (i = 1; i < argc; i++)
	{
		if ((atoi(argv[i]) == 0 && *(argv[i]) != 48) || atoi(argv[i]) < 0)
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
