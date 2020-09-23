#include <stdio.h>
/**
 * main - function main
 *
 * Return: sum
 */
int main(void)
{
	long int y, x, z, s;

	x = 1;
	y = 1;
	z = 1;
	s = 0;
	while (z <= 4000000)
	{
		z = x + y;
		x = y;
		y = z;
		if (y % 2 == 0)
		{
			s = s + y;
		}
	}
	printf("%ld\n", s);
	return (0);
}
