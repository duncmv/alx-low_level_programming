#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all args in prog
 * @ac: arg count
 * @av: arg vector
 *
 * Return: pointer or NULL
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, n = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		n += strlen(av[i]);

	p = malloc((n + ac) * sizeof(char) + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0, n = 0; i < ac; i++, n++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[n] = av[i][j];
			n++;
		}
		p[n] = '\n';
	}
	return (p);
}
