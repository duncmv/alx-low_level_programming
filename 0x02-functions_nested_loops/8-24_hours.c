#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int h1, h2, m1, m2;

	h1 = 48;
	while (h1 < 51)
	{
		h2 = 48;
		if (h1 == 50)
		{
			while (h2 < 53)
			{
				m1 = 48;
				while (m1 < 54)
				{
					m2 = 48;
					while (m2 < 58)
					{
						_putchar(h1);
						_putchar(h2);
						_putchar(':');
						_putchar(m1);
						_putchar(m2);
						_putchar('\n');
						m2++;
					}
					m1++;
				}
				h2++;
			}
		}
		else
		{
			while (h2 < 58)
			{
				m1 = 48;
				while (m1 < 54)
				{
					m2 = 48;
					while (m2 < 58)
					{
						_putchar(h1);
						_putchar(h2);
						_putchar(':');
						_putchar(m2);
						_putchar('\n');
						m2++;
					}
					m1++;
				}
				h2++;
			}
		}
		h1++;
	}
}
