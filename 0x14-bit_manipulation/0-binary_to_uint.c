#include "holberton.h"
#include <string.h>
/**
 * binary_to_uint - convert a binary number to unsigned integer
 *@b: number to convert
 *Return: converted number or NULL
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i = 0;
if (b == NULL)
return (0);
while (b[i] == '0' || b[i] == '1')
{
result <<= 1;
result += b[i] - '0';
i++;
}
return (result);
}
