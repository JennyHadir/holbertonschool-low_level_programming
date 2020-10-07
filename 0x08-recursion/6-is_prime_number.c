#include "holberton.h"
/**
 * _prime - return if the number is prime or not
 *
 * @i: divisor
 * @n: number to check
 * Return: 1 if prime 0 otherwise
 */
int _prime(int i, int n)
{
if (n % i == 0)
{
return (0);
}
else if (i > n / 2)
{
return (1);
}
else
{
return (_prime(i + 1, n));
}
}
/**
 * is_prime_number - check if the number is prime or not
 *
 * @n: number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
return (_prime(2, n));
}
