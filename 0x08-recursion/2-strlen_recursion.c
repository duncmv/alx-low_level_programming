#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: pointer to a string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);

	i = 1 + _strlen_recursion(s + 1);
	return (i);
}
