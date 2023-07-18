#include "main.h"
/**
 * print_times_table - prints @n times table
 */
void print_times_table(int n)
{
	if  (n >= 0 && n <= 15)
	{
		int x = 0;
		int y, z;

		while (x <= n)
		{
			y = 0;
			while (y <= n)
			{
				z = x * y;
				if (z > 99)
				{
					_putchar(z / 100 + '0');
					_putchar(z / 10 + '0');
					_putchar(z % 10 + '0');
				}
				else if ( z > 9 && z < 100)
				{
					_putchar(' ');
					_putchar(z / 10 + '0');
					_putchar(z % 10 + '0');
				}
				else if (y != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}
				else
				{
					_putchar(z + '0');
				}

				if (y != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				y++;
			}
			_putchar('\n');
			x++;
		}
	}
}
