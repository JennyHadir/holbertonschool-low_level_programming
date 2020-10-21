#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - execute a function of array
 *@size: size of array
 *@array: array
 *@action: function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
