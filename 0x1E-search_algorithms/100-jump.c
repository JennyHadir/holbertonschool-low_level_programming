#include "search_algos.h"
/**
 * jump_search - Search for a value in sorted array with steps
 *@array: Pointer to array of int to be searched
 *@size: Size of array
 *@value: value to be searched for
 *Return: Index of first occurence of value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, j, i, high, low;

	jump = sqrt(size);
	if (array != NULL && size != 0)
	{
		for (i = 0; i < size; i += jump)
		{
			printf("Value checked array[%ld] = [%i]\n", i, array[i]);
			low = i;
			high = i + jump;
			if (value <= array[high] && value >= array[low])
			{
				printf("Value found between indexes[%ld] and [%ld]\n", low, high);
				for (j = low; j <= high; j++)
				{
					printf("Value checked array[%ld] = [%i]\n", j, array[j]);
					if (array[j] == value)
						return (j);
				}
			}
		}
	}
	return (-1);
}
