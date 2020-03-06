#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - memory for an array, using malloc
 * @min: first element of array integers
 * @max: last element of array integers
 *
 * Return: element integer
 */
int *array_range(int min, int max)
{
	int *p;
	int i;/* contains min to max */
	int j;/* interactive */
	int range;/* max- min + 1 */

	if (min > max)
		return (NULL);
	range = ((max - min) + 1);

	p = malloc(sizeof(int) * range);
	if (p == NULL)/* malloc fails?*/
		return (NULL);

	for (i = min, j = 0; j < range && i <= max; i++, j++)
		p[j] = i;

	return (p);
}
