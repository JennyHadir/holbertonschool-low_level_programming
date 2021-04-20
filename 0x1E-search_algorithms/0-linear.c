#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array
 *@array: Pointer to the first element of the array to search in
 *@size: Size of array
 *@value: Value to search for
 *Return: The first index where value is located or -1 if is not present
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size && array)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
