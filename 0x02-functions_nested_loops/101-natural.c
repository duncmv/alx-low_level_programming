#include <stdio.h>
/**
 * main - sum of multiples of 3 and 5 less than 1024
 */
void main(void)
{
	int x = 0;
	int sum = 0;

	while (x < 1024)
	{
		if ( x % 3 == 0 || x % 5 == 0)
			sum += x;
		x++;
	}
	printf("%d\n", sum);
}
