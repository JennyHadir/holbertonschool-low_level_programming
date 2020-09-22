#include "holberton.h"
/**
 * print_last_digit - display the last digit of a number
 *
 *@r: variable from 7-main.c
 * Return: last digit
 */
int print_last_digit(int r)
{
	if (r < 0)
	{
		r = r * -1;
	}
	r = r % 10;
	_putchar('0' + r);
	return (r);
}
