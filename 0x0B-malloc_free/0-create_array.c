#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @c: char specific
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *string;

	string = malloc(size * sizeof(char));/*sizeof() --> bytes*/

	if (size == 0) /* size > 0 */
		return (NULL);
	if (string == NULL) /*if memory space is denied */
		return (NULL);
	for (i = 0; i < size; i++)
		string[i] = c;

	return (string);
}
