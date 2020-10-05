#include "holberton.h"
/**
 * _strstr - finds the first occurrence of a substring in a string
 *
 * @haystack
 * @needle
 * Return: pointer or null
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int i = 0, j = 0;

if (needle[j] == '\0')
{
return (haystack);
}
while (haystack[i])
{
while (needle[j] && haystack[i + j] == needle[j])
{
j++;
}
if (!needle[j])
{
return (haystack + i);
}
i++;
}
return ('\0');
}
