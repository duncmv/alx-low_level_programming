#include "main.h"
/**
 * _strcpy - copies string from src to dest
 * @dest: pointer to char
 * @src: pointer to char
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, n;

	for (i = 0; src[i] != '\0'; i++)
		;

	i++;

	for (n = 0; n < i; n++)
		dest[n] = src[n];

	return (dest);
}
