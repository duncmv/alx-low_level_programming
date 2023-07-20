#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int n, i, j;
	n = 0;

	while (n < size)
	{
		i = size - n - 1;
		j = n + 1;

		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		while (j >0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		n++;
	}		
}
