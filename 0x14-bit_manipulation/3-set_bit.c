#include "holberton.h"
#include <stdlib.h>
/**
 * set_bit - set a bit at index position to 1
 *@n: number to set
 *@index: position
 *Return: 1 success, -1 failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int i = 1;
if (n == NULL || (sizeof(unsigned long int) * 8))
return (-1);
*n = n | (i << index);
return (1);
}
