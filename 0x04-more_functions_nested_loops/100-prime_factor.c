#include <stdio.h>
/**
 * main - finds and prints largest prime factor
 *
 * Return: 0
 */
int main(void)
{
	long n = 612852475143;
	long d = 2;

	while (n > 1)
	{
		if (n % d == 0)
			n /= d;
		else
			d++;
	}
	printf("%ld\n", d);
	return (0);
}
