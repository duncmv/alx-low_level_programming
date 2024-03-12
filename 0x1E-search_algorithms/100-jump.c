#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to start of array
 * @size: size of array
 * @value: value to search for
 *
 * Return: index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = (size_t)sqrt(size), start, stop, i;

	if (array == NULL)
		return (-1);

	start = 0;
	stop = step;

	while (stop < size)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (value >= array[start] && value <= array[stop])
		{
			printf("Value found between indexes [%lu] and [%lu]\n", start, stop);
			for (i = start; i <= stop; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
		start = stop;
		stop += step;

	}
	i = start;
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	printf("Value found between indexes [%lu] and [%lu]\n", start, stop);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i++] == value)
			return (i);
	}
	return (-1);
}
