#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
#include "search_algos.h"
#include <math.h>

/**
* jump_search - function that searches for a value in a sorted array
* of integers using the Jump search algorithm
* @array: *array is a pointer to the first element of the array
* @size: is the number of elements in array
* @value: is the value to search for
* Return: Index of value, else -1
 */

int jump_search(int *array, size_t size, int value)
{
	/*Liner search | jump search => ...*/
	int inprev = 0; /* index previous*/
	int limit = sqrt((int)size); /* limit of block */
	int step = limit; /* this value can change*/

	if (!array)
		return (-1);
	/* Obtain block to search */
	while (array[inprev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", inprev, array[inprev]);
		if (inprev >= (int)size - 1 || array[step] >= value)
			break;
		inprev = step;
		step += limit;
	}

	printf("Value found between indexes [%d] and [%d]\n", inprev, step);
	while (inprev < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", inprev, array[inprev]);
		if (array[inprev] == value)
			return (inprev);
		inprev++;
	}
	return (-1);
}
