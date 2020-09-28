#include "holberton.h"
/**
 * swap_int - swap function
 *
 *@a: integer
 *@b: integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
