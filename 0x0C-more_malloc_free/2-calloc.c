#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - memory for an array, using malloc
 * @nmemb: elements of "size" bytes
 * @size: bytes of each element
 *
 * Return: string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == '\0' || size == '\0')
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)/* malloc fails?*/
		return (NULL);

	for (i = 0; i <= (nmemb * size); i++)
		p[i] = '\0';

	return (p);/* */
}
