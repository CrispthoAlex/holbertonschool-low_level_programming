#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array of elements
 * @size: size of array
 * @cmp: function pointer
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;/* same data type from size */

	if (size <= 0)
		return (-1);

	if (cmp  && array)/* check if *array && *action exist */
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1) /* pointer to each function */
				return (i);
		}
		if (i == size)
		return (-1);
	}
	return (0);
}
