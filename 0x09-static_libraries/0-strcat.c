#include "holberton.h"
/**
 * _strcat - concatente function
 *
 * @dest: string
 * @src: string
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
char *p1, *p2;
int lengthdest, lengthsrc, lengthglb, i, j;

p1 = dest;
p2 = src;
for (lengthdest = 0; p1[lengthdest]; lengthdest++)
{}
for (lengthsrc = 0; p2[lengthsrc]; lengthsrc++)
{}
lengthglb = lengthsrc + lengthdest;
j = 0;
for (i = lengthdest; i <= lengthglb; i++)
{
p1[i] = p2[j];
j++;
}
dest = p1;
return (dest);
}
