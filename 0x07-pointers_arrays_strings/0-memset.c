#include "holberton.h"
#include <stdio.h>

/**
 * *_memset - prints buffer in hexa
 * @s: the memory area pointed to by s
 * @b: the constant byte c
 * @n: the first n bytes
 * Return: type char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);

}
