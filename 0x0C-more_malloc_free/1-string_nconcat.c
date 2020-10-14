#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate function
 *
 *@s1: string
 *@s2: string
 *@n: number of byte to copy
 *Return: new pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;
unsigned int len1 = 0, len2 = 0, i = 0;
if (s1 != NULL)
{
for (; s1[len1]; len1++)
{ ; }
}
if (s2 != NULL)
{
for (; s2[len2]; len2++)
{ ; }
}
if (n >= len2)
{
s3 = malloc(sizeof(char) * (len1 + len2 + 1));
}
else
{
s3 = malloc(sizeof(char) * (len1 + n + 1));
}
while (i < len1)
{
s3[i] = s1[i];
i++;
}
while (i < len1 + n)
{
s3[i] = s2[i - len1];
i++;
}
s3[i] = '\0';
return (s3);
}
