#include "holberton.h"
/**
 * print_last_digit - display the last digit of a number
 *
 *@r: variable from 7-main.c
 * Return: last digit
 */
int print_last_digit(int r)
{
	r = r % 10;
	if (r < 0)
	{
		r = r * -1;
	}
	_putchar(r  + '0');
	return (r);
}
