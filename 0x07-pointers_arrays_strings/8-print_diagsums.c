#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - locates a character in a string
 * @a: pointer to
 * @size: size of array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	unsigned int addi, addj = 0; /*var addition */

	i = 0;
	j = 0;
	while (i < (size * size))
	{
		addi += a[i]; /* addition position i*/
		i += size + 1;
	}
	j = size - 1;
	while (j < (size * size) - 1 && j >= 0)
	{
		addj += a[j]; /* addition position j*/
		j += size - 1;
	}
	printf("%u, %u\n", addi, addj);
}
