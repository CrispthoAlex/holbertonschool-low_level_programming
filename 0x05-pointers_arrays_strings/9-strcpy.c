#include "holberton.h"
#include <stdio.h>

/**
 * *_strcpy - returns string
 * @dest: array string
 * @src: n numbres to print
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);

}
