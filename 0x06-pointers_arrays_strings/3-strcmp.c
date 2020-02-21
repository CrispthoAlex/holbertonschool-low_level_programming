#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - compares string
 * @s1: array 0 string
 * @s2: array 1 string
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int cmp; /* value compares */

	cmp = 0;
	i = 0;
	while ((cmp == 0) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			cmp = s1[i] - s2[i];
		}
		i++;
	}

return (cmp);
}
