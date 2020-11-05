#include "holberton.h"
#include <string.h>
/**
 * binary_to_uint - convert a binary number to unsigned integer
 *@b: number to convert
 *Return: converted number or NULL
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0, multip = 1;
int i;
if (b == NULL)
return (0);
for (i = strlen(b) - 1; i >= 0; i--)
{
if (b[i] != '1' && b[i] != '0')
return (0);
if (b[i] == '1')
result += multip;
multip *= 2;
}
return (result);
}
