#include <stdio.h>
/**
 * main - first 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long fib = 2;
	long x = 1;
	int n = 1;
	long tmp;

	printf("1, 2, ");
	while (n < 50)
	{
		tmp = fib;
		fib += x;
		x = tmp;
		printf("%ld, ", fib);
		n++;
	}
	printf("\n");
	return (0);
}

