#include "holberton.h"
#include <stdio.h>

/**
 * *_strcat - returns concatenate string
 * @dest: array 0 Hello string
 * @src: array 1 World string
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j; /* length dest */

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = i; /* length dest without '\0' */
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];/* concatenat */
		j++;
	}

	return (dest);
}
