#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - duplicate function
 *
 *@str: pointer to a char
 *Return: pointer to a new string
 */
char *_strdup(char *str)
{
unsigned int i, size;
char *cpy;

if (!str)
{
return (0);
}
for (size = 0; str[size]; size++)
{ ; }
cpy = malloc((size + 1) * sizeof(char));
if (!cpy)
{
return (0);
}
for (i = 0; i <= size; i++)
{
cpy[i] = str[i];
}
return (cpy);
}
