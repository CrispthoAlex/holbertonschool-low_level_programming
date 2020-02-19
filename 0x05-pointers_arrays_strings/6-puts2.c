#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - returns string reverse
 * @str: pointer s string
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;

	i = 0; /* first count */

	for (; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}
	_putchar('\n');
}
