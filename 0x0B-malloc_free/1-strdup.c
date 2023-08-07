#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - copies a string to new memory location
 * @str: pointer to a string
 *
 * Return: pointer to new string or NULL
 */
char *_strdup(char *str)
{
	char *p;
	int i, n;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		n = strlen(str);
		p = malloc(n * sizeof(char));

		if (p == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < n; i++)
				p[i] = str[i];
		}
	}
	return (p);
}
