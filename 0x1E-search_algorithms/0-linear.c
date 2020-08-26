#include "search_algos.h"

/**
* linear_search - function that searches for a value in an array of
* integers using the Linear search algorithm
* @array: *array is a pointer to the first element of the array
* @size: is the number of elements in array
* @value: is the value to search for
* Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	int count = 0;

	while (array && count < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", count, array[count]);
		if (array[count] == value)
			return (count);
		count++;
	}
	return (-1);
}
