#include "holberton.h"
#include <stdlib.h>
/**
 *malloc_checked - malloc function
 *
 *@b: unsigned int
 *Return: void
 */
void *malloc_checked(unsigned int b)
{
char *str;
str = malloc(b);
if (str == NULL)
{
exit(98);
return (NULL);
}
return (str);
}
