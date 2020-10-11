#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (accept[j] == s[i])
break;
}
if (!accept[j])
break;
}
return (i);
}
