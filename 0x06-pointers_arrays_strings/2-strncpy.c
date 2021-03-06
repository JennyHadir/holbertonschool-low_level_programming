#include "holberton.h"
/**
 * _strncpy - copy function
 *
 * @dest: string
 * @src: string
 * @n: integer, numbers of bytes
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *p1, *p2;

	i = 0;
	p1 = dest;
	p2 = src;
	while (i < n)
	{
		p1[i] = p2[i];
		i++;
	}
	dest = p1;
	return (dest);
}
