#include "main.h"
/**
 * puts2 - prints every other character of a string_
 * @str: char type arg
 */
void puts2(char *str)
{
	int n = 0;

	char x;

	while (x != '\0')
	{
		x = *(str + n);

		if (x != '\0')
		{
			_putchar(x);
			n = n + 2;
		}

	}
	_putchar('\n');
}
