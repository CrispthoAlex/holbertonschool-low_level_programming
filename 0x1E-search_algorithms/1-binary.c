#include "search_algos.h"

/**
* binary_search - function that searches for a value in an array of
* integers using the Linear search algorithm
* @array: *array is a pointer to the first element of the array
* @size: is the number of elements in array
* @value: is the value to search for
* Return: index of value, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int ileft = 0, iright = (int)size - 1, mid = 0;

	while (array && ileft <= iright)
	{
		print_array(array, ileft, iright);

		/**
		 *   if (array[ileft] == value)
		 *	return (ileft);
		 *   else if (array[iright] != value)
		 *   {  Let's to search in middle position
		*/
		mid = (ileft + iright) / 2; /*  */
		if (array[mid] > value)
			iright = mid - 1;
		else if (array[mid] < value)
			ileft = mid + 1;
		else /* array[mid] == value */
			return (mid);
		/**
		 *  }
		 * else  --(array[iright] == value)--
		 *	return (iright);
		*/
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
