#include "holberton.h"
#include <stdio.h>

/**
 * *string_toupper - lower to upper
 * @array: pointer to array
 *
 * Return: Always 0.
 */
char *string_toupper(char *array)
{
	int i;

	i = 0; /* first count */
	while (array[i] != '\0')
	{
		if (array[i] >= 97 && array[i] <= 122)
			array[i] -= 32;
		else
		i++;
	}
	return (array);
}
