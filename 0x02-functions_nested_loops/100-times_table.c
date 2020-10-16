#include "holberton.h"
/**
 * print_times_table - time table function
 *
 *@n: integer
 * Return:
 */
void print_times_table(int n)
{
int i, j, x, z, y;
if (n > 15 || n < 0)
{
return;
}
for (i = 0; i <= n; i++)
{
_putchar('0');
_putchar(',');
for (j = 1; j <= n; j++)
{
x = i * j;
if (x < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(x + '0');
}
else if (x < 100)
{
_putchar(' ');
_putchar(' ');
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
}
else
{
y = x / 100;
z = x % 100;
_putchar(' ');
_putchar(y + '0');
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
}
if (j < n)
{
_putchar(',');
}
}
_putchar('\n');
}
}
