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
	printf("%ld, ", y);
	for (i = 1; i < 97; i++)
	{
			z = y + x;
			printf("%ld", z);
			if (i != 96)
			{
				printf(", ");
				x = y;
				y = z;
			}
	}
	printf("\n");
	return (0);
}
