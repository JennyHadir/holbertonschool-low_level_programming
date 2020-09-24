#include "holberton.h"
/**
 * more_numbers - display 10 times numbers from 0 to 14 function
 *
 */
void more_numbers(void)
{
	int i, j, k;

	for (j = 0; j < 10; j++)
	{
		for (i = 47; i <= 57; i++)
		{
			_putchar(i);
		}
		k = 47;
		while (k != 52)
		{
			_putchar(i);
			k++;
		}
		_putchar('\n');
	}
}
