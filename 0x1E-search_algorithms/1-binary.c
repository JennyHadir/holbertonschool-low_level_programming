#include "search_algos.h"
/**
 * binary_search - Search for a value in a sorted array of int
 *@array: Pointer to the first element of the array to search in
 *@size: Size of array
 *@value: Value to search for
 *Return: Index of value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, right, left;

	if (size != 0 && array)
	{
		left = 0;
		right = size - 1;
		while (right >= left)
		{
			printf("Searching in array: ");
			for (i = left; i < right; i++)
				printf("%d, ", array[i]);
			printf("%d\n", array[right]);
			mid = (right + left) / 2;
			if (value > array[mid])
				left = mid + 1;
			else if (value < array[mid])
				right = mid - 1;
			else
				return (mid);
		}
	}
	return (-1);
}
