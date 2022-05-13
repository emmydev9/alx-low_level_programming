#include <stdio.h>
#include <stdlib.h>

/**
* main - print the first n bytes in opcodes
* @argc: Numbers of argument.
* @argv: pointer to pointer to char.
* Return: Always success.
**/

int main(int argc, char *argv[])
{
	char *opcode = (char *) main;
	int n_byte, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n_byte = atoi(argv[1]);
	if (n_byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n_byte; i++)
	{
		printf("%02x", opcode[i] & 0xFF);
		if (i != (n_byte - 1))
			printf(" ");
	}
	printf("\n");
	return (0);
}
