#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: pointer to string
 * @src: pointer to string
 *
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != 0; c++)
	{
		dest[i] = src[c];
		i++;
	}

	return (dest);
}
