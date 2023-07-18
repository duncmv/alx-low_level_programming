#include "main.h"
/**
 * print_times_table - prints @n times table
 * @n: int type arg
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
					int a = z % 100;

					_putchar(z / 100 + '0');
					_putchar(a / 10 + '0');
					_putchar(z % 10 + '0');
				}
				else if (z > 9 && z < 100)
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
