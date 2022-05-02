#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: number of argument
* @argv: pointer to arrays of char.
* Return: Always success
**/

int main(int argc, char *argv[])
{
	int mul, f1, f2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		f1 = atoi(argv[1]);
		f2 = atoi(argv[2]);
		mul = f1 * f2;

		printf("%d\n", mul);
	}
	return (0);
}
