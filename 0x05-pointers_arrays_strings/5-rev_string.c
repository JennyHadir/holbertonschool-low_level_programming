#include "holberton.h"
/**
 * rev_string - reverse a string function
 *
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i;

	for (i = 9; i > 1; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
