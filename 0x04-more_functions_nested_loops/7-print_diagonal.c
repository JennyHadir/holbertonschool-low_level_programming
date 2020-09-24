#include "holberton.h"
/**
 * print_diagonal - display a diagonal function
 *
 *@n:integer
 */
void print_diagonal(int n)
{
	int j;

	if (n > 0)
	{
		_putchar(92);
		for (j = 1; j < n; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}

}
