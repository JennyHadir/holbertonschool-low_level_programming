#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate an array of int function
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer or NULL
 */

int **alloc_grid(int width, int height)
{
int **ary;
int i, j;

if (width < 1 || height < 1)
return (NULL);
ary = (int **)malloc(sizeof(int *) * height);
if (!ary)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
ary[i] = (int *)malloc(sizeof(int) * width);
if (!ary[i])
{
for (j = 0; j < i; j++)
free(ary[j]);
free(ary);
return (0);
}
for (j = 0; j < width; j++)
ary[i][j] = 0;
}
return (ary);
}
