#include "holberton.h"
#include <stdio.h>

/**
 * *_strncat - returns concatenate string
 * @dest: array 0 Hello string
 * @src: array 1 World string
 * @n: n bytes size
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
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
		if (i < n)
		{
		dest[j] = src[i];/* concatenat */
		}
		j++;
	}

	return (dest);
}
