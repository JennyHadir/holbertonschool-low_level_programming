#include "holberton.h"
/**
 * reverse_array - reverse array function
 *
 * @a: array
 * @n: length of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = n - 1, j = 0, x;

	while (j < (n / 2))
	{
		x = a[i];
		a[i] = a[j];
		a[j] = x;
		j++;
		i--;
	}
}
