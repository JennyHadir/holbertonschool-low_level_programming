
#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
		putchar (x);
	for (x = 'a'; x <= 'f'; x++)
		putchar (x);
	putchar ('\n');
	return (0);
}
