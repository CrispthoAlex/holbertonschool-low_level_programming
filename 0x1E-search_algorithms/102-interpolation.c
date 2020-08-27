#include "search_algos.h"

/**
* interpolation_search - function that searches for a value in a sorted array
* of integers using the Interpolation search algorithm
* @array: *array is a pointer to the first element of the array
* @size: is the number of elements in array
* @value: is the value to search for
* Return: Index of value, else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0,  high = size - 1, pos = 0;

	if (!array)
		return (-1);
	/* Obtain block to search */
	while (low <= high)
	{
		pos = low +
			(((double)(high - low) / (array[high] - array[low])) *
			 (value - array[low]));
		if (pos < low || pos > high)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;
		else
			return (pos);

	}
	return (-1);
}
