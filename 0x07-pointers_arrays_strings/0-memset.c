#include "main.h"
/**
 * _memset - fills the first n bytes with constant b
 * @s: pointer to char
 * @b: constant char byte
 * @n: no. of bytes to be filled
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
