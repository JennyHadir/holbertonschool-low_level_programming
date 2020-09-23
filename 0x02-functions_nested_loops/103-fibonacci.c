#include <stdio.h>
/**
 * main - function main
 *
 * Return: sum
 */
int main(void)
{
	long int y, x, z, s;
	int w;

	x = 1;
	y = 1;
	z = 1;
	s = 0;
	while (z <= 4000000)
	{
		z = x + y;
		x = y;
		y = z;
		w = z / 2;
		if (z % 2)
		{
			s = s + w;
		}
	}
	printf("%ld\n", s);
	return (0);
}
