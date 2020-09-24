#include <stdio.h>
/**
 * main - main function
 *
 */
void main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 3)
		{
			printf("Fizz");
		}
		else if (i % 5)
		{
			printf("Buzz");
		}
		else if (i % 5 && i % 3)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf('%d', i);
		}
		while (i != 99)
		{
			printf(" ");
		}
	}
}
