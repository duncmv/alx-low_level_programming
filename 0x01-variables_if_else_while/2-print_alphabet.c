#include <stdio.h>
/**
 * main - main block
 * @n: first arg
 *
 * Return: 0
 */
int main(int n)
{
	n = 97;
	while (n < 123)
	{	putchar(n);
		n++;
	}
	putchar(10);
	return (0);
}
