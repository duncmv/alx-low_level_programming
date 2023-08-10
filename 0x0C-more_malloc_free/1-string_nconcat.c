#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: no of bytes from s2 to be concatenated
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, x;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = (unsigned int)strlen(s1);
	p = malloc((x + n + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0, j = 0; i < (x + n); i++)
	{
		if (i < strlen(s1))
			p[i] = s1[i];
		else
			p[i] = s2[j++];
	}
	p[i] = '\0';

	return (p);
}
