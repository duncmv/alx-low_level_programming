#include <stdio.h>
/**
 * main - main block
 *
 * Return: 0
 */
int main(void)
{
	int n = 97;

	while (n < 123)
	{	putchar(n);
		n++;
	}
	n = 65;
	while (n < 91)
	{	putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
