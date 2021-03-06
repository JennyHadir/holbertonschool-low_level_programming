#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of a diagonal function
 *
 * @a: array
 * @size: integer
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, s1 = 0, s2 = 0;

for (i = 0; i < size; ++i)
{
s1 += *(a + i * (size + 1));
s2 += *(a + (size - 1) * i + (size - 1));
}
printf("%d, %d\n", s1, s2);
}
