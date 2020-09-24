#include "holberton.h"
/**
 * more_numbers - display 10 times numbers from 0 to 14 function
 *
 */
void more_numbers(void)
{
	int i, j, k;

	k = 0;
	while (k != 10)
	{
		for (i = 48; i <= 57; i++)
		{
			_putchar(i);
		}
		for (j = 10; j <= 14; j++)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		k++;
		_putchar('\n');
	}
}
