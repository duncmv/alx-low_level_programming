#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1 pointer
 * @s2: string 2 pointer
 *
 * Return: difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}

	return (0);
}
