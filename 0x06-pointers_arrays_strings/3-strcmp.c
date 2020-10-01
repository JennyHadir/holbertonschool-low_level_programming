#include "holberton.h"
/**
 * _strcmp - compare function
 *
 * @s1: string
 * @s2: string
 * Return: the difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int d = 0, i = 0;
	char *p1, *p2;

	p1 = s1;
	p2 = s2;
	while (p1[i] && p2[i] && d == 0)
	{
		if (p2[i] != p1[i])
		{
			d = p1[i] - p2[i];
		}
		else
		{
			i++;
		}
	}
	return (d);
}
