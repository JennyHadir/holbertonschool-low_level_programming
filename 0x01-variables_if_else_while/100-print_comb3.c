#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			if (x != y)
			{
				putchar (x);
				putchar (y);
				if ((x < 57) || (y < 57))
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
		y = y + 1;
	}
	putchar ('\n');
	return (0);
}
