#include "main.h"
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: string to write to file
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	ssize_t write_status;

	if (filename == NULL)
		return (-1);
	len = text_content == NULL ? 0 : strlen(text_content);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	write_status = write(fd, text_content, len);
	if (write_status == -1)
		return (-1);

	close(fd);
	return (1);
}
