#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to arry
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size < 1 || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
