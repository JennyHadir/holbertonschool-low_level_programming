#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers function
 *
 *@min: minimum value
 *@max: maximum value
 *Return: pointer
 */
int *array_range(int min, int max)
{
int *ary;
int n, i, m;
if (min > max)
{
return (NULL);
}
n = max - min + 1;
ary = malloc(sizeof(int) * n);
if (ary == NULL)
{
return (NULL);
}
m = min;
for (i = 0; i < n; i++)
{
ary[i] = m;
m++;
}
return (ary);
}
