#include "holberton.h"
#include <stdio.h>

/**
 * *_strncpy - returns n copy string
 * @dest: array 0 string
 * @src: array 1 string
 * @n: n bytes size
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];/* concatenat */
	}
	for (; i < n; i++)
	dest[i] = '\0';

	return (dest);
}
