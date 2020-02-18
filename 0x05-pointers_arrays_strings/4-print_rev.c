#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - returns string reverse
 * @s: pointer s string
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;
	int j;

	i = 0; /* first count */
	/* *(str + i) = str[i] print each character */
	while (*(s + i) != '\0')
	{
		i++; /* count */
	}

	j = i - 1; /* first, the last position */
	while (j >= 0)
	{
		_putchar(*(s + j));
		j--;
	}
	_putchar('\n'); /*new line */
}
