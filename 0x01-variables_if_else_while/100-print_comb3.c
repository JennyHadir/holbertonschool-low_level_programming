#include<stdio.h>

/**
 *main - print the numbers from 00 to 99.
 *
 *Return: 0 (success)
 */

int main(void)
{

	int x;
	int y;
	for (x = 48; x < 58; x++)
	{
		for (y = 48; y < 58; y++)
		{
			if (x != y)
			{
				putchar(x);
				putchar(y);
				if ((x < 58) && (y < 56))
				{
					putchar(',');
					putchar(' ');
				}
				y = y + 1;
			}
		}
	}
		putchar('\n');
		return (0);
}
