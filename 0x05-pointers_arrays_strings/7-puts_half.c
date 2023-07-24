#include "main.h"
/**
 * puts_half - function that prints second half of the string
 * @str: pointer to char
 */
void puts_half(char *str)
{
	int i, n;

	for (i = 0; str[i] != '\0'; i++)
		;

	if (i % 2 == 0)
		n = i / 2;
	else
		n = (i / 2) + 1;

	while (n < i)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
