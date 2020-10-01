#include "holberton.h"
/**
 * rot13 - encode function
 *
 * @s: string
 * Return: string
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "AaBbCcDdEeFfGgHhIiJjKkLlMm";
	char b[] = "NnOoPpQqRrSsTtUuVvWwXxYyZz";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
			else if (s[i] == b[j])
			{
				s[i] = a[j];
			}
		}
	}
	return (s);
}
