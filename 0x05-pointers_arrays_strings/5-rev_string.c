#include "holberton.h"
/**
 * rev_string - reverse a string function
 *
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, len;
	char str1, str;

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	len = len - 1;
	while (len > j)
	{
		str = s[j];
		str1 = s[len];
		s[j] = str1;
		s[len] = str;
		len--;
		j++;
	}
}
