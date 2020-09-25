#include "holberton.h"
/**
 * print_number - display numbers function
 *
 * @n: integer
 */
void print_number(int n)
{
	int n1, n2, n3, n4;

	if (n > 1000)
	{
		n1 = n / 1000;
		n2 = (n % 1000) / 100;
		n3 = (n / 10) % 10;
		n4 = n % 10;
		_putchar(n1 + '0');
		_putchar(n2 + '0');
		_putchar(n3 + '0');
		_putchar(n4 + '0');
	}
	else if (n > 100)
	{
		n1 = n / 100;
		n2 = (n / 10) % 10;
		n3 = n % 10;
		_putchar(n1 + '0');
		_putchar(n2 + '0');
		_putchar(n3 + '0');
	}
	else if (n > 10)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n < 0)
	{
		_putchar(45);
		n = n * -1;
		_putchar(n / 10 + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}
