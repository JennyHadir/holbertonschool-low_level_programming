#include "holberton.h"

/**
 * _isalpha - function that return 1 if c is a letter and 0 otherwise
 *
 * @r: parametre from 4-main.c
 * Return: 0 or 1
 */
int _isalpha(int r)
{
if ((r >= 65 && r <= 90) || (r >= 97 && r <= 122))
return (1);
else
return (0);
}
