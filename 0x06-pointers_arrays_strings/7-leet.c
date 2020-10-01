#include "holberton.h"
/**
 * leet - leet function
 *
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
	int i, j;
	char str[] = "aAeEoOtTlL";
	char str1[] = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 11; j++)
		{
			if (s[i] == str[j])
			{
				s[i] = str1[j];
			}
		}
	}
	return (s);
}
