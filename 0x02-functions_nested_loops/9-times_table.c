#include "holberton.h"
/**
 * times_table - time table function
 *
 * Return:
 */
void times_table(void)
{
int i, j, n;
for (i = 0; i < 10; i++)
{
_putchar('0');
_putchar(',');
for (j = 1; j < 10; j++)
{
n = i * j;
if (n < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(n + '0');
}
else
{
_putchar(' ');
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
if (j < 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
