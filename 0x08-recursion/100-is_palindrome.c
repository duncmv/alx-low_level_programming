#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: pointer to a string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);

	i = 1 + _strlen_recursion(s + 1);
	return (i);
}
/**
 * is_palindrome - checks string for palindrome
 * @s: pointer to string
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	return (pali(s, 0, n));
}
/**
 * pali - tests for palindrome
 * @s: pointer to string
 * @i: index on string
 * @n: string length
 *
 * Return: 1 or 0
 */
int pali(char *s, int i, int n)
{
	int x = n - 1;

	if (i > x)
		return (1);
	if (n == 0)
		return (0);
	if (i <= x)
	{
		if (s[i] == s[x])
			return (pali(s, i + 1, x));
		else
			return (0);
	}
	return (0);
}
