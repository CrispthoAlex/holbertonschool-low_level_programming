#include "holberton.h"
#include <stdio.h>

/**
 * *_memcpy - copies n characteres from src to dest
 * @dest: pointer to the destination
 * @src: pointer to the source of dat to be copied
 * @n: the first n bytes to be copied
 * Return: type char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);

}
