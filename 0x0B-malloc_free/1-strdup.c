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
	int i = 0;
	int size; /*_strlen() - length string str */
	char *strcpy;

	if (str == '\0')/* if size > 0 str ok */
		return (NULL);
	while (*(str + i) != '\0')
	{
		i++;
	}

	size = i + 1;
	strcpy = malloc(size * sizeof(char));/*size include '\0'*/

	if (strcpy == NULL) /* if strcpy NULL*/
		return (NULL);
	for (i = 0; i < size; i++)/* reinicialized i*/
		strcpy[i] = str[i];

	strcpy[i + 1] = '\0';
	return (strcpy);
}
