#include "holberton.h"
/**
 * cap_string - cap string function
 *
 * @s: string
 * Return: string
 */
char *cap_string(char *s)
{
	char T[13] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\t', ' ', '\n'};
	int i, j;

	for (i = 0; s[i]; i++)
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