#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 *
 * @b: integer sizeof * n
 *
 * Return: 0 Always
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
