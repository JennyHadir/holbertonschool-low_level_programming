#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print numbers from n to 98 function
 *
 * @n: integer from 10-main.c
 * Return:
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("%d", n);
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	printf("\n");
}
