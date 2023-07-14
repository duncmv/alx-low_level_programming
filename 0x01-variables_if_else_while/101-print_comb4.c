#include <stdio.h>
/**
 * main - main block
 *
 * Return: 0
 */
int main(void)
{
	int n = 48;

	while (n < 56)
	{
		int x = n + 1;

		while (x < 57)
		{	
			int y = x + 1;

			while (y < 58)
			{	if (x != n && x != y)
				{	putchar(n);
					putchar(x);
					putchar(y);
				}
				if (n < 55)
				{	putchar(44);
					putchar(32);
				}
				y++;
			}
			x++;
		}
		n++;
	}
	putchar(10);
	return (0);
}
