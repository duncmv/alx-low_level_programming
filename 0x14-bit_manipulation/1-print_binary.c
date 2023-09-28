#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: number to be represented in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (temp = n, i = 0; (temp >>= 1) > 0; i++)
		;

	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
