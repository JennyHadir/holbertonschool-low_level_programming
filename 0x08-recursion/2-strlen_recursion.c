#include "holberton.h"
/**
 * _strlen_recursion - return the length of a string function
 *
 * @s: pointer to a string of char
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion(s + 1));
}
else
{
return (0);
}
}
