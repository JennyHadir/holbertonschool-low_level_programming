#include "holberton.h"
/**
 * _strlen - function that calculate the length of a string
 *
 * @s: char
 * Return: length of s
 */
int _strlen(char *s)
{
int x = 0;

while (*s)
{
x++;
s++;
}
return (x);
}
