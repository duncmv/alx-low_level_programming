#include "main.h"
/**
 * minutes -prints minutes in an hour
 * @a: int arg for h1
 * @b: int arg for h2
 */
void minutes(int a, int b)
{
	int m1, m2;

	m1 = 48;
	while (m1 < 54)
	{
		m2 = 48;
		while (m2 < 58)
		{
			_putchar(a);
			_putchar(b);
			_putchar(':');
			_putchar(m1);
			_putchar(m2);
			_putchar('\n');
			m2++;
		}
		m1++;
	}
}

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int h1, h2;

	h1 = 48;
	while (h1 < 51)
	{
		h2 = 48;
		if (h1 == 50)
		{
			while (h2 < 52)
			{
				minutes(h1, h2);
				h2++;
			}

		}
		else
		{
			while (h2 < 58)
			{
				minutes(h1, h2);
				h2++;
			}
		}
		h1++;
	}
}
