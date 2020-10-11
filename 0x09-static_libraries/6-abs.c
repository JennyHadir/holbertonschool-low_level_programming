#include "holberton.h"

/**
 * _abs - compute the absolut value of an integer
 *
 * @r: parametre from 6-main.c
 * Return: absolut value
 */
int _abs(int r)
{
if (r < 0)
{
return (r * -1);
}
else
{
return (r);
}
}
