#include "main.h"
/**
 * append_text_to_file - appends text at end of a file
 * @filename: file name
 * @text_content: string to be added at end of file
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_status;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_status = write(fd, text_content, strlen(text_content));
		if (write_status == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
