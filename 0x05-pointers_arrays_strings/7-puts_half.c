#include "holberton.h"
/**
 * puts_half - print the half of a string function
 *
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i, len, n;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}
	for (i = n; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
