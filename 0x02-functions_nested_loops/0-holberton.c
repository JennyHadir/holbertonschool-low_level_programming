#include "holberton.h"

/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	char string[] = "Holberton";
	int i;
	for (i = 0;i < 9;i++)
	{
		_putchar (string[i]);
	}
	_putchar ('\n');
	return (0);
}
