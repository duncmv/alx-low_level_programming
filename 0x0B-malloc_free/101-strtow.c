#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * strtow - splits strings in to words
 * @str: pointer to a string
 *
 * Return: pointer to an array or NULL
 */
char **strtow(char *str)
{
	char **p;
	int i, j, wdlen = 0, n = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) == '\t' || *(str + i) == ' ')
			n++;
	}
	n++;

	p = malloc(n * sizeof(*p));

	if (p == NULL)
		return (NULL);
	n = 0;
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) == '\t' || *(str + i) == ' ')
		{
			wdlen = i - wdlen;
			p[n] = malloc(wdlen * sizeof(**p));
			if (p[n] == NULL)
			{
				for (n--; n >= 0; n--)
					free(p[n]);
				free(p);
				return (NULL);
			}
			n++;
		}
	}
	wdlen = i - wdlen;
	p[n] = malloc(wdlen * sizeof(**p));
	if (p[n] == NULL)
	{
		for (n--; n >= 0; n--)
			free(p[n]);
		free(p);
		return (NULL);
	}
	n = 0;

	for (i = 0, j = 0; *(str + i) != '\0'; i++, j++)
	{
		if (*(str + i) == '\t' || *(str + i) == ' ')
		{
			p[n][j] = '\0';
			j = 0;
			n++;
		}
		else
		{
			p[n][j] = str[i];
		}
	}
	p[n][j] = '\0';

	return (p);
}
