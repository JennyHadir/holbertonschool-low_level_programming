#include "holberton.h"
/**
 * flip_bits - count the number of bits needed to flip fron number to other
 *@n: first num
 *@m: second num
 *Return: bits fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m, bits = 0;
while (diff > 0)
{
bits += (diff & 1);
diff = diff >> 1;
}
return (bits);
}
