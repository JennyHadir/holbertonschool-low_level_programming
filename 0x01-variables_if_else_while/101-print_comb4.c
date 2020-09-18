#include <stdio.h>

/**
 *main - print the numbers from 00 to 99.
 *
 *Return: 0 (success)
 */

int main(void)
{

	int x;
	int y;
	int z;

	for (x = 48; x <= 55; x++)
	{
		for (y = 48; y <= 56; y++)
		{
			for (z = 48; z <= 57; z++)
			{
				if ((x < y) && (y < z))
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if ((x != 55))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
		putchar('\n');
		return (0);
}
