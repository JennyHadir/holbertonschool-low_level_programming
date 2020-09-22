#include <stdio.h>
/**
 * main - main function
 *
 * return: 0
 */
int main(void)
{
	int i;
	long int y, x;
	long long int z;
	
	x = 1;
	y = 1;
	printf("%ld",x);
	printf(", ");
	printf("%ld",y);
	printf(", ");
	for (i = 1; i < 49; i++)
	{
		z = y + x;
		printf("%lld",z);
		x = y;
		y = z;
		if ( i != 48)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
	
		
		
