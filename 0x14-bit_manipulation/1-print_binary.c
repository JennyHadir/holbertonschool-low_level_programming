#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - convert a number to binary
 *@n: number to convert
 *Return: void
 */
void print_binary(unsigned long int n)
{
if (n > 1)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
