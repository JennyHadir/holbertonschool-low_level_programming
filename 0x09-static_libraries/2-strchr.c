#include "holberton.h"
/**
 * _strchr - strchr function
 * @s: string
 * @c: char
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
while (*s++)
{
if (*s == c)
{
return (s);
}
}
return (0);
}
