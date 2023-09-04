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
	char *buff = malloc(sizeof(buff) * letters);
	int fd = open(filename, O_RDONLY);
	ssize_t statread, statwrite;

	if (fd == -1)
		return (0);
	statread = read(fd, buff, letters);
	if (statread == -1)
		return (0);
	statwrite = write(1, buff, (size_t)statread);
	if (statwrite == -1)
		return (0);
	free(buff);
	return (statwrite);
}
