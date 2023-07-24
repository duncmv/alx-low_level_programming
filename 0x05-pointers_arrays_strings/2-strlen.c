#include "main.h"
/**
 * _strlen - returns length of string
 * @s - char type arg
 *
 * Return: length
 */
int _strlen(char *s)
{
	int n = 0;

	char x;

	while  (x != '\0')
	{
		x = *(s + n);
		n++;
	}
	return (n);
}
