#include "main.h"
/**
 * 100s - if multiple is in hundreds
 * @p: int type arg
 */
void 100s(int p)
{
	int a = p % 100;

	_putchar(p / 100 + '0');
	_putchar(a / 10 + '0');
	_putchar(p % 10 + '0');
}


/**
 * 10s - if multiple is in tens
 * @p: int type arg
 */
void 10s(int p)
{
	_putchar(' ');
	_putchar(p / 10 + '0');
	_putchar(p % 10 + '0');
}

/**
 * 1s - if multiple is in ones
 * @p: int type arg
 */
void 1s(int p)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(p + '0');
}

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
					100s(z);
				}
				else if (z > 9 && z < 100)
				{
					10s(z);
				}
				else if (y != 0)
				{
					1s(z);
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
