#include "main.h"
/**
 * _puts - prints a string_
 * @str: char type arg
 */
void _puts(char *str)
{
	int n = 0;

	char x;

	while (x != '\0')
	{
		x = *(str + n);

		if (x != '\0')
		{
			_putchar(x);
			n++;
		}

	}
	_putchar('\n');
}
