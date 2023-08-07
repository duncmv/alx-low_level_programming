#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character to fill array
 *
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc(size * sizeof(char));

		if (p == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
				*(p + i) = c;
		}
	}
	return (p);
}
