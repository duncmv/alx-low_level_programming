#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int status;

	if (filename == NULL)
		return (-1);
	fd = creat(filename, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		status = write(fd, text_content, strlen(text_content));
		if (status < 0)
			return (-1);
	}
	return (1);
}
