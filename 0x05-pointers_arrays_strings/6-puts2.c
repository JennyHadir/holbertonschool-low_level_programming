#include "holberton.h"
/**
 * puts2 - print the other char function
 *
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i, j, length;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	for (j = 0; j <= length; j++)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
