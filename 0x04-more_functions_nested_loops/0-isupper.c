#include "holberton.h"
/**
 * _isupper - function that check if a char is in upper case or not
 *
 * @c: integer
 * Return: 1 if true 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
