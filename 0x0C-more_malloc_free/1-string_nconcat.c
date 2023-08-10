#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * len - finds length of strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: no of byte
 *
 * Return: length of new string
 */
unsigned int len(char *s1, char *s2, unsigned int n)
{
	unsigned int x, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		x = len1 + len2 + 1;
	else
		x = len1 + n + 1;

	return (x);
}
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
	unsigned int i, j, x;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = len(s1, s2, n);
	p = malloc(x * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0, j = 0; i < x; i++)
	{
		if (i < strlen(s1))
			p[i] = s1[i];
		else
			p[i] = s2[j++];
	}
	p[i] = '\0';

	return (p);
}
