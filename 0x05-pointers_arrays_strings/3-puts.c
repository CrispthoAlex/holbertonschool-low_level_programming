#include "holberton.h"
#include <stdio.h>

/**
 * _puts - returns string
 * @str: pointer s length string
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;

	i = 0; /* first count */
	/* *(str + i); print each character */
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i)); /* print character */
		i++;
	}
	_putchar('\n'); /*new line */
}
