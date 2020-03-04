#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - creates an array of chars
 *
 * @str: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
	int i;
	int size;
	char *strcpy;

	size = _strlen(str);/*_strlen() - length string str */
	strcpy = malloc((size + 1) * sizeof(char));/*size + 1 include '\0'*/

	if (size == 0 || str == NULL || strcpy == NULL) /* size > 0 */
		return (NULL);

	for (i = 0; i < size; i++)
		strcpy[i] = str[i];

	strcpy[i] = '\0';
	return (strcpy);
}
