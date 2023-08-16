#include "function_pointers.h"
/**
 * int_index - returns index of an integer in array
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to compare func
 *
 * Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
