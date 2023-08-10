#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: int type arg
 * @max: int type arg
 *
 * Return: pointer to array or NULL
 */
int *array_range(int min, int max)
{
	int *p, i, n, j;

	if (min > max)
		return (NULL);

	n = max - min + 1;
	p = malloc(n * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0, j = min; i < n; i++)
		p[i] = j++;

	return (p);
}
