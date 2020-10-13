#include "holberton.h"
#include <stdlib.h>

/**
 *free_grid - free grid's function
 *@grid: grid
 *@height: int
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
