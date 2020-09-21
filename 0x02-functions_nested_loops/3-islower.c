#include "holberton.h"

/**
 * _islower - function that return 1 if the char is lowercase and 0 otherwise
 *
 * @r: parametre
 * Return: 0 or 1
 */
int _islower(int r)
{
	if (r >= 97 && r <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
