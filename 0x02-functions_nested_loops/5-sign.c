#include "holberton.h"
/**
 * print_sign - check the sign of a number
 *
 * @r: parametre from 4-main.c
 * Return: 0, 1, -1
 */
int print_sign(int r)
{
	if (r > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (r < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
