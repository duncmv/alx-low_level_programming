#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: pointer to string
 * @accept: pointer to substring
 *
 * Return: pointer to byte that matches or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
				return (s + i);
	}

	return ('\0');
}
