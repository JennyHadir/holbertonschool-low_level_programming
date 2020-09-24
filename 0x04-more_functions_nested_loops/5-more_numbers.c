#include "holberton.h"
/**
 * more_numbers - display 10 times numbers from 0 to 14 function
 *
 */
void more_numbers(void)
{
	int i, k;

	k = 0;
	while (k != 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
				_putchar(i % 10 + '0');
		}
		k++;
		_putchar('\n');
	}
}
