#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - returns string reverse
 * @str: pointer s string
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;
	int j;

	i = 0; /* first count */
	while (str[i] != '\0')
	{
		i++; /* count */
	}
	i++;
	if (i % 2 == 0)
	{
		j = (i / 2);
	}
	else
	{
		j = (i - 1) / 2; /* Decide what j = n to use  */
	}
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
