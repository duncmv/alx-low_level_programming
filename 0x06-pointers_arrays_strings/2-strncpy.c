#include "main.h"
/**
 * _strncpy - works exactly like stncpy
 * @dest: ptr to string
 * @src: ptr to string
 * @n: no. of characters to be copied
 *
 * Return:  dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
