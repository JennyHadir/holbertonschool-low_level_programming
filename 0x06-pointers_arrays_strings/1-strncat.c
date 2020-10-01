#include "holberton.h"
/**
 * _strncat - cat function
 * @dest: string
 * @src: string
 * @n: byte numbers
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p1, *p2;
	int i, length;

	p1 = dest;
	p2 = src;
	for (length = 0; p1[length]; length++)
	{}
	while (i < n && p2[i])
	{
		p1[length] = p2[i];
		i++;
	}
	dest = p1;
	return (dest);
}