#include "main.h"
/**
 * read_textfile - reads a file and prints it to stdout
 * @filename: file name
 * @letters: letters to be read
 *
 * Return: actual number of letters, or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_status;
	char *buff = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	read_status = read(fd, buff, letters);
	if (read_status == -1)
	{
		free(buff);
		return (0);

	}
	write(STDOUT_FILENO, buff, read_status);
	free(buff);
	close(fd);
	return (read_status);
}
