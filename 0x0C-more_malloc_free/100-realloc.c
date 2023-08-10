#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory
 * @ptr: a pointer to previous mem
 * @old_size: size allocated for ptr
 * @new_size: size of new block
 *
 * Return: pointer orNULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *copy;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	copy = ptr;

	for (i = 0; i < old_size; i++)
		p[i] = copy[i];
	free(ptr);
	return (p);
}
