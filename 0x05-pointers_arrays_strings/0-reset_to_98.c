#include "holberton.h"
/**
 * reset_to_98 - change the value of an integer using the adress function
 *
 * @n:pointer
 * Return: void
 */
void reset_to_98(int *n)
{
	int *p = n;

	*p = 98;
}
