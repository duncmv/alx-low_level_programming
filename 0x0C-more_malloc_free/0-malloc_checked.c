#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory with malloc
 * @b: unsigne int type arg
 *
 * Return: voi pointer to mem allocated
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
