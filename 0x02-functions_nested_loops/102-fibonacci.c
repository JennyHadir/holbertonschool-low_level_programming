#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 if its true
 */
int main(void)
{
	int i;
	long int y, x, z;

	y = 1;
	x = 1;
	z = 1;
	for (i = 1; i <= 50; i++)
	{
		printf("%ld", z);
		z = y + x;
		x = y;
		y = z;
		if (i != 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
