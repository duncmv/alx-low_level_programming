#include "main.h"
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
}
