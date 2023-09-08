#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * append_text_to_file - appends a text at the end f a file
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end of a file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int status, fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, 2 | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		status = write(fd, text_content, strlen(text_content));
		if (status == -1)
			return (-1);
	}
	return (1);
}
