#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for array function
 *
 *@nmemb: integer
 *@size: integer
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ary;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ary = malloc(size * nmemb);
if (ary == NULL)
{
return (NULL);
}
for (i = 0; i < (size * nmemb); i++)
{
ary[i] = 0;
}
return (ary);
}
