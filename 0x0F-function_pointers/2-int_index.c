#include "function_pointers.h"
/**
 * int_index - search for integer function
 *@size: size of array
 *@array: an array
 *@cmp: function
 * Return: index of the integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);
if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
return (-1);
}
