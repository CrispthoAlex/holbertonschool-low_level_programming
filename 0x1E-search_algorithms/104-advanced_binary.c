#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
#include "search_algos.h"

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


/**
 * advanced_binary - function that searches for a value in a sorted array
 * of integers using the Advanced binary search algorithm
 * @array: *array is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: Index of value, else -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	int low = 0, high = (int)size, mid = 0;

	if (!array)
		return (-1);
	return (aux_binary_rec(array, low, high, value));
}

int aux_binary_rec(int *array, int low, int high, int value)
{
	if (low <= high && high <= (int)size)
	{
		print_array(array, low, high - 1);
		mid = low + (high - low) / 2;
		if (array[mid] >= value) /* right side*/
		{
			high = mid + 1;
			mid = advanced_binary(array, high, value);
		}
		else if (array[mid] < value) /* left side */
		{
			low = mid + 1;
			mid = advanced_binary(array + low, size - mid - 1, value);
		}
		/* array[mid] == value */
		return (mid);
	}
}
