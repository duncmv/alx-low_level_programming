#include "main.h"
/**
 * _strncat - function that concancates two strings
 * @dest: pointer to string
 * @src: pointer to string
 * @n: byte limit
 *
 * Return: pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; c < n; c++)
	{
		dest[i] = src[c];
		i++;
	}

	return (dest);
}
