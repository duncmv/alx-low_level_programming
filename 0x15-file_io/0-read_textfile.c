#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - function that reads a text file and prints it to stdoutput
 * @filename: pointer to stringof the path of file
 * @letters: number of letters it should read and print
 * Return: actual number of letters read and printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd;
	ssize_t statread, statwrite;

	if (filename == NULL)
		return (0);

	fd = open(filename, 2);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(buff) * letters);
	if (buff == NULL)
		return (0);

	statread = read(fd, buff, letters);
	if (statread == -1)
		return (0);

	statwrite = write(STDOUT_FILENO, buff, statread);
	if (statwrite == -1 || statread != statwrite)
		return (0);

	free(buff);
	close(fd);
	return (statwrite);
}
