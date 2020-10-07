#include "holberton.h"
/**
 * rt - return the natural square root of a number
 *
 * @i: integer
 * @n: natural number
 * Return: int
 */
int normal_sqrt(int i, int n)
{
if (i * i == n)
return (i);
else if (i * i > n)
return (-1);
else
return (normal_sqrt(i + 1, n));
}
/**
 * _sqrt_recursion - return the square root og a number
 *
 * @n: number
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
 return (normal_sqrt(1, n));
}
