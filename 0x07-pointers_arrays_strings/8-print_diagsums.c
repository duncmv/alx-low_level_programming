#include "main.h"
#include <stdlib.h>
/**
 * print_diagsums -  prints the sum of the diagonals of a square matrix
 * @a: pointer to array
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	long int sum1 = 0;
	long int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 = sum1 + a[i][j];
			else if ((size - i - 1) == j)
				sum2 = sum2 + a[i][j];
		}
	}
	printf("%ld, %ld\n", sum1, sum2);
}
