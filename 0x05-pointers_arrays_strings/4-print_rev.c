#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: char type arg
 */
void print_rev(char *s)
{
	int n = 0;

	char x;

	while (x != '\0')
	{
		x = *(s + n);

		if (x != '\0')
			n++;
	}

	n--;

	while (n >= 0)
	{
		x = *(s + n);

		_putchar(x);
		n--;
	}
	_putchar('\n');
}
