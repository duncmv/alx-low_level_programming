#include "main.h"
/**
 * print _square - prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	int n, i;

	if (size > 0)
	{
		n = 0;

		while (n < size)
		{
			i = size;

			while (i > 0)
			{
				_putchar('#');
				i--;
			}
			_putchar('\n');
			n++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
