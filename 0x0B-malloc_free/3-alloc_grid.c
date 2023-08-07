#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns pointer to 2-dim array
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int (*p)[height][width], i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * width * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
