#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: char type arg
 *
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
