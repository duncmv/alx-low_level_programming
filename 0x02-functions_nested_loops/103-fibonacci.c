#include <stdio.h>
/**
 * main - sum of fib numbers less than 4,000,000
 *
 * Return: 0
 */
int main(void)
{
	long x = 1;
	long fib = 0;
	long tmp;
	long sum = 0;

	while (fib < 4000000)
	{
		tmp = fib;
		fib += x;
		x = tmp;
		if (fib % 2 == 0)
			sum = sum + fib;
	}
	printf("%ld\n", sum);
	return (0);
}
