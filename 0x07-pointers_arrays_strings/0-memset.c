#include "holberton.h"
/**
 * _memset - memset function
 *
 * @s: string
 * @b: char
 * @n: number of bytes
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
