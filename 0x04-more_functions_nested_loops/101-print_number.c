#include "holberton.h"
/**
 * print_number - display numbers function
 *
 * @n: integer
 */
void print_number(int n)
{
	unsigned int m;

	m = n;
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	if ((n / 10) > 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
