#include "holberton.h"
/**
 * _strpbrk - locate first occurrence of string function
 *
 * @s: string
 * @accept : string
 * Return : char
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (accept[i] == *s)
{
return (s);
break;
}
}
s++;
}
return ('\0');
}
