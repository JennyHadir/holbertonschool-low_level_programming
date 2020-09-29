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

	len = 0;
	while (str[len] != '\0')
		len++;
	for (i = 0; i < len; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
