#include "holberton.h"
/**
 * _memset - function that fills the first n byte of the memory area pointed to by s with the constant byte b
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
