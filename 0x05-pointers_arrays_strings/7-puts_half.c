#include "holberton.h"
/**
 * puts_half - print the half of a string function
 *
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i, len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i  = (len - 1) / 2;
	}
	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
