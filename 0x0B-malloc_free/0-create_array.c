#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - allocation function
 *
 *@size: size of array
 *@c: char
 *Return: pointer to char if success
 */
char *create_array(unsigned int size, char c)
{
char *ary = malloc(sizeof(char) * size);
unsigned int i;

if (size == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ary[i] = c;
}
return (ary);
}
