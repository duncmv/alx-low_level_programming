#include "main.h"
/**
 * more_numbers - prints 10 - 14 ten times
 */
void more_numbers(void)
{
	int x;
	int i = 0;

	while (i < 10)
	{
		x = 0;
		while (x < 15)
		{
			if (x > 9)
				_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			x++;
		}
		i++;
		_putchar('\n');
	}
}
