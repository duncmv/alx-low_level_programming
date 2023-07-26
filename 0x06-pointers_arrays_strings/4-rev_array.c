#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to int array
 * @n: no. of elements in array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	n--;

	for (i = 0; i <= n; i++, n--)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
