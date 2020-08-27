#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
#include "search_algos.h"

/**
 * exponential_search - function that searches for a value in a sorted array
 * of integers using the exponential search algorithm
 * @array: *array is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: Index of value, else -1
 */
int exponential_search(int *array, size_t size, int value)
{
	int low = 1, high = (int)size, mid = 0;

	if (!array)
		return (-1);

	while (low < high && array[low] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		low = 2 * low; /* update with power */
	}

	high = MIN(low, (int)size - 1);  /* 11 */
	low  = low / 2; /* 8 */
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	while (low <= high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2; /* 8 + 11 = 19/2 = ~9 | 10 + 11/2 = 10 */
		if (array[mid] > value)
			high = mid - 1;
		else if (array[mid] < value)
			low = mid + 1;
		else /* array[mid] == value */
			return (mid);
	}
	return (-1);
}


/**
 * print_array - print array given
 * @array: *array is a pointer to the first element of the array
 * @ileft: index left
 * @iright: index right
 * Return: void
 */
void print_array(int *array, int ileft, int iright)
{
	printf("Searching in array: ");
	while (array && ileft <= iright)
	{
		printf("%d", array[ileft]);
		if (ileft != iright)
			printf(", ");
		ileft++;
	}
	printf("\n");
}
