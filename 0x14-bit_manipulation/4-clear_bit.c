#include "holberton.h"
/**
 *clear_bit - set a bit at index to 0
 *@n:given number to set
 *@index: position of the bit to set
 *Return: 1 success, -1 fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8)
return (-1);
*n &= ~(1 << index);
return (1);
}
