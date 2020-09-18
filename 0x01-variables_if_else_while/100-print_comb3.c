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
	int z = 48;
	for (x = 48; x < 58; x++)
	{
		for (y = z; y < 58; y++)
		{
			if (x != y)
			{
				putchar(x);
				putchar(y);
				if ((x <  56) && (y < 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		z = z + 1;	       
	}
		putchar('\n');
		return (0);
}
