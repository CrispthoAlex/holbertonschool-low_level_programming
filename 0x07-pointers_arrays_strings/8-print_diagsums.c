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
	int addi, addj = 0; /*var addition */

	for (i = 0; i < (size * size) ; i += size + 1)
	{
		addi += a[i]; /* addition position i*/
	}
	for (j = size - 1; j < (size * size) - 1 ; j += size - 1)
	{
		addj += a[j]; /* addition position j*/
	}

	printf("%d, %d\n", addi, addj);
}
