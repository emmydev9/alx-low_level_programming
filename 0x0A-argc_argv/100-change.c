#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry points
* @argc: number of argument
* @argv: pointer to a pointer of chars.
* Return: Success.
**/

int main(int argc, char **argv)
{
	int cents, n_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;

		n_coins++;
	}
	printf("%d\n", n_coins);
	return (0);
}
