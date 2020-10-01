#include "holberton.h"
/**
 * cap_string - cap string function
 *
 * @s: string
 * Return: string
 */
char *cap_string(char *s)
{
char T[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\t', ' ', '\n'};
	int i, j;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	for (i = 1; s[i]; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == T[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
