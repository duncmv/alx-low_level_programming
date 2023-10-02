#include "main.h"
/**
 * print_error - prints errors
 * @code : error code
 * @av: array of args
 */
void print_error(int code, char **av)
{
	if (code == 97)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	if (code == 98)
		dprintf(STDERR_FILENO, "Can't read from %s\n", av[1]);
	if (code == 99)
		dprintf(STDERR_FILENO, "Can't write to %s\n", av[2]);
}
/**
 * main - function that copies content from one file to another
 * @ac: arg count
 * @av: array of args
 *
 * Return: 0 or err
 */
int main(int ac, char **av)
{
	int fd1, fd2, close_s;
	char *buff;
	ssize_t read_stat, write_status;
	mode_t perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
		print_error(97, av), exit(97);
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
		print_error(98, av), exit(98);
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, perm);
	if (fd2 == -1)
		print_error(99, av), exit(99);
	buff = malloc(sizeof(char) * 1024), read_stat = read(fd1, buff, 1024);
	if (read_stat == -1)
		print_error(98, av), exit(98);
	while (read_stat != 0)
	{
		write_status = write(fd2, buff, (size_t)read_stat);
		if (write_status == -1)
			print_error(99, av), exit(99);
		read_stat = read(fd1, buff, 1024);
	}
	free(buff);
	close_s = close(fd1);
	if (close_s == -1)
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd1), exit(100);
	close_s = close(fd2);
	if (close_s == -1)
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd2), exit(100);
	return (0);
}
