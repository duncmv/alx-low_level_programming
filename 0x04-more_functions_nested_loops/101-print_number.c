#include "main.h"
/**
 * print_number - prints numbers
 * @n: number to be printed
 */
void print_number(int n)
{
	int x, y;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	x = 1;
	y = 10;

	while (x)
	{
		if (n / y  > 0)
			y *= 10;
		else
			 x = 0;
	}

	while (y > 1)
	{
		_putchar(n % y + '0');
		y /= 10;
	}

	_putchar('\n');
}
