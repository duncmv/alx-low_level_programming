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
	{	putchar(n);
		n++;
		if (n < 58)
		{	putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
