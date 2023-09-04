#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * main - main function
 * @ac: arg count
 * @av: arg vector
 * Return: 0
 */
int main(int ac, char **av)
{
	int f[2];
	int statusi, statuso, s1, s2;
	char buff[1024];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);
	
	f[0] = open(av[1], 0);
	if (f[0] == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
	f[1] = open(av[2], 1 | O_CREAT | O_TRUNC, mode);
	if (f[1] == -1)
		dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
	do {
		statusi = read(f[0], buff, 1024);
		if (statusi == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (statusi > 0)
		{
			statuso =write(f[1], buff, statusi);
			if (statuso == - 1)
			{
				dprintf(2, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
	} while (statusi > 0);
	s1 = close(f[1]);
	s2 = close(f[0]);
	if (s1 == -1 || s2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", s1 == -1 ? 3 : 4);
		exit(100);
	}
	return (0);
}
