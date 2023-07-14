#include <stdio.h>
/**
 * main - main block
 * @n: first arg
 *
 * Return: 0
 */
int main(int n)
{
	n = 122;
	while (n > 96)
	{	putchar(n);
		n--;
	}
	putchar(10);
	return (0);
}
