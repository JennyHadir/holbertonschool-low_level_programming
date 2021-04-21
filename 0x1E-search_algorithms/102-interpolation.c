#include "search_algos.h"
/**
 * 
 * 
 * 
 * 
 * 
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	low = 0;
	high = size - 1;
	if (array != NULL && size > 0)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		if (array[pos] == value)
		{
			return pos;
		}
		if (array[pos] < value)
		{
			
		}
	}
}