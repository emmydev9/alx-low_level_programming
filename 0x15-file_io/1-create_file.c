#include "main.h"

/**
* create_file - create a file
* @filename: file name to create.
* @text_content: content to write to the file.
* Return: Success status.
**/

int create_file(const char *filename, char *text_content)
{
	int fd, rw_holder, num_letters;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!text_content)
		text_content = "";
	if (fd == -1)
		return (-1);
	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;
	rw_holder = write(fd, text_content, num_letters);
	if (rw_holder == -1)
		return (-1);
	close(fd);
	return (1);
}
