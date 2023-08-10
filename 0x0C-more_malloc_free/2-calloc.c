#include "main.h"
#include <stdlib.h>
/**
 * _calloc - returns a pointer to an array
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the array or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		p[i] = 0;
	}

	return (p);
}
