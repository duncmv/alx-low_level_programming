#include <stdio.h>
/**
 * main - main block
 *
 * Return: 0
 */
int main(void)
{
	int n = 48;

	while (n < 58)
	{	
		int x = n + 1;

		while (x < 58)
		{	
			if (x != n)
			{	putchar(n);
				putchar(x);
			}
			if (n < 56)
			{	putchar(44);
				putchar(32);
			}
			x++;
		}
		n++;	
	}
	putchar(10);
	return (0);
}
