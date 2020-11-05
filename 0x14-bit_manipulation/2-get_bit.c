#include "holberton.h"
/**
 * get_bit - return a bit at index
 *@index: index of the returned bit
 *@n: number
 *Return: bit searched
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (sizeof(unsigned long int) * 8 < index)
return (-1);
n = n >> index;
if (n & 1)
return (1);
else
return (0);
}
