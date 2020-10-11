#include "holberton.h"
/**
 * _memcpy - copy function
 *
 * @dest: string
 * @src: string
 * @n: bytes number
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
