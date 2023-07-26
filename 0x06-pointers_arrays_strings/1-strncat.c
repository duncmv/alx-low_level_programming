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
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && n > 0; j++, n--, i++)
	{
		dest[i] = src[j];
	}

	return (dest);
}
