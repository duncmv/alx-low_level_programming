#include <stdio.h>
/**
 * main - fizz buzz
 *
 * Return: 0
 */
int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i & 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf('\n');
	return (0);
}
