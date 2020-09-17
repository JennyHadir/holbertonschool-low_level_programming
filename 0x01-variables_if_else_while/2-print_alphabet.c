#include <stdio.h>
#include <ctype.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	return (0);
}
