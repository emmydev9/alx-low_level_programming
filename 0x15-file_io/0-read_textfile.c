#include "main.h"

/**
* read_textfile - reads text from file.
* @filename: filename
* @letters: No. of letters to reads.
* Return: size.
**/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t num_read, num_wrt;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = (char *) malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	num_read = read(fd, buffer, letters);
	num_wrt = write(STDOUT_FILENO, buffer, num_read);

	close(fd);
	free(buffer);
	return (num_wrt);
}