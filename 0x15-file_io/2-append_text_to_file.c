#include "main.h"

/**
* append_text_to_file - add text to the end of a file
* @filename: name of file.
* @text_content: text to write.
* Return: Success status.
**/

int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int fd, w;
	if (!filename)
		return (-1);
	if (!text_content)
		exit(0);
	fd = open(filename, O_WRONLY | O_APPEND, 0200);
	if (fd == -1)
		return (-1);
	for (i = 0; text_content[i]; i++)
		;
	w = write(fd, text_content, i);

	if (w == -1)
		return (-1);
	close(fd);
	return (1);

}
