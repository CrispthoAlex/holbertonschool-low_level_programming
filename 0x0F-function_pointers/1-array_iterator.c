#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a funct as a parameter on each element of array
 * @array: array of elements
 * @size: size of array
 * @action: function pointer
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);/* pointer to each function */
	}
}
