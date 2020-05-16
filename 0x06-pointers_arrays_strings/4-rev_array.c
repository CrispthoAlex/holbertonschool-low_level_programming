#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - reverses array integers
 * @a: array to reverse
 * @n: size to reverse
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i, j, revs;

	i = 0; /* first count */
	j = n - 1;
	while (i < j)
	{
		revs = a[i];
		a[i] = a[j];
		a[j] = revs;
		i++;
		j--;
	}
}
