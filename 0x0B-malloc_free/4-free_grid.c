#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D array
 * @grid: pointer to 2D array
 * @height: height of array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i >= 0; i--)
		free(grid[i]);
	free(grid);
}
