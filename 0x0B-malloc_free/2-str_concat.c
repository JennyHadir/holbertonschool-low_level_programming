# include "holberton.h"
# include <stdlib.h>

/**
 *str_concat - concat function
 *@s1: string.
 *@s2: string.
 *Return: pointer to string.
 */

char *str_concat(char *s1, char *s2)
{
char *s3;
int len1, len2, i = 0;

if (s1 != NULL)
for (len1 = 0; s1[len1]; len1++)
{ ; }
if (s2 != NULL)
for (len2 = 0; s2[len2]; len2++)
{ ; }
s3 = malloc(sizeof(char) * (len1 + len2 + 1));
if (s3 == NULL)
return (NULL);
while (i < len1)
{
s3[i] = s1[i];
i++;
}
while (i < len1 + len2)
{
s3[i] = s2[i - len1];
i++;
}
s3[i] = '\0';
return (s3);
}
