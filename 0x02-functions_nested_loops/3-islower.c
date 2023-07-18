#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: char type arg
 *
 * Return: 1 if true, 0 if false
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
