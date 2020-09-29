#include "holberton.h"
/**
 * puts2 - print the other char function
 *
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i, len;

	i = 0;
	len = 0;
	while(str[len] != '\0')
		len++;
	while (i != len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
