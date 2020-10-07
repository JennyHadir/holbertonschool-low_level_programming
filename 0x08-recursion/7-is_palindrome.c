#include "holberton.h"
/**
 * _strlen_ - return the length of a string function
 *
 * @s: pointer to a string of char
 * Return: length of string
 */
int _strlen_(char *s)
{
if (*s)
{
return (1 + _strlen_(s + 1));
}
else
{
return (0);
}
}
/**
 * _palindrome - check if the string is palindrome or not
 *
 * @x: integer
 * @y: integer
 * @s: pointer to a char
 * Return: 1 if true 0 otherwise
 */
int _palindrome(char *s, int x, int y)
{
if (x >= y)
return (1);
else if (s[x] != s[y])
return (0);
else
return (_palindrome(s, x + 1, y - 1));
}
/**
 * is_palindrome - check if the string is palindrome or not
 *
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
return (_palindrome(s, 0, _strlen_(s) - 1));
}
