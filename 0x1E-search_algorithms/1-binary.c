#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to start of array
 * @size: size of array
 * @value: value to search for
 *
 * Return: index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int s = (int)size;
	int i, start = 0, end = (int)size, mid;

	do {
		printf("Searching in array: ");
		for (i = start; i < end; i++)
		{
			printf("%d", array[i]);
			if (i != end - 1)
				printf(", ");
		}
		printf("\n");
		s /= 2;
		mid = start + s;
		if (value < array[mid])
			end = end - s;
		else
			start = mid;
	} while (s >= 1);
	for (i = start; i < end; i++)
	{
		if (value == array[i])
			return (i);
	}
	return (-1);
}
