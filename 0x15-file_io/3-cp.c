#include "main.h"

/**
* error_file - checks if files can be opened.
* @file_from: file_from.
* @file_to: file_to.
* @argv: arguments vector.
* Return: no return.
*/

void error_file(int file_from, int file_to, char **argv)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(98);
	}
}

/**
* main - check the code from ALX prg
* @argc: number of argument.
* @argv: pointer to an array of character.
* Return: success status.
**/

int main(int argc, char **argv)
{
	int file_from, file_to, err_no;
	ssize_t num_char, num_write;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);
	num_char = 1024;
	while (num_char == 1024)
	{
		num_char = read(file_from, buffer, 1024);
		if (num_char == -1)
			error_file(-1, 0, argv);
		num_write = write(file_to, buffer, num_char);
		if (num_write == -1)
			error_file(0, -1, argv);
	}
	err_no = close(file_from);
	if (err_no == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", err_no);
		exit(100);
	}
	err_no = close(file_to);
	if (err_no == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", err_no);
		exit(100);
	}
	return (0);
}
