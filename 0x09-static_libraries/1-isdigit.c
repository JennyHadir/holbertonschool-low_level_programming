#include "holberton.h"
/**
 * _isdigit - check if the char is a digit or not
 *
 * @c: char
 * Return: 1 if true 0 otherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
