#include "search_algos.h"
/**
 * linear_search - searches for a value in an array using linear search
 * @array: pointer to start of array
 * @size: size of array
 * @value: value to search for
 *
 * Return: first index of where 'value' is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}

	return (-1);
}
