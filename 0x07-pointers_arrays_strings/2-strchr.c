#include <stddef.h>
#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to be found
 *
 * Return: pointer to first occurence of c in s or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
