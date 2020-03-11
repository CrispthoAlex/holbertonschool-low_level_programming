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

	if (cmp  && array)/* check if *array && *action exist */
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
/* return diff 0 pointertoeachelement  */
				return (i);
		}
	}
	return (-1);
}
