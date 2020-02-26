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
	int addi = 0, addj = 0; /*var addition */

	i = 0;
	j = 0;
	for (; i < (size * size); i += size + 1)
	{
		addi += a[i]; /* addition position i*/
	}
	j = size - 1;
	for (; j < ((size * size) - 1) && j >= 0; j += size - 1)
	{
		addj += a[j]; /* addition position j*/
	}
	printf("%d, %d\n", addi, addj);
}
