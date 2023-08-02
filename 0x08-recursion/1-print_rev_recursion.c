#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to a string
 */
void _print_rev_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return;
	}


	for (i = 0; s[i]; i++)
		;

	i--;

	_putchar(*(s + i));
	_print_rev_recursion(s + 1);
}
