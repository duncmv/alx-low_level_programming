#include <stdio.h>
/**
 * main - first 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int fib = 2;
	int x = 1;
	int n = 1;
	int tmp;

	printf("1, 2, ");
	while (n < 50)
	{
		tmp = fib;
		fib += x;
		x = tmp;
		printf("%d, ", fib);
		n++;
	}
	printf("\n");
	return (0);
}

