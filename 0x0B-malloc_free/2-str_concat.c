#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenantes two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer to new string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, n;

	if (s1 == NULL && s2 == NULL)
		n = 0;
	else if (s2 == NULL)
		n = strlen(s1);
	else if (s1 == NULL)
		n = strlen(s2);
	else
		n = strlen(s1) + strlen(s2);

	p = malloc(n * sizeof(char) + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; s2[j] != '\0'; i++, j++)
		p[i] = s2[j];

	p[i] = '\0';

	return (p);
}
