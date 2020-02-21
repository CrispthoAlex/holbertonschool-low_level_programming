#include "holberton.h"
#include <stdio.h>

/**
 * *string_toupper - lower to upper
 * @p: pointer to array
 *
 * Return: Always 0.
 */
char *string_toupper(char *p)
{
	int i;

	i = 0; /* first count */
	while (p[i] != '\0')
	{
		if (p[i] > 97 && p[i] < 122)
			p[i] -= 32;
		else
		i++;
	}
	return (p);
}
